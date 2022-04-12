import DataParser from '../util/data-parser';
import { GroupJoinQuestionsAnswerResult } from '../model/proto/model/group/group_join_questions_answer_result';
import { GroupMemberRole } from '../model/proto/constant/group_member_role';
import NotificationUtil from '../util/notification-util';
import { ParsedModel } from '../model/parsed-model';
import ResponseError from '../error/response-error';
import ResponseStatusCode from '../model/response-status-code';
import TurmsClient from '../turms-client';
import Validator from '../util/validator';

export default class GroupService {
    private _turmsClient: TurmsClient;

    constructor(turmsClient: TurmsClient) {
        this._turmsClient = turmsClient;
    }

    createGroup(
        name: string,
        intro?: string,
        announcement?: string,
        minimumScore?: number,
        muteEndDate?: Date,
        groupTypeId?: string): Promise<string> {
        if (Validator.isFalsy(name)) {
            return ResponseError.notFalsyPromise('name');
        }
        return this._turmsClient.driver.send({
            createGroupRequest: {
                name,
                intro,
                announcement,
                minimumScore,
                muteEndDate: DataParser.getDateTimeStr(muteEndDate),
                groupTypeId
            }
        }).then(n => NotificationUtil.getFirstIdOrThrow(n));
    }

    deleteGroup(groupId: string): Promise<void> {
        if (Validator.isFalsy(groupId)) {
            return ResponseError.notFalsyPromise('groupId');
        }
        return this._turmsClient.driver.send({
            deleteGroupRequest: {
                groupId
            }
        }).then(() => null);
    }

    updateGroup(
        groupId: string,
        groupName?: string,
        intro?: string,
        announcement?: string,
        minimumScore?: number,
        groupTypeId?: string,
        muteEndDate?: Date,
        successorId?: string,
        quitAfterTransfer?: boolean): Promise<void> {
        if (Validator.isFalsy(groupId)) {
            return ResponseError.notFalsyPromise('groupId');
        }
        if (Validator.areAllFalsy(groupName, intro, announcement, minimumScore, groupTypeId,
            muteEndDate, successorId)) {
            return Promise.resolve();
        }
        return this._turmsClient.driver.send({
            updateGroupRequest: {
                groupId,
                groupName,
                intro,
                announcement,
                muteEndDate: DataParser.getDateTimeStr(muteEndDate),
                minimumScore,
                groupTypeId,
                successorId,
                quitAfterTransfer
            }
        }).then(() => null);
    }

    transferOwnership(groupId: string, successorId: string, quitAfterTransfer = false): Promise<void> {
        if (Validator.isFalsy(groupId)) {
            return ResponseError.notFalsyPromise('groupId');
        }
        if (Validator.isFalsy(successorId)) {
            return ResponseError.notFalsyPromise('successorId');
        }
        return this.updateGroup(groupId, null, null, null, null, null, null, successorId, quitAfterTransfer);
    }

    muteGroup(groupId: string, muteEndDate: Date): Promise<void> {
        if (Validator.isFalsy(groupId)) {
            return ResponseError.notFalsyPromise('groupId');
        }
        if (Validator.isFalsy(muteEndDate)) {
            return ResponseError.notFalsyPromise('muteEndDate');
        }
        return this.updateGroup(groupId, null, null, null, null, null, muteEndDate, null);
    }

    unmuteGroup(groupId: string): Promise<void> {
        return this.muteGroup(groupId, new Date(0));
    }

    queryGroup(groupId: string, lastUpdatedDate?: Date): Promise<ParsedModel.GroupWithVersion | undefined> {
        if (Validator.isFalsy(groupId)) {
            return ResponseError.notFalsyPromise('groupId');
        }
        return this._turmsClient.driver.send({
            queryGroupRequest: {
                groupId,
                lastUpdatedDate: DataParser.getDateTimeStr(lastUpdatedDate)
            }
        }).then(n => {
            const groupsWithVersion = n.data?.groupsWithVersion;
            const group = NotificationUtil.transform(groupsWithVersion?.groups?.[0]);
            if (group) {
                return {
                    group,
                    lastUpdatedDate: NotificationUtil.transformDate(groupsWithVersion.lastUpdatedDate)
                };
            }
        });
    }

    queryJoinedGroupIds(lastUpdatedDate?: Date): Promise<ParsedModel.IdsWithVersion | undefined> {
        return this._turmsClient.driver.send({
            queryJoinedGroupIdsRequest: {
                lastUpdatedDate: DataParser.getDateTimeStr(lastUpdatedDate)
            }
        }).then(n => NotificationUtil.getIdsWithVer(n));
    }

