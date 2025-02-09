#ifndef TURMS_CLIENT_SERVICE_USER_SERVICE_H
#define TURMS_CLIENT_SERVICE_USER_SERVICE_H

#include <boost/noncopyable.hpp>
#include <boost/thread/future.hpp>
#include <chrono>
#include <unordered_set>

#include "turms/client/exception/response_exception.h"
#include "turms/client/model/proto/constant/device_type.pb.h"
#include "turms/client/model/proto/constant/profile_access_strategy.pb.h"
#include "turms/client/model/proto/model/user/nearby_user.pb.h"
#include "turms/client/model/proto/model/user/user_info.pb.h"
#include "turms/client/model/proto/notification/turms_notification.pb.h"
#include "turms/client/model/response.h"
#include "turms/client/model/session_close_info.h"
#include "turms/client/model/user.h"
#include "turms/client/model/user_location.h"

namespace turms::client {
class TurmsClient;

namespace service {
class UserService : private boost::noncopyable, private std::enable_shared_from_this<UserService> {
   private:
    using time_point = std::chrono::time_point<std::chrono::system_clock>;

    using ResponseException = exception::ResponseException;

    template <typename T>
    using Response = model::Response<T>;
    using SessionCloseInfo = model::SessionCloseInfo;
    using User = model::User;
    using UserLocation = model::UserLocation;

    using TurmsNotification = model::proto::TurmsNotification;
    using TurmsRequest = model::proto::TurmsRequest;

    using DeviceType = model::proto::DeviceType;
    using LongsWithVersion = model::proto::LongsWithVersion;
    using NearbyUser = model::proto::NearbyUser;
    using ProfileAccessStrategy = model::proto::ProfileAccessStrategy;
    using ResponseAction = model::proto::ResponseAction;
    using UserFriendRequestsWithVersion = model::proto::UserFriendRequestsWithVersion;
    using UserInfo = model::proto::UserInfo;
    using UserOnlineStatus = model::proto::UserOnlineStatus;
    using UserRelationshipGroupsWithVersion = model::proto::UserRelationshipGroupsWithVersion;
    using UserRelationshipsWithVersion = model::proto::UserRelationshipsWithVersion;
    using UserStatus = model::proto::UserStatus;
    using UserSettings = model::proto::UserSettings;

    using Value = model::proto::Value;

   public:
    explicit UserService(TurmsClient& turmsClient);

    /**
     * Add an online listener that will be called when the user becomes online.
     * A session is considered online when it has a TCP connection with the server,
     * and the user is logged in by login.
     */
    template <typename T>
    auto addOnOnlineListener(T&& listener) -> void {
        onOnlineListeners_.emplace_back(std::forward<T>(listener));
    }

    /**
     * Add an offline listener that will be called when the user becomes offline.
     * A session is considered offline when it has no TCP connection with the server,
     * or has a connected TCP connection with the server, but the user is not logged in by login.
     */
    template <typename T>
    auto addOnOfflineListener(T&& listener) -> void {
        onOfflineListeners_.emplace_back(std::forward<T>(listener));
    }

    auto isLoggedIn() const -> bool;

    auto userInfo() const -> const std::optional<User>&;

    /**
     * Log in.
     *
     * * If the underlying TCP connection is not connected,
     *   the method will connect it first under the hood.
     * * If log in successfully, the session is considered online.
     *   And the listener registered by addOnOnlineListener() will be called.
     *
     * Related docs:
     * * Turms Identity and Access
     * Management(https://turms-im.github.io/docs/server/module/identity-access-management.html)
     *
     * @param userId the user ID
     * @param password the user password.
     * @param deviceType the device type.
     * If null, the detected device type will be used.
     * Note: The device types of online session that conflicts with deviceType
     * will be closed by the server if logged in successfully.
     * @param deviceDetails the device details.
     * Some plugins use this to pass additional information about the device.
     * e.g. Push notification token.
     * @param onlineStatus the online status.
     * @param location the location of the user.
     * @param storePassword whether to store the password in userInfo.
     * @throws ResponseException if an error occurs.
     * 1. If the client is not compatible with the server, throws
     * with the code ResponseStatusCode::kUnsupportedClientVersion.
     * 2. Depending on the server property `turms.gateway.simultaneous-login.strategy`,
     * throws with the code ResponseStatusCode::kLoginFromForbiddenDeviceType
     * if the specified device type is forbidden.
     * 3. If provided credentials are invalid,
     * throws with the code ResponseStatusCode::kLoginAuthenticationFailed.
     */
    auto login(int64_t userId,
               const std::optional<std::string>& password = std::nullopt,
               DeviceType deviceType = DeviceType::DESKTOP,
               const std::unordered_map<std::string, std::string>& deviceDetails = {},
               const std::optional<UserStatus>& onlineStatus = UserStatus::AVAILABLE,
               const std::optional<UserLocation>& location = std::nullopt,
               bool storePassword = false) -> boost::future<Response<void>>;

