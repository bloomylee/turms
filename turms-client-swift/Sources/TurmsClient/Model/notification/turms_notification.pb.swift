// DO NOT EDIT.
// swift-format-ignore-file
//
// Generated by the Swift generator plugin for the protocol buffer compiler.
// Source: notification/turms_notification.proto
//
// For information on using the generated types, please see the documentation:
//   https://github.com/apple/swift-protobuf/

import Foundation
import SwiftProtobuf

// If the compiler emits an error on this type, it is because this file
// was generated by a version of the `protoc` Swift plug-in that is
// incompatible with the version of SwiftProtobuf to which you are linking.
// Please ensure that you are building against the same version of the API
// that was used to generate this file.
fileprivate struct _GeneratedWithProtocGenSwiftVersion: SwiftProtobuf.ProtobufAPIVersionCheck {
  struct _2: SwiftProtobuf.ProtobufAPIVersion_2 {}
  typealias Version = _2
}

public struct TurmsNotification {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  /// Note: request_id is allowed to be duplicate because
  /// it is used for clients to identify the response of the same request id in a session
  public var requestID: Int64 {
    get {return _storage._requestID ?? 0}
    set {_uniqueStorage()._requestID = newValue}
  }
  /// Returns true if `requestID` has been explicitly set.
  public var hasRequestID: Bool {return _storage._requestID != nil}
  /// Clears the value of `requestID`. Subsequent reads from it will return its default value.
  public mutating func clearRequestID() {_uniqueStorage()._requestID = nil}

  public var code: Int32 {
    get {return _storage._code ?? 0}
    set {_uniqueStorage()._code = newValue}
  }
  /// Returns true if `code` has been explicitly set.
  public var hasCode: Bool {return _storage._code != nil}
  /// Clears the value of `code`. Subsequent reads from it will return its default value.
  public mutating func clearCode() {_uniqueStorage()._code = nil}

  public var reason: String {
    get {return _storage._reason ?? String()}
    set {_uniqueStorage()._reason = newValue}
  }
  /// Returns true if `reason` has been explicitly set.
  public var hasReason: Bool {return _storage._reason != nil}
  /// Clears the value of `reason`. Subsequent reads from it will return its default value.
  public mutating func clearReason() {_uniqueStorage()._reason = nil}

  public var data: TurmsNotification.DataMessage {
    get {return _storage._data ?? TurmsNotification.DataMessage()}
    set {_uniqueStorage()._data = newValue}
  }
  /// Returns true if `data` has been explicitly set.
  public var hasData: Bool {return _storage._data != nil}
  /// Clears the value of `data`. Subsequent reads from it will return its default value.
  public mutating func clearData() {_uniqueStorage()._data = nil}

  public var relayedRequest: TurmsRequest {
    get {return _storage._relayedRequest ?? TurmsRequest()}
    set {_uniqueStorage()._relayedRequest = newValue}
  }
  /// Returns true if `relayedRequest` has been explicitly set.
  public var hasRelayedRequest: Bool {return _storage._relayedRequest != nil}
  /// Clears the value of `relayedRequest`. Subsequent reads from it will return its default value.
  public mutating func clearRelayedRequest() {_uniqueStorage()._relayedRequest = nil}

  /// requester_id only exists when a requester triggers a notification to its recipients
  /// Note: Do not move requester_id to TurmsRequest because it needs to rebuild a whole TurmsNotification
  /// when recipients need the requester_id.
  public var requesterID: Int64 {
    get {return _storage._requesterID ?? 0}
    set {_uniqueStorage()._requesterID = newValue}
  }
  /// Returns true if `requesterID` has been explicitly set.
  public var hasRequesterID: Bool {return _storage._requesterID != nil}
  /// Clears the value of `requesterID`. Subsequent reads from it will return its default value.
  public mutating func clearRequesterID() {_uniqueStorage()._requesterID = nil}