    queryJoinedGroupInfos(lastUpdatedDate?: Date): Promise<ParsedModel.GroupsWithVersion | undefined> {
        return this._turmsClient.driver.send({
            queryJoinedGroupInfosRequest: {
                lastUpdatedDate: DataParser.getDateTimeStr(lastUpdatedDate)
            }
        }).then(n => NotificationUtil.transform(n.data?.groupsWithVersion));
    }

    addGroupJoinQuestion(groupId: string, question: string, answers: string[], score: number): Promise<string> {
        if (Validator.isFalsy(groupId)) {
            return ResponseError.notFalsyPromise('groupId');
        }
        if (Validator.isFalsy(question)) {
            return ResponseError.notFalsyPromise('question');
        }
        if (Validator.isFalsy(answers)) {
            return ResponseError.notFalsyPromise('answers', true);
        }
        if (Validator.isFalsy(score)) {
            return ResponseError.notFalsyPromise('score');
        }
        return this._turmsClient.driver.send({
            createGroupJoinQuestionRequest: {
                groupId,
                question,
                answers: answers || [],
                score
            }
        }).then(n => NotificationUtil.getFirstIdOrThrow(n));
    }

    deleteGroupJoinQuestion(questionId: string): Promise<void> {
        if (Validator.isFalsy(questionId)) {
            return ResponseError.notFalsyPromise('questionId');
        }
        return this._turmsClient.driver.send({
            deleteGroupJoinQuestionRequest: {
                questionId
            }
        }).then(() => null);
    }

    updateGroupJoinQuestion(questionId: string, question?: string, answers?: string[], score?: number): Promise<void> {
        if (Validator.isFalsy(questionId)) {
            return ResponseError.notFalsyPromise('questionId');
        }
        if (Validator.areAllFalsy(question, answers, score)) {
            return Promise.resolve();
        }
        return this._turmsClient.driver.send({
            updateGroupJoinQuestionRequest: {
                questionId,
                question,
                answers: answers || [],
                score
            }
        }).then(() => null);
    }

    // Group Blocklist
    blockUser(groupId: string, userId: string): Promise<void> {
        if (Validator.isFalsy(groupId)) {
            return ResponseError.notFalsyPromise('groupId');
        }
        if (Validator.isFalsy(userId)) {
            return ResponseError.notFalsyPromise('userId');
        }
        return this._turmsClient.driver.send({
            createGroupBlockedUserRequest: {
                userId,
                groupId
            }
        }).then(() => null);
    }

    unblockUser(groupId: string, userId: string): Promise<void> {
        if (Validator.isFalsy(groupId)) {
            return ResponseError.notFalsyPromise('groupId');
        }
        if (Validator.isFalsy(userId)) {
            return ResponseError.notFalsyPromise('userId');
        }
        return this._turmsClient.driver.send({
            deleteGroupBlockedUserRequest: {
                groupId,
                userId
            }
        }).then(() => null);
    }

    queryBlockedUserIds(
        groupId: string,
        lastUpdatedDate?: Date): Promise<ParsedModel.IdsWithVersion | undefined> {
        if (Validator.isFalsy(groupId)) {
            return ResponseError.notFalsyPromise('groupId');
        }
        return this._turmsClient.driver.send({
            queryGroupBlockedUserIdsRequest: {
                groupId,
                lastUpdatedDate: DataParser.getDateTimeStr(lastUpdatedDate)
            }
        }).then(n => NotificationUtil.getIdsWithVer(n));
    }

    queryBlockedUserInfos(
        groupId: string,
        lastUpdatedDate?: Date): Promise<ParsedModel.UsersInfosWithVersion | undefined> {
        if (Validator.isFalsy(groupId)) {
            return ResponseError.notFalsyPromise('groupId');
        }
        return this._turmsClient.driver.send({
            queryGroupBlockedUserInfosRequest: {
                groupId,
                lastUpdatedDate: DataParser.getDateTimeStr(lastUpdatedDate)
            }
        }).then(n => NotificationUtil.transform(n.data?.usersInfosWithVersion));
    }

    // Group Enrollment
    createInvitation(groupId: string, inviteeId: string, content: string): Promise<string> {
        if (Validator.isFalsy(groupId)) {
            return ResponseError.notFalsyPromise('groupId');
        }
        if (Validator.isFalsy(inviteeId)) {
            return ResponseError.notFalsyPromise('inviteeId');
        }
        if (Validator.isFalsy(content)) {
            return ResponseError.notFalsyPromise('content');
        }
        return this._turmsClient.driver.send({
            createGroupInvitationRequest: {
                groupId,
                inviteeId,
                content
            }
        }).then(n => NotificationUtil.getFirstIdOrThrow(n));
    }