    /**
     * Log out.
     *
     * After logging out, the session is considered offline.
     * And the listener registered by addOnOfflineListener() will be called.
     *
     * @param disconnect whether to close the underlying TCP connection immediately
     * rather than sending a delete session request first and then closing the connection.
     * @throws ResponseException if an error occurs.
     */
    auto logout(bool disconnect = true) -> boost::future<Response<void>>;

    /**
     * Update the online status of the logged-in user.
     *
     * Notifications:
     * * If the server property
     * `turms.service.notification.user-online-status-updated.notify-requester-other-online-sessions`
     *   is true （true by default）,
     *   the server will send an update online status notification to all other online sessions of
     * the logged-in user actively.
     * * If the server property
     * `turms.service.notification.user-online-status-updated.notify-non-blocked-related-users`, is
     * true (false by default), the server will send an update online status notification to all
     * non-blocked related users of the logged-in user actively.
     *
     * @param onlineStatus the new online status.
     * @throws ResponseException if an error occurs.
     */
    auto updateOnlineStatus(UserStatus onlineStatus) -> boost::future<Response<void>>;

    /**
     * Disconnect the online devices of the logged-in user.
     *
     * If the specified device types are not online, nothing will happen and
     * no exception will be thrown.
     *
     * @param deviceTypes the device types to disconnect.
     * @throws ResponseException if an error occurs.
     */
    auto disconnectOnlineDevices(const std::unordered_set<DeviceType>& deviceTypes) const
        -> boost::future<Response<void>>;

    /**
     * Update the password of the logged-in user.
     *
     * @param password the new password.
     * @throws ResponseException if an error occurs.
     */
    auto updatePassword(const std::string& password) -> boost::future<Response<void>>;

    /**
     * Update the profile of the logged-in user.
     *
     * @param name the new name.
     * If null, the name will not be updated.
     * @param intro the new intro.
     * If null, the intro will not be updated.
     * @param profilePicture the new profile picture.
     * If null, the profile picture will not be updated.
     * The profile picture can be anything you want.
     * e.g. an image URL or a base64 encoded string.
     * Note: You can use StorageService::uploadUserProfilePicture()
     * to upload the profile picture and use the returned URL as profilePicture.
     * @param profileAccessStrategy the new profile access strategy.
     * If null, the profile access strategy will not be updated.
     * @param userDefinedAttributes the user-defined attributes for upsert.
     * 1. The attributes must have been defined on the server side via
     * `turms.service.user.info.user-defined-attributes.allowed-attributes`. Otherwise, the method
     * will throw with ResponseStatusCode::kIllegalArgument if
     * `turms.service.user.info.user-defined-attributes.ignore-unknown-attributes-on-upsert` is
     * false (false by default), or silently ignored if it is true.
     * 2. If trying to update existing immutable attribute, throws with
     * ResponseStatusCode::kIllegalArgument.
     * 3. Only public attributes are supported currently, which means other users can find out these
     * attributes via queryUserProfiles().
     * @param userDefinedAttributes
     * @throws ResponseException if an error occurs.
     */
    auto updateProfile(
        const std::optional<absl::string_view>& name = std::nullopt,
        const std::optional<absl::string_view>& intro = std::nullopt,
        const std::optional<absl::string_view>& profilePicture = std::nullopt,
        const std::optional<ProfileAccessStrategy>& profileAccessStrategy = std::nullopt,
        const std::unordered_map<std::string, Value>& userDefinedAttributes = {}) const
        -> boost::future<Response<void>>;

