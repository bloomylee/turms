/*
 * Copyright (C) 2019 The Turms Project
 * https://github.com/turms-im/turms
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package im.turms.server.common.access.client.dto.request.user.relationship;

public final class UpdateRelationshipRequestOuterClass {
    private UpdateRelationshipRequestOuterClass() {
    }

    static {
        com.google.protobuf.RuntimeVersion.validateProtobufGencodeVersion(
                com.google.protobuf.RuntimeVersion.RuntimeDomain.PUBLIC,
                /* major= */ 4,
                /* minor= */ 29,
                /* patch= */ 1,
                /* suffix= */ "",
                UpdateRelationshipRequestOuterClass.class.getName());
    }

    public static void registerAllExtensions(com.google.protobuf.ExtensionRegistryLite registry) {
    }

    public static void registerAllExtensions(com.google.protobuf.ExtensionRegistry registry) {
        registerAllExtensions((com.google.protobuf.ExtensionRegistryLite) registry);
    }

    static final com.google.protobuf.Descriptors.Descriptor internal_static_im_turms_proto_UpdateRelationshipRequest_descriptor;
    static final com.google.protobuf.GeneratedMessage.FieldAccessorTable internal_static_im_turms_proto_UpdateRelationshipRequest_fieldAccessorTable;

    public static com.google.protobuf.Descriptors.FileDescriptor getDescriptor() {
        return descriptor;
    }

    private static final com.google.protobuf.Descriptors.FileDescriptor descriptor;
    static {
        java.lang.String[] descriptorData = {"\n;request/user/relationship/update_relat"
                + "ionship_request.proto\022\016im.turms.proto\032\030m"
                + "odel/common/value.proto\"\242\002\n\031UpdateRelati"
                + "onshipRequest\022\017\n\007user_id\030\001 \001(\003\022\024\n\007blocke"
                + "d\030\002 \001(\010H\000\210\001\001\022\034\n\017new_group_index\030\003 \001(\005H\001\210"
                + "\001\001\022\037\n\022delete_group_index\030\004 \001(\005H\002\210\001\001\022\021\n\004n"
                + "ame\030\005 \001(\tH\003\210\001\001\022\021\n\004note\030\006 \001(\tH\004\210\001\001\0220\n\021cus"
                + "tom_attributes\030\017 \003(\0132\025.im.turms.proto.Va"
                + "lueB\n\n\010_blockedB\022\n\020_new_group_indexB\025\n\023_"
                + "delete_group_indexB\007\n\005_nameB\007\n\005_noteBI\nB"
                + "im.turms.server.common.access.client.dto"
                + ".request.user.relationshipP\001\272\002\000b\006proto3"};
        descriptor = com.google.protobuf.Descriptors.FileDescriptor.internalBuildGeneratedFileFrom(
                descriptorData,
                new com.google.protobuf.Descriptors.FileDescriptor[]{
                        im.turms.server.common.access.client.dto.model.common.ValueOuterClass
                                .getDescriptor(),});
        internal_static_im_turms_proto_UpdateRelationshipRequest_descriptor =
                getDescriptor().getMessageTypes()
                        .getFirst();
        internal_static_im_turms_proto_UpdateRelationshipRequest_fieldAccessorTable =
                new com.google.protobuf.GeneratedMessage.FieldAccessorTable(
                        internal_static_im_turms_proto_UpdateRelationshipRequest_descriptor,
                        new java.lang.String[]{"UserId",
                                "Blocked",
                                "NewGroupIndex",
                                "DeleteGroupIndex",
                                "Name",
                                "Note",
                                "CustomAttributes",});
        descriptor.resolveAllFeaturesImmutable();
        im.turms.server.common.access.client.dto.model.common.ValueOuterClass.getDescriptor();
    }

    // @@protoc_insertion_point(outer_class_scope)
}