    deleteInvitation(invitationId: string): Promise<void> {
        if (Validator.isFalsy(invitationId)) {
            return ResponseError.notFalsyPromise('invitationId');
        }
        return this._turmsClient.driver.send({
            deleteGroupInvitationRequest: {
                invitationId
            }
        }).then(() => null);
    }

    queryInvitationsByGroupId(groupId: string, lastUpdatedDate?: Date): Promise<ParsedModel.GroupInvitationsWithVersion | undefined> {
        if (Validator.isFalsy(groupId)) {
            return ResponseError.notFalsyPromise('groupId');
        }
        return this._turmsClient.driver.send({
            queryGroupInvitationsRequest: {
                groupId,
                lastUpdatedDate: DataParser.getDateTimeStr(lastUpdatedDate)
            }
        }).then(n => NotificationUtil.transform(n.data?.groupInvitationsWithVersion));
    }

    queryInvitations(areSentByMe: boolean, lastUpdatedDate?: Date): Promise<ParsedModel.GroupInvitationsWithVersion | undefined> {
        if (Validator.isFalsy(areSentByMe)) {
            return ResponseError.notFalsyPromise('areSentByMe');
        }
        return this._turmsClient.driver.send({
            queryGroupInvitationsRequest: {
                areSentByMe,
                lastUpdatedDate: DataParser.getDateTimeStr(lastUpdatedDate)
            }
        }).then(n => NotificationUtil.transform(n.data?.groupInvitationsWithVersion));
    }

    createJoinRequest(groupId: string, content: string): Promise<string> {
        if (Validator.isFalsy(groupId)) {
            return ResponseError.notFalsyPromise('groupId');
        }
        if (Validator.isFalsy(content)) {
            return ResponseError.notFalsyPromise('content');
        }
        return this._turmsClient.driver.send({
            createGroupJoinRequestRequest: {
                groupId,
                content
            }
        }).then(n => NotificationUtil.getFirstIdOrThrow(n));
    }

    deleteJoinRequest(requestId: string): Promise<void> {
        if (Validator.isFalsy(requestId)) {
            return ResponseError.notFalsyPromise('requestId');
        }
        return this._turmsClient.driver.send({
            deleteGroupJoinRequestRequest: {
                requestId
            }
        }).then(() => null);
    }

    queryJoinRequests(groupId: string, lastUpdatedDate?: Date): Promise<ParsedModel.GroupJoinRequestsWithVersion | undefined> {
        if (Validator.isFalsy(groupId)) {
            return ResponseError.notFalsyPromise('groupId');
        }
        return this._turmsClient.driver.send({
            queryGroupJoinRequestsRequest: {
                groupId,
                lastUpdatedDate: DataParser.getDateTimeStr(lastUpdatedDate)
            }
        }).then(n => NotificationUtil.transform(n.data?.groupJoinRequestsWithVersion));
    }

    querySentJoinRequests(lastUpdatedDate?: Date): Promise<ParsedModel.GroupJoinRequestsWithVersion | undefined> {
        return this._turmsClient.driver.send({
            queryGroupJoinRequestsRequest: {
                lastUpdatedDate: DataParser.getDateTimeStr(lastUpdatedDate)
            }
        }).then(n => NotificationUtil.transform(n.data?.groupJoinRequestsWithVersion));
    }

    /**
     * Note: Only the owner and managers have the right to fetch questions with answers
     */
    queryGroupJoinQuestionsRequest(
        groupId: string,
        withAnswers = false,
        lastUpdatedDate?: Date): Promise<ParsedModel.GroupJoinQuestionsWithVersion | undefined> {
        if (Validator.isFalsy(groupId)) {
            return ResponseError.notFalsyPromise('groupId');
        }
        return this._turmsClient.driver.send({
            queryGroupJoinQuestionsRequest: {
                groupId,
                withAnswers,
                lastUpdatedDate: DataParser.getDateTimeStr(lastUpdatedDate)
            }
        }).then(n => NotificationUtil.transform(n.data?.groupJoinQuestionsWithVersion));
    }

    answerGroupQuestions(questionIdToAnswer: { [k: string]: string }): Promise<GroupJoinQuestionsAnswerResult | undefined> {
        if (Validator.isFalsy(questionIdToAnswer)) {
            return ResponseError.notFalsyPromise('questionIdToAnswer', true);
        }
        return this._turmsClient.driver.send({
            checkGroupJoinQuestionsAnswersRequest: {
                questionIdToAnswer: questionIdToAnswer
            }
        }).then(n => {
            const result = NotificationUtil.transform(n.data?.groupJoinQuestionAnswerResult);
            if (result) {
                return result;
            } else {
                throw ResponseError.fromCode(ResponseStatusCode.INVALID_RESPONSE);
            }
        });
    }