  public var closeStatus: Int32 {
    get {return _storage._closeStatus ?? 0}
    set {_uniqueStorage()._closeStatus = newValue}
  }
  /// Returns true if `closeStatus` has been explicitly set.
  public var hasCloseStatus: Bool {return _storage._closeStatus != nil}
  /// Clears the value of `closeStatus`. Subsequent reads from it will return its default value.
  public mutating func clearCloseStatus() {_uniqueStorage()._closeStatus = nil}

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public struct DataMessage {
    // SwiftProtobuf.Message conformance is added in an extension below. See the
    // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
    // methods supported on all messages.

    public var kind: TurmsNotification.DataMessage.OneOf_Kind? = nil

    public var ids: Int64Values {
      get {
        if case .ids(let v)? = kind {return v}
        return Int64Values()
      }
      set {kind = .ids(newValue)}
    }

    public var idsWithVersion: Int64ValuesWithVersion {
      get {
        if case .idsWithVersion(let v)? = kind {return v}
        return Int64ValuesWithVersion()
      }
      set {kind = .idsWithVersion(newValue)}
    }

    public var url: String {
      get {
        if case .url(let v)? = kind {return v}
        return String()
      }
      set {kind = .url(newValue)}
    }

    public var conversations: Conversations {
      get {
        if case .conversations(let v)? = kind {return v}
        return Conversations()
      }
      set {kind = .conversations(newValue)}
    }

    public var messages: Messages {
      get {
        if case .messages(let v)? = kind {return v}
        return Messages()
      }
      set {kind = .messages(newValue)}
    }

    public var messagesWithTotalList: MessagesWithTotalList {
      get {
        if case .messagesWithTotalList(let v)? = kind {return v}
        return MessagesWithTotalList()
      }
      set {kind = .messagesWithTotalList(newValue)}
    }

    public var userSession: UserSession {
      get {
        if case .userSession(let v)? = kind {return v}
        return UserSession()
      }
      set {kind = .userSession(newValue)}
    }

    public var usersInfosWithVersion: UsersInfosWithVersion {
      get {
        if case .usersInfosWithVersion(let v)? = kind {return v}
        return UsersInfosWithVersion()
      }
      set {kind = .usersInfosWithVersion(newValue)}
    }

    public var usersOnlineStatuses: UsersOnlineStatuses {
      get {
        if case .usersOnlineStatuses(let v)? = kind {return v}
        return UsersOnlineStatuses()
      }
      set {kind = .usersOnlineStatuses(newValue)}
    }

    public var userFriendRequestsWithVersion: UserFriendRequestsWithVersion {
      get {
        if case .userFriendRequestsWithVersion(let v)? = kind {return v}
        return UserFriendRequestsWithVersion()
      }
      set {kind = .userFriendRequestsWithVersion(newValue)}
    }

    public var userRelationshipGroupsWithVersion: UserRelationshipGroupsWithVersion {
      get {
        if case .userRelationshipGroupsWithVersion(let v)? = kind {return v}
        return UserRelationshipGroupsWithVersion()
      }
      set {kind = .userRelationshipGroupsWithVersion(newValue)}
    }

    public var userRelationshipsWithVersion: UserRelationshipsWithVersion {
      get {
        if case .userRelationshipsWithVersion(let v)? = kind {return v}
        return UserRelationshipsWithVersion()
      }
      set {kind = .userRelationshipsWithVersion(newValue)}
    }

    public var userSessionIds: UserSessionIds {
      get {
        if case .userSessionIds(let v)? = kind {return v}
        return UserSessionIds()
      }
      set {kind = .userSessionIds(newValue)}
    }

    public var groupInvitationsWithVersion: GroupInvitationsWithVersion {
      get {
        if case .groupInvitationsWithVersion(let v)? = kind {return v}
        return GroupInvitationsWithVersion()
      }
      set {kind = .groupInvitationsWithVersion(newValue)}
    }

    public var groupJoinQuestionAnswerResult: GroupJoinQuestionsAnswerResult {
      get {
        if case .groupJoinQuestionAnswerResult(let v)? = kind {return v}
        return GroupJoinQuestionsAnswerResult()
      }
      set {kind = .groupJoinQuestionAnswerResult(newValue)}
    }

    public var groupJoinRequestsWithVersion: GroupJoinRequestsWithVersion {
      get {
        if case .groupJoinRequestsWithVersion(let v)? = kind {return v}
        return GroupJoinRequestsWithVersion()
      }
      set {kind = .groupJoinRequestsWithVersion(newValue)}
    }

    public var groupJoinQuestionsWithVersion: GroupJoinQuestionsWithVersion {
      get {
        if case .groupJoinQuestionsWithVersion(let v)? = kind {return v}
        return GroupJoinQuestionsWithVersion()
      }
      set {kind = .groupJoinQuestionsWithVersion(newValue)}
    }

    public var groupMembersWithVersion: GroupMembersWithVersion {
      get {
        if case .groupMembersWithVersion(let v)? = kind {return v}
        return GroupMembersWithVersion()
      }
      set {kind = .groupMembersWithVersion(newValue)}
    }

    public var groupsWithVersion: GroupsWithVersion {
      get {
        if case .groupsWithVersion(let v)? = kind {return v}
        return GroupsWithVersion()
      }
      set {kind = .groupsWithVersion(newValue)}
    }

    public var unknownFields = SwiftProtobuf.UnknownStorage()

    public enum OneOf_Kind: Equatable {
      case ids(Int64Values)
      case idsWithVersion(Int64ValuesWithVersion)
      case url(String)
      case conversations(Conversations)
      case messages(Messages)
      case messagesWithTotalList(MessagesWithTotalList)
      case userSession(UserSession)
      case usersInfosWithVersion(UsersInfosWithVersion)
      case usersOnlineStatuses(UsersOnlineStatuses)
      case userFriendRequestsWithVersion(UserFriendRequestsWithVersion)
      case userRelationshipGroupsWithVersion(UserRelationshipGroupsWithVersion)
      case userRelationshipsWithVersion(UserRelationshipsWithVersion)
      case userSessionIds(UserSessionIds)
      case groupInvitationsWithVersion(GroupInvitationsWithVersion)
      case groupJoinQuestionAnswerResult(GroupJoinQuestionsAnswerResult)
      case groupJoinRequestsWithVersion(GroupJoinRequestsWithVersion)
      case groupJoinQuestionsWithVersion(GroupJoinQuestionsWithVersion)
      case groupMembersWithVersion(GroupMembersWithVersion)
      case groupsWithVersion(GroupsWithVersion)

    #if !swift(>=4.1)
      public static func ==(lhs: TurmsNotification.DataMessage.OneOf_Kind, rhs: TurmsNotification.DataMessage.OneOf_Kind) -> Bool {
        // The use of inline closures is to circumvent an issue where the compiler
        // allocates stack space for every case branch when no optimizations are
        // enabled. https://github.com/apple/swift-protobuf/issues/1034
        switch (lhs, rhs) {
        case (.ids, .ids): return {
          guard case .ids(let l) = lhs, case .ids(let r) = rhs else { preconditionFailure() }
          return l == r
        }()
        case (.idsWithVersion, .idsWithVersion): return {
          guard case .idsWithVersion(let l) = lhs, case .idsWithVersion(let r) = rhs else { preconditionFailure() }
          return l == r
        }()
        case (.url, .url): return {
          guard case .url(let l) = lhs, case .url(let r) = rhs else { preconditionFailure() }
          return l == r
        }()
        case (.conversations, .conversations): return {
          guard case .conversations(let l) = lhs, case .conversations(let r) = rhs else { preconditionFailure() }
          return l == r
        }()
        case (.messages, .messages): return {
          guard case .messages(let l) = lhs, case .messages(let r) = rhs else { preconditionFailure() }
          return l == r
        }()
        case (.messagesWithTotalList, .messagesWithTotalList): return {
          guard case .messagesWithTotalList(let l) = lhs, case .messagesWithTotalList(let r) = rhs else { preconditionFailure() }
          return l == r
        }()
        case (.userSession, .userSession): return {
          guard case .userSession(let l) = lhs, case .userSession(let r) = rhs else { preconditionFailure() }
          return l == r
        }()
        case (.usersInfosWithVersion, .usersInfosWithVersion): return {
          guard case .usersInfosWithVersion(let l) = lhs, case .usersInfosWithVersion(let r) = rhs else { preconditionFailure() }
          return l == r
        }()
        case (.usersOnlineStatuses, .usersOnlineStatuses): return {
          guard case .usersOnlineStatuses(let l) = lhs, case .usersOnlineStatuses(let r) = rhs else { preconditionFailure() }
          return l == r
        }()
        case (.userFriendRequestsWithVersion, .userFriendRequestsWithVersion): return {
          guard case .userFriendRequestsWithVersion(let l) = lhs, case .userFriendRequestsWithVersion(let r) = rhs else { preconditionFailure() }
          return l == r
        }()
        case (.userRelationshipGroupsWithVersion, .userRelationshipGroupsWithVersion): return {
          guard case .userRelationshipGroupsWithVersion(let l) = lhs, case .userRelationshipGroupsWithVersion(let r) = rhs else { preconditionFailure() }
          return l == r
        }()
        case (.userRelationshipsWithVersion, .userRelationshipsWithVersion): return {
          guard case .userRelationshipsWithVersion(let l) = lhs, case .userRelationshipsWithVersion(let r) = rhs else { preconditionFailure() }
          return l == r
        }()
        case (.userSessionIds, .userSessionIds): return {
          guard case .userSessionIds(let l) = lhs, case .userSessionIds(let r) = rhs else { preconditionFailure() }
          return l == r
        }()
        case (.groupInvitationsWithVersion, .groupInvitationsWithVersion): return {
          guard case .groupInvitationsWithVersion(let l) = lhs, case .groupInvitationsWithVersion(let r) = rhs else { preconditionFailure() }
          return l == r
        }()
        case (.groupJoinQuestionAnswerResult, .groupJoinQuestionAnswerResult): return {
          guard case .groupJoinQuestionAnswerResult(let l) = lhs, case .groupJoinQuestionAnswerResult(let r) = rhs else { preconditionFailure() }
          return l == r
        }()
        case (.groupJoinRequestsWithVersion, .groupJoinRequestsWithVersion): return {
          guard case .groupJoinRequestsWithVersion(let l) = lhs, case .groupJoinRequestsWithVersion(let r) = rhs else { preconditionFailure() }
          return l == r
        }()
        case (.groupJoinQuestionsWithVersion, .groupJoinQuestionsWithVersion): return {
          guard case .groupJoinQuestionsWithVersion(let l) = lhs, case .groupJoinQuestionsWithVersion(let r) = rhs else { preconditionFailure() }
          return l == r
        }()
        case (.groupMembersWithVersion, .groupMembersWithVersion): return {
          guard case .groupMembersWithVersion(let l) = lhs, case .groupMembersWithVersion(let r) = rhs else { preconditionFailure() }
          return l == r
        }()
        case (.groupsWithVersion, .groupsWithVersion): return {
          guard case .groupsWithVersion(let l) = lhs, case .groupsWithVersion(let r) = rhs else { preconditionFailure() }
          return l == r
        }()
        default: return false
        }
      }
    #endif
    }

    public init() {}
  }