    /**
     * Find user profiles.
     *
     * @param userIds the target user IDs.
     * @param lastUpdatedDate the last updated date of user profiles stored locally.
     * The server will only return user profiles that are updated after lastUpdatedDate.
     * If null, all user profiles will be returned.
     * @return a list of user profiles.
     * @throws ResponseException if an error occurs.
     */
    auto queryUserProfiles(const std::unordered_set<int64_t>& userIds,
                           const std::optional<time_point>& lastUpdatedDate = std::nullopt) const
        -> boost::future<Response<std::vector<UserInfo>>>;

    /**
     * Search for user profiles.
     *
     * @param name search for user profiles whose name matches name.
     * @param highlight whether to highlight the name.
     * If true, the highlighted parts of the name will be paired with '\u0002' and '\u0003'.
     * @param skip the number of user profiles to skip.
     * @param limit the max number of user profiles to return.
     * @return a list of user profiles sorted in descending relevance.
     * @throws ResponseException if an error occurs.
     */
    auto searchUserProfiles(const std::string& name,
                            bool highlight = false,
                            const std::optional<int>& skip = std::nullopt,
                            const std::optional<int>& limit = std::nullopt) const
        -> boost::future<Response<std::vector<UserInfo>>>;

    /**
     * Upsert user settings, such as "preferred language", "new message alert", etc.
     * Note that only the settings specified in `turms.service.user.settings.allowed-settings` can
     * be upserted.
     *
     * Notifications:
     * * If the server property
     * `turms.service.notification.user-setting-updated.notify-requester-other-online-sessions` is
     * true (true by default), the server will send a user settings updated notification to all
     * other online sessions of the logged-in user actively.
     *
     * @param settings the user settings to upsert.
     * @throws ResponseException if an error occurs.
     * * If trying to update any existing immutable setting, throws ResponseException with the code
     * ResponseStatusCode::kIllegalArgument
     * * If trying to upsert an unknown setting and the server property
     * `turms.service.user.settings.ignore-unknown-settings-on-upsert` is false (false by default),
     * throws ResponseException with the code ResponseStatusCode::kIllegalArgument.
     */
    auto upsertUserSettings(const std::unordered_map<std::string, Value>& settings) const
        -> boost::future<Response<void>>;

    /**
     * Delete user settings.
     *
     * Notifications:
     * * If the server property
     * `turms.service.notification.user-setting-deleted.notify-requester-other-online-sessions` is
     * true (true by default), the server will send a user settings deleted notification to all
     * other online sessions of the logged-in user actively.
     *
     * @param names the names of the user settings to delete. If null, all deletable user settings
     * will be deleted.
     * @throws ResponseException if an error occurs.
     * * If trying to delete any non-deletable setting, throws ResponseException with the code
     * ResponseStatusCode::kIllegalArgument.
     */
    auto deleteUserSettings(const std::unordered_set<std::string>& names = {}) const
        -> boost::future<Response<void>>;

    /**
     * Find user settings.
     *
     * @param names the names of the user settings to query. If null, all user settings will be
     * returned.
     * @param lastUpdatedDate the last updated date of user settings stored locally.
     * The server will only return user settings if a setting has been updated after
     * lastUpdatedDate.
     * @throws ResponseException if an error occurs.
     */
    auto queryUserSettings(const std::unordered_set<std::string>& names = {},
                           const std::optional<time_point>& lastUpdatedDate = std::nullopt) const
        -> boost::future<Response<std::optional<UserSettings>>>;

    /**
     * Find nearby users.
     *
     * @param latitude the latitude.
     * @param longitude the longitude.
     * @param maxCount the max count.
     * @param maxDistance the max distance.
     * @param withCoordinates whether to include coordinates.
     * @param withDistance whether to include distance.
     * @param withUserInfo whether to include user info.
     * @return a list of nearby users.
     * @throws ResponseException if an error occurs.
     */
    auto queryNearbyUsers(float latitude,
                          float longitude,
                          const std::optional<int>& maxCount = std::nullopt,
                          const std::optional<int>& maxDistance = std::nullopt,
                          const std::optional<bool>& withCoordinates = std::nullopt,
                          const std::optional<bool>& withDistance = std::nullopt,
                          const std::optional<bool>& withUserInfo = std::nullopt) const
        -> boost::future<Response<std::vector<NearbyUser>>>;