    // Group Member
    addGroupMember(
        groupId: string,
        userId: string,
        name?: string,
        role?: string | GroupMemberRole,
        muteEndDate?: Date): Promise<void> {
        if (Validator.isFalsy(groupId)) {
            return ResponseError.notFalsyPromise('groupId');
        }
        if (Validator.isFalsy(userId)) {
            return ResponseError.notFalsyPromise('userId');
        }
        if (typeof role === 'string') {
            role = GroupMemberRole[role] as GroupMemberRole;
            if (Validator.isFalsy(role)) {
                return ResponseError.notFalsyPromise('role');
            }
        }
        return this._turmsClient.driver.send({
            createGroupMemberRequest: {
                groupId,
                userId,
                name,
                role,
                muteEndDate: DataParser.getDateTimeStr(muteEndDate)
            }
        }).then(() => null);
    }

    quitGroup(groupId: string, successorId?: string, quitAfterTransfer?: boolean): Promise<void> {
        if (Validator.isFalsy(groupId)) {
            return ResponseError.notFalsyPromise('groupId');
        }
        return this._turmsClient.driver.send({
            deleteGroupMemberRequest: {
                groupId,
                memberId: this._turmsClient.userService.userInfo.userId,
                successorId,
                quitAfterTransfer
            }
        }).then(() => null);
    }

    removeGroupMember(groupId: string, memberId: string): Promise<void> {
        if (Validator.isFalsy(groupId)) {
            return ResponseError.notFalsyPromise('groupId');
        }
        if (Validator.isFalsy(memberId)) {
            return ResponseError.notFalsyPromise('memberId');
        }
        return this._turmsClient.driver.send({
            deleteGroupMemberRequest: {
                groupId,
                memberId
            }
        }).then(() => null);
    }

    updateGroupMemberInfo(
        groupId: string,
        memberId: string,
        name?: string,
        role?: string | GroupMemberRole,
        muteEndDate?: Date): Promise<void> {
        if (Validator.isFalsy(groupId)) {
            return ResponseError.notFalsyPromise('groupId');
        }
        if (Validator.isFalsy(memberId)) {
            return ResponseError.notFalsyPromise('memberId');
        }
        if (Validator.areAllFalsy(name, role, muteEndDate)) {
            return Promise.resolve();
        }
        if (typeof role === 'string') {
            role = GroupMemberRole[role] as GroupMemberRole;
            if (Validator.isFalsy(role)) {
                return ResponseError.notFalsyPromise('role');
            }
        }
        return this._turmsClient.driver.send({
            updateGroupMemberRequest: {
                groupId,
                memberId,
                name,
                role,
                muteEndDate: DataParser.getDateTimeStr(muteEndDate)
            }
        }).then(() => null);
    }

    muteGroupMember(groupId: string, memberId: string, muteEndDate: Date): Promise<void> {
        if (Validator.isFalsy(groupId)) {
            return ResponseError.notFalsyPromise('groupId');
        }
        if (Validator.isFalsy(memberId)) {
            return ResponseError.notFalsyPromise('memberId');
        }
        if (Validator.isFalsy(muteEndDate)) {
            return ResponseError.notFalsyPromise('muteEndDate');
        }
        return this.updateGroupMemberInfo(groupId, memberId, undefined, undefined, muteEndDate);
    }

    unmuteGroupMember(groupId: string, memberId: string): Promise<void> {
        return this.muteGroupMember(groupId, memberId, new Date(0));
    }

    queryGroupMembers(groupId: string, withStatus = false, lastUpdatedDate?: Date): Promise<ParsedModel.GroupMembersWithVersion | undefined> {
        if (Validator.isFalsy(groupId)) {
            return ResponseError.notFalsyPromise('groupId');
        }
        return this._turmsClient.driver.send({
            queryGroupMembersRequest: {
                groupId,
                lastUpdatedDate: DataParser.getDateTimeStr(lastUpdatedDate),
                withStatus,
                memberIds: []
            }
        }).then(n => NotificationUtil.transform(n.data?.groupMembersWithVersion));
    }

    queryGroupMembersByMemberIds(groupId: string, memberIds: string[], withStatus = false): Promise<ParsedModel.GroupMembersWithVersion | undefined> {
        if (Validator.isFalsy(groupId)) {
            return ResponseError.notFalsyPromise('groupId');
        }
        if (Validator.isFalsy(memberIds)) {
            return ResponseError.notFalsyPromise('memberIds', true);
        }
        return this._turmsClient.driver.send({
            queryGroupMembersRequest: {
                groupId,
                memberIds,
                withStatus
            }
        }).then(n => NotificationUtil.transform(n.data?.groupMembersWithVersion));
    }
}