  public init() {}

  fileprivate var _storage = _StorageClass.defaultInstance
}

// MARK: - Code below here is support for the SwiftProtobuf runtime.

fileprivate let _protobuf_package = "im.turms.proto"

extension TurmsNotification: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".TurmsNotification"
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .standard(proto: "request_id"),
    2: .same(proto: "code"),
    3: .same(proto: "reason"),
    4: .same(proto: "data"),
    5: .standard(proto: "relayed_request"),
    6: .standard(proto: "requester_id"),
    7: .standard(proto: "close_status"),
  ]

  fileprivate class _StorageClass {
    var _requestID: Int64? = nil
    var _code: Int32? = nil
    var _reason: String? = nil
    var _data: TurmsNotification.DataMessage? = nil
    var _relayedRequest: TurmsRequest? = nil
    var _requesterID: Int64? = nil
    var _closeStatus: Int32? = nil

    static let defaultInstance = _StorageClass()

    private init() {}

    init(copying source: _StorageClass) {
      _requestID = source._requestID
      _code = source._code
      _reason = source._reason
      _data = source._data
      _relayedRequest = source._relayedRequest
      _requesterID = source._requesterID
      _closeStatus = source._closeStatus
    }
  }

  fileprivate mutating func _uniqueStorage() -> _StorageClass {
    if !isKnownUniquelyReferenced(&_storage) {
      _storage = _StorageClass(copying: _storage)
    }
    return _storage
  }

  public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    _ = _uniqueStorage()
    try withExtendedLifetime(_storage) { (_storage: _StorageClass) in
      while let fieldNumber = try decoder.nextFieldNumber() {
        // The use of inline closures is to circumvent an issue where the compiler
        // allocates stack space for every case branch when no optimizations are
        // enabled. https://github.com/apple/swift-protobuf/issues/1034
        switch fieldNumber {
        case 1: try { try decoder.decodeSingularInt64Field(value: &_storage._requestID) }()
        case 2: try { try decoder.decodeSingularInt32Field(value: &_storage._code) }()
        case 3: try { try decoder.decodeSingularStringField(value: &_storage._reason) }()
        case 4: try { try decoder.decodeSingularMessageField(value: &_storage._data) }()
        case 5: try { try decoder.decodeSingularMessageField(value: &_storage._relayedRequest) }()
        case 6: try { try decoder.decodeSingularInt64Field(value: &_storage._requesterID) }()
        case 7: try { try decoder.decodeSingularInt32Field(value: &_storage._closeStatus) }()
        default: break
        }
      }
    }
  }

  public func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    try withExtendedLifetime(_storage) { (_storage: _StorageClass) in
      if let v = _storage._requestID {
        try visitor.visitSingularInt64Field(value: v, fieldNumber: 1)
      }
      if let v = _storage._code {
        try visitor.visitSingularInt32Field(value: v, fieldNumber: 2)
      }
      if let v = _storage._reason {
        try visitor.visitSingularStringField(value: v, fieldNumber: 3)
      }
      if let v = _storage._data {
        try visitor.visitSingularMessageField(value: v, fieldNumber: 4)
      }
      if let v = _storage._relayedRequest {
        try visitor.visitSingularMessageField(value: v, fieldNumber: 5)
      }
      if let v = _storage._requesterID {
        try visitor.visitSingularInt64Field(value: v, fieldNumber: 6)
      }
      if let v = _storage._closeStatus {
        try visitor.visitSingularInt32Field(value: v, fieldNumber: 7)
      }
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  public static func ==(lhs: TurmsNotification, rhs: TurmsNotification) -> Bool {
    if lhs._storage !== rhs._storage {
      let storagesAreEqual: Bool = withExtendedLifetime((lhs._storage, rhs._storage)) { (_args: (_StorageClass, _StorageClass)) in
        let _storage = _args.0
        let rhs_storage = _args.1
        if _storage._requestID != rhs_storage._requestID {return false}
        if _storage._code != rhs_storage._code {return false}
        if _storage._reason != rhs_storage._reason {return false}
        if _storage._data != rhs_storage._data {return false}
        if _storage._relayedRequest != rhs_storage._relayedRequest {return false}
        if _storage._requesterID != rhs_storage._requesterID {return false}
        if _storage._closeStatus != rhs_storage._closeStatus {return false}
        return true
      }
      if !storagesAreEqual {return false}
    }
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension TurmsNotification.DataMessage: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = TurmsNotification.protoMessageName + ".Data"
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "ids"),
    2: .standard(proto: "ids_with_version"),
    3: .same(proto: "url"),
    4: .same(proto: "conversations"),
    5: .same(proto: "messages"),
    6: .standard(proto: "messages_with_total_list"),
    7: .standard(proto: "user_session"),
    8: .standard(proto: "users_infos_with_version"),
    9: .standard(proto: "users_online_statuses"),
    10: .standard(proto: "user_friend_requests_with_version"),
    11: .standard(proto: "user_relationship_groups_with_version"),
    12: .standard(proto: "user_relationships_with_version"),
    13: .standard(proto: "user_session_ids"),
    14: .standard(proto: "group_invitations_with_version"),
    15: .standard(proto: "group_join_question_answer_result"),
    16: .standard(proto: "group_join_requests_with_version"),
    17: .standard(proto: "group_join_questions_with_version"),
    18: .standard(proto: "group_members_with_version"),
    19: .standard(proto: "groups_with_version"),
  ]

  public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch fieldNumber {
      case 1: try {
        var v: Int64Values?
        var hadOneofValue = false
        if let current = self.kind {
          hadOneofValue = true
          if case .ids(let m) = current {v = m}
        }
        try decoder.decodeSingularMessageField(value: &v)
        if let v = v {
          if hadOneofValue {try decoder.handleConflictingOneOf()}
          self.kind = .ids(v)
        }
      }()
      case 2: try {
        var v: Int64ValuesWithVersion?
        var hadOneofValue = false
        if let current = self.kind {
          hadOneofValue = true
          if case .idsWithVersion(let m) = current {v = m}
        }
        try decoder.decodeSingularMessageField(value: &v)
        if let v = v {
          if hadOneofValue {try decoder.handleConflictingOneOf()}
          self.kind = .idsWithVersion(v)
        }
      }()
      case 3: try {
        var v: String?
        try decoder.decodeSingularStringField(value: &v)
        if let v = v {
          if self.kind != nil {try decoder.handleConflictingOneOf()}
          self.kind = .url(v)
        }
      }()
      case 4: try {
        var v: Conversations?
        var hadOneofValue = false
        if let current = self.kind {
          hadOneofValue = true
          if case .conversations(let m) = current {v = m}
        }
        try decoder.decodeSingularMessageField(value: &v)
        if let v = v {
          if hadOneofValue {try decoder.handleConflictingOneOf()}
          self.kind = .conversations(v)
        }
      }()
      case 5: try {
        var v: Messages?
        var hadOneofValue = false
        if let current = self.kind {
          hadOneofValue = true
          if case .messages(let m) = current {v = m}
        }
        try decoder.decodeSingularMessageField(value: &v)
        if let v = v {
          if hadOneofValue {try decoder.handleConflictingOneOf()}
          self.kind = .messages(v)
        }
      }()
      case 6: try {
        var v: MessagesWithTotalList?
        var hadOneofValue = false
        if let current = self.kind {
          hadOneofValue = true
          if case .messagesWithTotalList(let m) = current {v = m}
        }
        try decoder.decodeSingularMessageField(value: &v)
        if let v = v {
          if hadOneofValue {try decoder.handleConflictingOneOf()}
          self.kind = .messagesWithTotalList(v)
        }
      }()
      case 7: try {
        var v: UserSession?
        var hadOneofValue = false
        if let current = self.kind {
          hadOneofValue = true
          if case .userSession(let m) = current {v = m}
        }
        try decoder.decodeSingularMessageField(value: &v)
        if let v = v {
          if hadOneofValue {try decoder.handleConflictingOneOf()}
          self.kind = .userSession(v)
        }
      }()
      case 8: try {
        var v: UsersInfosWithVersion?
        var hadOneofValue = false
        if let current = self.kind {
          hadOneofValue = true
          if case .usersInfosWithVersion(let m) = current {v = m}
        }
        try decoder.decodeSingularMessageField(value: &v)
        if let v = v {
          if hadOneofValue {try decoder.handleConflictingOneOf()}
          self.kind = .usersInfosWithVersion(v)
        }
      }()
      case 9: try {
        var v: UsersOnlineStatuses?
        var hadOneofValue = false
        if let current = self.kind {
          hadOneofValue = true
          if case .usersOnlineStatuses(let m) = current {v = m}
        }
        try decoder.decodeSingularMessageField(value: &v)
        if let v = v {
          if hadOneofValue {try decoder.handleConflictingOneOf()}
          self.kind = .usersOnlineStatuses(v)
        }
      }()
      case 10: try {
        var v: UserFriendRequestsWithVersion?
        var hadOneofValue = false
        if let current = self.kind {
          hadOneofValue = true
          if case .userFriendRequestsWithVersion(let m) = current {v = m}
        }
        try decoder.decodeSingularMessageField(value: &v)
        if let v = v {
          if hadOneofValue {try decoder.handleConflictingOneOf()}
          self.kind = .userFriendRequestsWithVersion(v)
        }
      }()
      case 11: try {
        var v: UserRelationshipGroupsWithVersion?
        var hadOneofValue = false
        if let current = self.kind {
          hadOneofValue = true
          if case .userRelationshipGroupsWithVersion(let m) = current {v = m}
        }
        try decoder.decodeSingularMessageField(value: &v)
        if let v = v {
          if hadOneofValue {try decoder.handleConflictingOneOf()}
          self.kind = .userRelationshipGroupsWithVersion(v)
        }
      }()
      case 12: try {
        var v: UserRelationshipsWithVersion?
        var hadOneofValue = false
        if let current = self.kind {
          hadOneofValue = true
          if case .userRelationshipsWithVersion(let m) = current {v = m}
        }
        try decoder.decodeSingularMessageField(value: &v)
        if let v = v {
          if hadOneofValue {try decoder.handleConflictingOneOf()}
          self.kind = .userRelationshipsWithVersion(v)
        }
      }()
      case 13: try {
        var v: UserSessionIds?
        var hadOneofValue = false
        if let current = self.kind {
          hadOneofValue = true
          if case .userSessionIds(let m) = current {v = m}
        }
        try decoder.decodeSingularMessageField(value: &v)
        if let v = v {
          if hadOneofValue {try decoder.handleConflictingOneOf()}
          self.kind = .userSessionIds(v)
        }
      }()
      case 14: try {
        var v: GroupInvitationsWithVersion?
        var hadOneofValue = false
        if let current = self.kind {
          hadOneofValue = true
          if case .groupInvitationsWithVersion(let m) = current {v = m}
        }
        try decoder.decodeSingularMessageField(value: &v)
        if let v = v {
          if hadOneofValue {try decoder.handleConflictingOneOf()}
          self.kind = .groupInvitationsWithVersion(v)
        }
      }()
      case 15: try {
        var v: GroupJoinQuestionsAnswerResult?
        var hadOneofValue = false
        if let current = self.kind {
          hadOneofValue = true
          if case .groupJoinQuestionAnswerResult(let m) = current {v = m}
        }
        try decoder.decodeSingularMessageField(value: &v)
        if let v = v {
          if hadOneofValue {try decoder.handleConflictingOneOf()}
          self.kind = .groupJoinQuestionAnswerResult(v)
        }
      }()
      case 16: try {
        var v: GroupJoinRequestsWithVersion?
        var hadOneofValue = false
        if let current = self.kind {
          hadOneofValue = true
          if case .groupJoinRequestsWithVersion(let m) = current {v = m}
        }
        try decoder.decodeSingularMessageField(value: &v)
        if let v = v {
          if hadOneofValue {try decoder.handleConflictingOneOf()}
          self.kind = .groupJoinRequestsWithVersion(v)
        }
      }()
      case 17: try {
        var v: GroupJoinQuestionsWithVersion?
        var hadOneofValue = false
        if let current = self.kind {
          hadOneofValue = true
          if case .groupJoinQuestionsWithVersion(let m) = current {v = m}
        }
        try decoder.decodeSingularMessageField(value: &v)
        if let v = v {
          if hadOneofValue {try decoder.handleConflictingOneOf()}
          self.kind = .groupJoinQuestionsWithVersion(v)
        }
      }()
      case 18: try {
        var v: GroupMembersWithVersion?
        var hadOneofValue = false
        if let current = self.kind {
          hadOneofValue = true
          if case .groupMembersWithVersion(let m) = current {v = m}
        }
        try decoder.decodeSingularMessageField(value: &v)
        if let v = v {
          if hadOneofValue {try decoder.handleConflictingOneOf()}
          self.kind = .groupMembersWithVersion(v)
        }
      }()
      case 19: try {
        var v: GroupsWithVersion?
        var hadOneofValue = false
        if let current = self.kind {
          hadOneofValue = true
          if case .groupsWithVersion(let m) = current {v = m}
        }
        try decoder.decodeSingularMessageField(value: &v)
        if let v = v {
          if hadOneofValue {try decoder.handleConflictingOneOf()}
          self.kind = .groupsWithVersion(v)
        }
      }()
      default: break
      }
    }
  }

  public func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    // The use of inline closures is to circumvent an issue where the compiler
    // allocates stack space for every case branch when no optimizations are
    // enabled. https://github.com/apple/swift-protobuf/issues/1034
    switch self.kind {
    case .ids?: try {
      guard case .ids(let v)? = self.kind else { preconditionFailure() }
      try visitor.visitSingularMessageField(value: v, fieldNumber: 1)
    }()
    case .idsWithVersion?: try {
      guard case .idsWithVersion(let v)? = self.kind else { preconditionFailure() }
      try visitor.visitSingularMessageField(value: v, fieldNumber: 2)
    }()
    case .url?: try {
      guard case .url(let v)? = self.kind else { preconditionFailure() }
      try visitor.visitSingularStringField(value: v, fieldNumber: 3)
    }()
    case .conversations?: try {
      guard case .conversations(let v)? = self.kind else { preconditionFailure() }
      try visitor.visitSingularMessageField(value: v, fieldNumber: 4)
    }()
    case .messages?: try {
      guard case .messages(let v)? = self.kind else { preconditionFailure() }
      try visitor.visitSingularMessageField(value: v, fieldNumber: 5)
    }()
    case .messagesWithTotalList?: try {
      guard case .messagesWithTotalList(let v)? = self.kind else { preconditionFailure() }
      try visitor.visitSingularMessageField(value: v, fieldNumber: 6)
    }()
    case .userSession?: try {
      guard case .userSession(let v)? = self.kind else { preconditionFailure() }
      try visitor.visitSingularMessageField(value: v, fieldNumber: 7)
    }()
    case .usersInfosWithVersion?: try {
      guard case .usersInfosWithVersion(let v)? = self.kind else { preconditionFailure() }
      try visitor.visitSingularMessageField(value: v, fieldNumber: 8)
    }()
    case .usersOnlineStatuses?: try {
      guard case .usersOnlineStatuses(let v)? = self.kind else { preconditionFailure() }
      try visitor.visitSingularMessageField(value: v, fieldNumber: 9)
    }()
    case .userFriendRequestsWithVersion?: try {
      guard case .userFriendRequestsWithVersion(let v)? = self.kind else { preconditionFailure() }
      try visitor.visitSingularMessageField(value: v, fieldNumber: 10)
    }()
    case .userRelationshipGroupsWithVersion?: try {
      guard case .userRelationshipGroupsWithVersion(let v)? = self.kind else { preconditionFailure() }
      try visitor.visitSingularMessageField(value: v, fieldNumber: 11)
    }()
    case .userRelationshipsWithVersion?: try {
      guard case .userRelationshipsWithVersion(let v)? = self.kind else { preconditionFailure() }
      try visitor.visitSingularMessageField(value: v, fieldNumber: 12)
    }()
    case .userSessionIds?: try {
      guard case .userSessionIds(let v)? = self.kind else { preconditionFailure() }
      try visitor.visitSingularMessageField(value: v, fieldNumber: 13)
    }()
    case .groupInvitationsWithVersion?: try {
      guard case .groupInvitationsWithVersion(let v)? = self.kind else { preconditionFailure() }
      try visitor.visitSingularMessageField(value: v, fieldNumber: 14)
    }()
    case .groupJoinQuestionAnswerResult?: try {
      guard case .groupJoinQuestionAnswerResult(let v)? = self.kind else { preconditionFailure() }
      try visitor.visitSingularMessageField(value: v, fieldNumber: 15)
    }()
    case .groupJoinRequestsWithVersion?: try {
      guard case .groupJoinRequestsWithVersion(let v)? = self.kind else { preconditionFailure() }
      try visitor.visitSingularMessageField(value: v, fieldNumber: 16)
    }()
    case .groupJoinQuestionsWithVersion?: try {
      guard case .groupJoinQuestionsWithVersion(let v)? = self.kind else { preconditionFailure() }
      try visitor.visitSingularMessageField(value: v, fieldNumber: 17)
    }()
    case .groupMembersWithVersion?: try {
      guard case .groupMembersWithVersion(let v)? = self.kind else { preconditionFailure() }
      try visitor.visitSingularMessageField(value: v, fieldNumber: 18)
    }()
    case .groupsWithVersion?: try {
      guard case .groupsWithVersion(let v)? = self.kind else { preconditionFailure() }
      try visitor.visitSingularMessageField(value: v, fieldNumber: 19)
    }()
    case nil: break
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  public static func ==(lhs: TurmsNotification.DataMessage, rhs: TurmsNotification.DataMessage) -> Bool {
    if lhs.kind != rhs.kind {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}