    /**
     * Find online status of users.
     *
     * @param userIds the target user IDs.
     * @return a list of online status of users.
     * @throws ResponseException if an error occurs.
     */
    auto queryOnlineStatuses(const std::unordered_set<int64_t>& userIds) const
        -> boost::future<Response<std::vector<UserOnlineStatus>>>;

    /**
     * Find relationships.
     *
     * @param relatedUserIds the target related user IDs.
     * @param isBlocked whether to query blocked relationships.
     * If null, all relationships will be returned.
     * If true, only blocked relationships will be returned.
     * If false, only non-blocked relationships will be returned.
     * @param groupIndexes the target group indexes for querying.
     * @param lastUpdatedDate the last updated date of user relationships stored locally.
     * The server will only return relationships that are created after lastUpdatedDate.
     * If null, all relationships will be returned.
     * @return relationships and the version.
     * Note: The version can be used to update the last updated date stored locally.
     * @throws ResponseException if an error occurs.
     */
    auto queryRelationships(const std::unordered_set<int64_t>& relatedUserIds = {},
                            const std::optional<bool>& isBlocked = std::nullopt,
                            const std::unordered_set<int>& groupIndexes = {},
                            const std::optional<time_point>& lastUpdatedDate = std::nullopt) const
        -> boost::future<Response<std::optional<UserRelationshipsWithVersion>>>;

    /**
     * Find related user IDs.
     *
     * @param isBlocked whether to query blocked relationships.
     * If null, all relationships will be returned.
     * If true, only blocked relationships will be returned.
     * If false, only non-blocked relationships will be returned.
     * @param groupIndexes the target group indexes for querying.
     * @param lastUpdatedDate the last updated date of related user IDs stored locally.
     * The server will only return related user IDs that are created after lastUpdatedDate.
     * If null, all related user IDs will be returned.
     * @return related user IDs and the version.
     * Note: The version can be used to update the last updated date stored locally.
     * @throws ResponseException if an error occurs.
     */
    auto queryRelatedUserIds(const std::optional<bool>& isBlocked = std::nullopt,
                             const std::unordered_set<int>& groupIndexes = {},
                             const std::optional<time_point>& lastUpdatedDate = std::nullopt) const
        -> boost::future<Response<std::optional<LongsWithVersion>>>;

    /**
     * Find friends.
     *
     * @param groupIndexes the target group indexes for finding.
     * @param lastUpdatedDate the last updated date of friends stored locally.
     * The server will only return friends that are created after lastUpdatedDate.
     * If null, all friends will be returned.
     * @return friends and the version.
     * Note: The version can be used to update the last updated date stored locally.
     * @throws ResponseException if an error occurs.
     */
    auto queryFriends(const std::unordered_set<int>& groupIndexes = {},
                      const std::optional<time_point>& lastUpdatedDate = std::nullopt) const
        -> boost::future<Response<std::optional<UserRelationshipsWithVersion>>>;

    /**
     * Find blocked users.
     *
     * @param groupIndexes the target group indexes for finding.
     * @param lastUpdatedDate the last updated date of blocked users stored locally.
     * The server will only return friends that are created after lastUpdatedDate.
     * If null, all blocked users will be returned.
     * @return blocked users and the version.
     * Note: The version can be used to update the last updated date stored locally.
     * @throws ResponseException if an error occurs.
     */
    auto queryBlockedUsers(const std::unordered_set<int>& groupIndexes = {},
                           const std::optional<time_point>& lastUpdatedDate = std::nullopt) const
        -> boost::future<Response<std::optional<UserRelationshipsWithVersion>>>;

    /**
     * Create a relationship.
     *
     * Notifications:
     * * If the server property
     * `turms.service.notification.one-sided-relationship-group-member-added.notify-requester-other-online-sessions`
     *   is true (true by default), the server will send a new relationship notification to all
     * other online sessions of the logged-in user actively.
     * * If the server property
     * `turms.service.notification.one-sided-relationship-group-member-added.notify-new-relationship-group-member`,
     *   is true (false by default), the server will send a new relationship notification to userId
     * actively.
     *
     * @param userId the target user ID.
     * @param isBlocked whether to create a blocked relationship.
     * If true, a blocked relationship will be created,
     * and the target user will not be able to send messages to the logged-in user.
     * @param groupIndex the target group index in which create the relationship.
     * If null, the relationship will be created in the default group.
     * @throws ResponseException if an error occurs.
     */
    auto createRelationship(int64_t userId,
                            bool isBlocked,
                            const std::optional<int>& groupIndex = std::nullopt) const
        -> boost::future<Response<void>>;

