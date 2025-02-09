// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: constant/storage_resource_type.proto
// Protobuf C++ Version: 5.29.1

#include "turms/client/model/proto/constant/storage_resource_type.pb.h"

#include <algorithm>
#include <type_traits>

#include "google/protobuf/extension_set.h"
#include "google/protobuf/generated_message_tctable_impl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/wire_format_lite.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace turms {
namespace client {
namespace model {
namespace proto {}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace turms {
namespace client {
namespace model {
namespace proto {
PROTOBUF_CONSTINIT const uint32_t StorageResourceType_internal_data_[] = {
    196608u,
    0u,
};
bool StorageResourceType_IsValid(int value) {
    return 0 <= value && value <= 2;
}
static ::google::protobuf::internal::ExplicitlyConstructed<std::string>
    StorageResourceType_strings[3] = {};

static const char StorageResourceType_names[] = {
    "GROUP_PROFILE_PICTURE"
    "MESSAGE_ATTACHMENT"
    "USER_PROFILE_PICTURE"};

static const ::google::protobuf::internal::EnumEntry StorageResourceType_entries[] = {
    {{&StorageResourceType_names[0], 21}, 1},
    {{&StorageResourceType_names[21], 18}, 2},
    {{&StorageResourceType_names[39], 20}, 0},
};

static const int StorageResourceType_entries_by_number[] = {
    2,  // 0 -> USER_PROFILE_PICTURE
    0,  // 1 -> GROUP_PROFILE_PICTURE
    1,  // 2 -> MESSAGE_ATTACHMENT
};

const std::string& StorageResourceType_Name(StorageResourceType value) {
    static const bool kDummy =
        ::google::protobuf::internal::InitializeEnumStrings(StorageResourceType_entries,
                                                            StorageResourceType_entries_by_number,
                                                            3,
                                                            StorageResourceType_strings);
    (void)kDummy;

    int idx = ::google::protobuf::internal::LookUpEnumName(
        StorageResourceType_entries, StorageResourceType_entries_by_number, 3, value);
    return idx == -1 ? ::google::protobuf::internal::GetEmptyString()
                     : StorageResourceType_strings[idx].get();
}

bool StorageResourceType_Parse(absl::string_view name, StorageResourceType* value) {
    int int_value;
    bool success = ::google::protobuf::internal::LookUpEnumValue(
        StorageResourceType_entries, 3, name, &int_value);
    if (success) {
        *value = static_cast<StorageResourceType>(int_value);
    }
    return success;
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace google {
namespace protobuf {}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"