    /**
     * Create a friend (non-blocked) relationship.
     *
     * Notifications:
     * * If the server property
     * `turms.service.notification.one-sided-relationship-group-member-added.notify-requester-other-online-sessions`
     *   is true (true by default), the server will send a new relationship notification to all
     * other online sessions of the logged-in user actively.
     * * If the server property
     * `turms.service.notification.one-sided-relationship-group-member-added.notify-new-relationship-group-member`,
     *   is true (false by default), the server will send a new relationship notification to userId
     * actively.
     *
     * @param userId the target user ID.
     * @param groupIndex the target group index in which create the relationship.
     * If null, the relationship will be created in the default group.
     * @throws ResponseException if an error occurs.
     */
    auto createFriendRelationship(int64_t userId,
                                  const std::optional<int>& groupIndex = std::nullopt) const
        -> boost::future<Response<void>>;

    /**
     * Create a blocked user relationship.
     *
     * Notifications:
     * * If the server property
     * `turms.service.notification.one-sided-relationship-group-member-added.notify-requester-other-online-sessions`
     *   is true (true by default), the server will send a new relationship notification to all
     * other online sessions of the logged-in user actively.
     * * If the server property
     * `turms.service.notification.one-sided-relationship-group-member-added.notify-new-relationship-group-member`,
     *   is true (false by default), the server will send a new relationship notification to userId
     * actively.
     *
     * @param userId the target user ID.
     * @param groupIndex the target group index in which create the relationship.
     * If null, the relationship will be created in the default group.
     * @throws ResponseException if an error occurs.
     */
    auto createBlockedUserRelationship(int64_t userId,
                                       const std::optional<int>& groupIndex = std::nullopt) const
        -> boost::future<Response<void>>;

    /**
     * Delete a relationship.
     *
     * Notifications:
     * * If the server property
     * `turms.service.notification.group-deleted.notify-requester-other-online-sessions` is true
     * (true by default), the server will send a delete relationship notification to all other
     * online sessions of the logged-in user actively.
     * * If the server property `turms.service.notification.group-deleted.notify-group-members`,
     *   is true (true by default), the server will send a delete relationship notification to all
     * group members in groups.
     *
     * @param relatedUserId the target user ID.
     * @param deleteGroupIndex the target group index in which delete the relationship.
     * If null, the relationship will be deleted in all groups.
     * @param targetGroupIndex TODO: not implemented yet.
     * @throws ResponseException if an error occurs.
     */
    auto deleteRelationship(int64_t relatedUserId,
                            const std::optional<int>& deleteGroupIndex = std::nullopt,
                            const std::optional<int>& targetGroupIndex = std::nullopt) const
        -> boost::future<Response<void>>;

    /**
     * Update a relationship.
     *
     * Notifications:
     * * If the server property
     * `turms.service.notification.one-sided-relationship-updated.notify-requester-other-online-sessions`
     *   is true (true by default), the server will send a update relationship notification to all
     * other online sessions of the logged-in user actively.
     * * If the server property
     * `turms.service.notification.one-sided-relationship-updated.notify-related-user`, is true
     * (false by default), the server will send a update relationship notification to relatedUserId
     * actively.
     *
     * @param relatedUserId the target user ID.
     * @param isBlocked whether to update a blocked relationship.
     * If null, the relationship will not be updated.
     * @throws ResponseException if an error occurs.
     */
    auto updateRelationship(int64_t relatedUserId,
                            const std::optional<bool>& isBlocked = std::nullopt,
                            const std::optional<int>& groupIndex = std::nullopt) const
        -> boost::future<Response<void>>;

    /**
     * Send a friend request.
     *
     * Notifications:
     * * If the server property
     * `turms.service.notification.friend-request-created.notify-requester-other-online-sessions`,
     *   is true (true by default), the server will send a new friend request notification to all
     * other online sessions of the logged-in user actively.
     * * If the server property
     * `turms.service.notification.friend-request-created.notify-friend-request-recipient`, is true
     * (true by default), the server will send a new friend request notification to recipientId
     * actively.
     *
     * @param recipientId the target user ID.
     * @param content the content of the friend request.
     * @return the request ID.
     * @throws ResponseException if an error occurs.
     */
    auto sendFriendRequest(int64_t recipientId, absl::string_view content) const
        -> boost::future<Response<int64_t>>;

    /**
     * Delete/Recall a friend request.
     *
     * Authorization:
     * * If the server property
     * `turms.service.user.friend-request.allow-recall-pending-friend-request-by-sender` is true
     * (false by default), the logged-in user can recall pending friend requests sent by themselves.
     *   Otherwise, throws ResponseException with the code
     * ResponseStatusCode::kRecallingFriendRequestIsDisabled.
     * * If the logged-in user is not the sender of the friend request,
     *   throws ResponseException with the code ResponseStatusCode::kNotSenderToRecallFriendRequest.
     * * If the friend request is not pending (e.g. expired, accepted, deleted, etc),
     *   throws ResponseException with the code ResponseStatusCode::kRecallNonPendingFriendRequest.
     *
     * Notifications:
     * * If the server property
     * `turms.service.notification.friend-request-recalled.notify-requester-other-online-sessions`
     *   is true (true by default), the server will send a delete friend request notification to all
     * other online sessions of the logged-in user actively.
     * * If the server property
     * `turms.service.notification.friend-request-recalled.notify-friend-request-recipient` is true
     * (true by default), the server will send a delete friend request notification to the recipient
     * of the friend request actively.
     *
     * @throws ResponseException if an error occurs.
     */
    auto deleteFriendRequest(int64_t requestId) const -> boost::future<Response<void>>;

    /**
     * Reply to a friend request.
     *
     * If the logged-in user accepts a friend request sent by another user,
     * the server will create a relationship between the logged-in user and the friend request
     * sender.
     *
     * Authorization:
     * * If the logged-in user is not the recipient of the friend request,
     *   throws ResponseException with the code
     * ResponseStatusCode::kNotRecipientToUpdateFriendRequest.
     * * If the friend request is not pending (e.g. expired, accepted, deleted, etc),
     *   throws ResponseException with the code ResponseStatusCode::kUpdateNonPendingFriendRequest.
     *
     * Notifications:
     * * If the server property
     * `turms.service.notification.friend-request-replied.notify-requester-other-online-sessions`,
     *   is true (true by default), the server will send a reply friend request notification to all
     * other online sessions of the logged-in user actively.
     * * If the server property
     * `turms.service.notification.friend-request-replied.notify-friend-request-sender`, is true
     * (true by default), the server will send a reply friend request notification to the friend
     * request sender actively.
     *
     * @param requestId the target friend request ID.
     * @param responseAction the response action.
     * @param reason the reason of the response.
     * @throws ResponseException if an error occurs.
     */
    auto replyFriendRequest(int64_t requestId,
                            ResponseAction responseAction,
                            const std::optional<absl::string_view>& reason = std::nullopt) const
        -> boost::future<Response<void>>;

    /**
     * Find friend requests.
     *
     * @param areSentByMe whether to find the friend requests sent by the logged-in user.
     * If true, find the friend requests sent by the logged-in user.
     * If false, find the friend requests not sent to the logged-in user.
     * @param lastUpdatedDate the last updated date of friend requests stored locally.
     * The server will only return friend requests that are updated after lastUpdatedDate.
     * If null, all friend requests will be returned.
     * @return friend requests and the version.
     * Note: The version can be used to update the last updated date stored locally.
     * @throws ResponseException if an error occurs.
     */
    auto queryFriendRequests(bool areSentByMe,
                             const std::optional<time_point>& lastUpdatedDate = std::nullopt) const
        -> boost::future<Response<std::optional<UserFriendRequestsWithVersion>>>;

    /**
     * Create a relationship group.
     *
     * @param name the name of the group.
     * @return the index of the created group.
     * @throws ResponseException if an error occurs.
     */
    auto createRelationshipGroup(absl::string_view name) const -> boost::future<Response<int>>;

    /**
     * Delete relationship groups.
     *
     * Notifications:
     * * If the server property
     * `turms.service.notification.one-sided-relationship-group-deleted.notify-requester-other-online-sessions`,
     *   is true (true by default), the server will send a delete relationship groups relationship
     * notification to all other online sessions of the logged-in user actively.
     * * If the server property
     * `turms.service.notification.one-sided-relationship-group-deleted.notify-relationship-group-members`,
     *   is true (false by default), the server will send a delete relationship groups relationship
     * notification to all group members in groups.
     *
     * @param groupIndex the target group index to delete.
     * @param targetGroupIndex move the group members of groupIndex to targetGroupIndex
     * when the group is deleted.
     * If null, the group members of groupIndex will be moved to the default group.
     * @throws ResponseException if an error occurs.
     */
    auto deleteRelationshipGroups(int groupIndex,
                                  const std::optional<int>& targetGroupIndex = std::nullopt) const
        -> boost::future<Response<void>>;

    /**
     * Update a relationship group.
     *
     * Notifications:
     * * If the server property
     * `turms.service.notification.one-sided-relationship-group-updated.notify-requester-other-online-sessions`,
     *   is true (true by default), the server will send a updated relationship groups relationship
     * notification to all other online sessions of the logged-in user actively.
     * * If the server property
     * `turms.service.notification.one-sided-relationship-group-updated.notify-relationship-group-members`,
     *   is true (false by default), the server will send a updated relationship groups relationship
     * notification to all group members in groups.
     *
     * @param groupIndex the target group index.
     * @param newName the new name of the group.
     * @throws ResponseException if an error occurs.
     */
    auto updateRelationshipGroup(int groupIndex, absl::string_view newName) const
        -> boost::future<Response<void>>;

    /**
     * Find relationship groups.
     *
     * @param lastUpdatedDate the last updated date of relationship groups stored locally.
     * The server will only return relationship groups that are updated after lastUpdatedDate.
     * If null, all relationship groups will be returned.
     * @return relationship groups and the version.
     * Note: The version can be used to update the last updated date stored locally.
     * @throws ResponseException if an error occurs.
     */
    auto queryRelationshipGroups(const std::optional<time_point>& lastUpdatedDate = std::nullopt)
        const -> boost::future<Response<std::optional<UserRelationshipGroupsWithVersion>>>;

    /**
     * Move a related user to a group.
     *
     * Notifications:
     * * If the server property
     * `turms.service.notification.one-sided-relationship-updated.notify-requester-other-online-sessions`,
     *   is true (true by default), the server will send a update relationship notification to all
     * other online sessions of the logged-in user actively.
     * * If the server property
     * `turms.service.notification.one-sided-relationship-updated.notify-related-user`, is true
     * (false by default), the server will send a update relationship notification to relatedUserId
     * actively.
     *
     * @param relatedUserId the target user ID.
     * @param groupIndex the target group index to which move the user.
     * @throws ResponseException if an error occurs.
     */
    auto moveRelatedUserToGroup(int64_t relatedUserId, int groupIndex) const
        -> boost::future<Response<void>>;

    /**
     * Update the location of the logged-in user.
     *
     * Note:
     * * UserService::updateLocation() is different from
     *   MessageService::sendMessage() with records of location.
     *   UserService::updateLocation() sends the location of user to
     *   the server only.
     *   MessageService::sendMessage() with records of location sends the user's location
     *   to both server and its recipients.
     *
     * @param latitude the latitude.
     * @param longitude the longitude.
     * @param details the location details
     * @throws ResponseException if an error occurs.
     */
    auto updateLocation(float latitude,
                        float longitude,
                        const std::unordered_map<std::string, std::string>& details = {}) const
        -> boost::future<Response<void>>;

   private:
    TurmsClient& turmsClient_;
    std::optional<User> userInfo_;
    bool storePassword_{false};
    std::list<std::function<void()>> onOnlineListeners_;
    std::list<std::function<void(const SessionCloseInfo&)>> onOfflineListeners_;

    auto changeToOnline() const -> void;

    auto changeToOffline(const SessionCloseInfo& sessionCloseInfo) -> void;
};
}  // namespace service
}  // namespace turms::client

#endif  // TURMS_CLIENT_SERVICE_USER_SERVICE_H
