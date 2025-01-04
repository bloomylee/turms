// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: request/user/create_session_request.proto
// Protobuf C++ Version: 5.29.1

#ifndef request_2fuser_2fcreate_5fsession_5frequest_2eproto_2epb_2eh
#define request_2fuser_2fcreate_5fsession_5frequest_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/runtime_version.h"
#if PROTOBUF_VERSION != 5029001
#error "Protobuf C++ gencode is built with an incompatible version of"
#error "Protobuf C++ headers/runtime. See"
#error "https://protobuf.dev/support/cross-version-runtime-guarantee/#cpp"
#endif
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/map.h"  // IWYU pragma: export
#include "google/protobuf/map_field_lite.h"
#include "google/protobuf/message_lite.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "turms/client/model/proto/constant/device_type.pb.h"
#include "turms/client/model/proto/constant/user_status.pb.h"
#include "turms/client/model/proto/model/common/value.pb.h"
#include "turms/client/model/proto/model/user/user_location.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_request_2fuser_2fcreate_5fsession_5frequest_2eproto

namespace google {
namespace protobuf {
namespace internal {
template <typename T>
::absl::string_view GetAnyMessageName();
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_request_2fuser_2fcreate_5fsession_5frequest_2eproto {
    static const ::uint32_t offsets[];
};
namespace turms {
namespace client {
namespace model {
namespace proto {
class CreateSessionRequest;
struct CreateSessionRequestDefaultTypeInternal;
extern CreateSessionRequestDefaultTypeInternal _CreateSessionRequest_default_instance_;
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace google {
namespace protobuf {}  // namespace protobuf
}  // namespace google

namespace turms {
namespace client {
namespace model {
namespace proto {

// ===================================================================

// -------------------------------------------------------------------

// -------------------------------------------------------------------

class CreateSessionRequest final : public ::google::protobuf::MessageLite
/* @@protoc_insertion_point(class_definition:turms.client.model.proto.CreateSessionRequest) */ {
   public:
    inline CreateSessionRequest()
        : CreateSessionRequest(nullptr) {
    }
    ~CreateSessionRequest() PROTOBUF_FINAL;

#if defined(PROTOBUF_CUSTOM_VTABLE)
    void operator delete(CreateSessionRequest* msg, std::destroying_delete_t) {
        SharedDtor(*msg);
        ::google::protobuf::internal::SizedDelete(msg, sizeof(CreateSessionRequest));
    }
#endif

    template <typename = void>
    explicit PROTOBUF_CONSTEXPR CreateSessionRequest(
        ::google::protobuf::internal::ConstantInitialized);

    inline CreateSessionRequest(const CreateSessionRequest& from)
        : CreateSessionRequest(nullptr, from) {
    }
    inline CreateSessionRequest(CreateSessionRequest&& from) noexcept
        : CreateSessionRequest(nullptr, std::move(from)) {
    }
    inline CreateSessionRequest& operator=(const CreateSessionRequest& from) {
        CopyFrom(from);
        return *this;
    }
    inline CreateSessionRequest& operator=(CreateSessionRequest&& from) noexcept {
        if (this == &from)
            return *this;
        if (::google::protobuf::internal::CanMoveWithInternalSwap(GetArena(), from.GetArena())) {
            InternalSwap(&from);
        } else {
            CopyFrom(from);
        }
        return *this;
    }

    inline const std::string& unknown_fields() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
        return _internal_metadata_.unknown_fields<std::string>(
            ::google::protobuf::internal::GetEmptyString);
    }
    inline std::string* mutable_unknown_fields() ABSL_ATTRIBUTE_LIFETIME_BOUND {
        return _internal_metadata_.mutable_unknown_fields<std::string>();
    }

    static const CreateSessionRequest& default_instance() {
        return *internal_default_instance();
    }
    static inline const CreateSessionRequest* internal_default_instance() {
        return reinterpret_cast<const CreateSessionRequest*>(
            &_CreateSessionRequest_default_instance_);
    }
    static constexpr int kIndexInFileMessages = 1;
    friend void swap(CreateSessionRequest& a, CreateSessionRequest& b) {
        a.Swap(&b);
    }
    inline void Swap(CreateSessionRequest* other) {
        if (other == this)
            return;
        if (::google::protobuf::internal::CanUseInternalSwap(GetArena(), other->GetArena())) {
            InternalSwap(other);
        } else {
            ::google::protobuf::internal::GenericSwap(this, other);
        }
    }
    void UnsafeArenaSwap(CreateSessionRequest* other) {
        if (other == this)
            return;
        ABSL_DCHECK(GetArena() == other->GetArena());
        InternalSwap(other);
    }

    // implements Message ----------------------------------------------

    CreateSessionRequest* New(::google::protobuf::Arena* arena = nullptr) const {
        return ::google::protobuf::MessageLite::DefaultConstruct<CreateSessionRequest>(arena);
    }
    void CopyFrom(const CreateSessionRequest& from);
    void MergeFrom(const CreateSessionRequest& from) {
        CreateSessionRequest::MergeImpl(*this, from);
    }

   private:
    static void MergeImpl(::google::protobuf::MessageLite& to_msg,
                          const ::google::protobuf::MessageLite& from_msg);

   public:
    bool IsInitialized() const {
        return true;
    }
    ABSL_ATTRIBUTE_REINITIALIZES void Clear() PROTOBUF_FINAL;
#if defined(PROTOBUF_CUSTOM_VTABLE)
   private:
    static ::size_t ByteSizeLong(const ::google::protobuf::MessageLite& msg);
    static ::uint8_t* _InternalSerialize(const MessageLite& msg,
                                         ::uint8_t* target,
                                         ::google::protobuf::io::EpsCopyOutputStream* stream);

   public:
    ::size_t ByteSizeLong() const {
        return ByteSizeLong(*this);
    }
    ::uint8_t* _InternalSerialize(::uint8_t* target,
                                  ::google::protobuf::io::EpsCopyOutputStream* stream) const {
        return _InternalSerialize(*this, target, stream);
    }
#else   // PROTOBUF_CUSTOM_VTABLE
    ::size_t ByteSizeLong() const final;
    ::uint8_t* _InternalSerialize(::uint8_t* target,
                                  ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
#endif  // PROTOBUF_CUSTOM_VTABLE
    int GetCachedSize() const {
        return _impl_._cached_size_.Get();
    }

   private:
    void SharedCtor(::google::protobuf::Arena* arena);
    static void SharedDtor(MessageLite& self);
    void InternalSwap(CreateSessionRequest* other);

   private:
    template <typename T>
    friend ::absl::string_view(::google::protobuf::internal::GetAnyMessageName)();
    static ::absl::string_view FullMessageName() {
        return "turms.client.model.proto.CreateSessionRequest";
    }

   protected:
    explicit CreateSessionRequest(::google::protobuf::Arena* arena);
    CreateSessionRequest(::google::protobuf::Arena* arena, const CreateSessionRequest& from);
    CreateSessionRequest(::google::protobuf::Arena* arena, CreateSessionRequest&& from) noexcept
        : CreateSessionRequest(arena) {
        *this = ::std::move(from);
    }
    const ::google::protobuf::internal::ClassData* GetClassData() const PROTOBUF_FINAL;
    static void* PlacementNew_(const void*, void* mem, ::google::protobuf::Arena* arena);
    static constexpr auto InternalNewImpl_();
    static const ::google::protobuf::internal::ClassDataLite<46> _class_data_;

   public:
    // nested types ----------------------------------------------------

    // accessors -------------------------------------------------------
    enum : int {
        kDeviceDetailsFieldNumber = 6,
        kCustomAttributesFieldNumber = 15,
        kPasswordFieldNumber = 3,
        kLocationFieldNumber = 7,
        kUserIdFieldNumber = 2,
        kVersionFieldNumber = 1,
        kUserStatusFieldNumber = 4,
        kDeviceTypeFieldNumber = 5,
    };
    // map<string, string> device_details = 6;
    int device_details_size() const;

   private:
    int _internal_device_details_size() const;

   public:
    void clear_device_details();
    const ::google::protobuf::Map<std::string, std::string>& device_details() const;
    ::google::protobuf::Map<std::string, std::string>* mutable_device_details();

   private:
    const ::google::protobuf::Map<std::string, std::string>& _internal_device_details() const;
    ::google::protobuf::Map<std::string, std::string>* _internal_mutable_device_details();

   public:
    // repeated .turms.client.model.proto.Value custom_attributes = 15;
    int custom_attributes_size() const;

   private:
    int _internal_custom_attributes_size() const;

   public:
    void clear_custom_attributes();
    ::turms::client::model::proto::Value* mutable_custom_attributes(int index);
    ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
    mutable_custom_attributes();

   private:
    const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
    _internal_custom_attributes() const;
    ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
    _internal_mutable_custom_attributes();

   public:
    const ::turms::client::model::proto::Value& custom_attributes(int index) const;
    ::turms::client::model::proto::Value* add_custom_attributes();
    const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
    custom_attributes() const;
    // optional string password = 3;
    bool has_password() const;
    void clear_password();
    const std::string& password() const;
    template <typename Arg_ = const std::string&, typename... Args_>
    void set_password(Arg_&& arg, Args_... args);
    std::string* mutable_password();
    PROTOBUF_NODISCARD std::string* release_password();
    void set_allocated_password(std::string* value);

   private:
    const std::string& _internal_password() const;
    inline PROTOBUF_ALWAYS_INLINE void _internal_set_password(const std::string& value);
    std::string* _internal_mutable_password();

   public:
    // optional .turms.client.model.proto.UserLocation location = 7;
    bool has_location() const;
    void clear_location();
    const ::turms::client::model::proto::UserLocation& location() const;
    PROTOBUF_NODISCARD ::turms::client::model::proto::UserLocation* release_location();
    ::turms::client::model::proto::UserLocation* mutable_location();
    void set_allocated_location(::turms::client::model::proto::UserLocation* value);
    void unsafe_arena_set_allocated_location(::turms::client::model::proto::UserLocation* value);
    ::turms::client::model::proto::UserLocation* unsafe_arena_release_location();

   private:
    const ::turms::client::model::proto::UserLocation& _internal_location() const;
    ::turms::client::model::proto::UserLocation* _internal_mutable_location();

   public:
    // int64 user_id = 2;
    void clear_user_id();
    ::int64_t user_id() const;
    void set_user_id(::int64_t value);

   private:
    ::int64_t _internal_user_id() const;
    void _internal_set_user_id(::int64_t value);

   public:
    // int32 version = 1;
    void clear_version();
    ::int32_t version() const;
    void set_version(::int32_t value);

   private:
    ::int32_t _internal_version() const;
    void _internal_set_version(::int32_t value);

   public:
    // optional .turms.client.model.proto.UserStatus user_status = 4;
    bool has_user_status() const;
    void clear_user_status();
    ::turms::client::model::proto::UserStatus user_status() const;
    void set_user_status(::turms::client::model::proto::UserStatus value);

   private:
    ::turms::client::model::proto::UserStatus _internal_user_status() const;
    void _internal_set_user_status(::turms::client::model::proto::UserStatus value);

   public:
    // .turms.client.model.proto.DeviceType device_type = 5;
    void clear_device_type();
    ::turms::client::model::proto::DeviceType device_type() const;
    void set_device_type(::turms::client::model::proto::DeviceType value);

   private:
    ::turms::client::model::proto::DeviceType _internal_device_type() const;
    void _internal_set_device_type(::turms::client::model::proto::DeviceType value);

   public:
    // @@protoc_insertion_point(class_scope:turms.client.model.proto.CreateSessionRequest)
   private:
    class _Internal;
    friend class ::google::protobuf::internal::TcParser;
    static const ::google::protobuf::internal::TcParseTable<4, 8, 3, 84, 2> _table_;

    friend class ::google::protobuf::MessageLite;
    friend class ::google::protobuf::Arena;
    template <typename T>
    friend class ::google::protobuf::Arena::InternalHelper;
    using InternalArenaConstructable_ = void;
    using DestructorSkippable_ = void;
    struct Impl_ {
        inline explicit constexpr Impl_(::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena,
                              const Impl_& from,
                              const CreateSessionRequest& from_msg);
        ::google::protobuf::internal::HasBits<1> _has_bits_;
        ::google::protobuf::internal::CachedSize _cached_size_;
        ::google::protobuf::internal::MapFieldLite<std::string, std::string> device_details_;
        ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>
            custom_attributes_;
        ::google::protobuf::internal::ArenaStringPtr password_;
        ::turms::client::model::proto::UserLocation* location_;
        ::int64_t user_id_;
        ::int32_t version_;
        int user_status_;
        int device_type_;
        PROTOBUF_TSAN_DECLARE_MEMBER
    };
    union {
        Impl_ _impl_;
    };
    friend struct ::TableStruct_request_2fuser_2fcreate_5fsession_5frequest_2eproto;
};

// ===================================================================

// ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// CreateSessionRequest

// int32 version = 1;
inline void CreateSessionRequest::clear_version() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.version_ = 0;
}
inline ::int32_t CreateSessionRequest::version() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.CreateSessionRequest.version)
    return _internal_version();
}
inline void CreateSessionRequest::set_version(::int32_t value) {
    _internal_set_version(value);
    // @@protoc_insertion_point(field_set:turms.client.model.proto.CreateSessionRequest.version)
}
inline ::int32_t CreateSessionRequest::_internal_version() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.version_;
}
inline void CreateSessionRequest::_internal_set_version(::int32_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.version_ = value;
}

// int64 user_id = 2;
inline void CreateSessionRequest::clear_user_id() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.user_id_ = ::int64_t{0};
}
inline ::int64_t CreateSessionRequest::user_id() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.CreateSessionRequest.user_id)
    return _internal_user_id();
}
inline void CreateSessionRequest::set_user_id(::int64_t value) {
    _internal_set_user_id(value);
    // @@protoc_insertion_point(field_set:turms.client.model.proto.CreateSessionRequest.user_id)
}
inline ::int64_t CreateSessionRequest::_internal_user_id() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.user_id_;
}
inline void CreateSessionRequest::_internal_set_user_id(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.user_id_ = value;
}

// optional string password = 3;
inline bool CreateSessionRequest::has_password() const {
    bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
    return value;
}
inline void CreateSessionRequest::clear_password() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.password_.ClearToEmpty();
    _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& CreateSessionRequest::password() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.CreateSessionRequest.password)
    return _internal_password();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void CreateSessionRequest::set_password(Arg_&& arg, Args_... args) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000001u;
    _impl_.password_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
    // @@protoc_insertion_point(field_set:turms.client.model.proto.CreateSessionRequest.password)
}
inline std::string* CreateSessionRequest::mutable_password() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    std::string* _s = _internal_mutable_password();
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.CreateSessionRequest.password)
    return _s;
}
inline const std::string& CreateSessionRequest::_internal_password() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.password_.Get();
}
inline void CreateSessionRequest::_internal_set_password(const std::string& value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000001u;
    _impl_.password_.Set(value, GetArena());
}
inline std::string* CreateSessionRequest::_internal_mutable_password() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000001u;
    return _impl_.password_.Mutable(GetArena());
}
inline std::string* CreateSessionRequest::release_password() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    // @@protoc_insertion_point(field_release:turms.client.model.proto.CreateSessionRequest.password)
    if ((_impl_._has_bits_[0] & 0x00000001u) == 0) {
        return nullptr;
    }
    _impl_._has_bits_[0] &= ~0x00000001u;
    auto* released = _impl_.password_.Release();
    if (::google::protobuf::internal::DebugHardenForceCopyDefaultString()) {
        _impl_.password_.Set("", GetArena());
    }
    return released;
}
inline void CreateSessionRequest::set_allocated_password(std::string* value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    if (value != nullptr) {
        _impl_._has_bits_[0] |= 0x00000001u;
    } else {
        _impl_._has_bits_[0] &= ~0x00000001u;
    }
    _impl_.password_.SetAllocated(value, GetArena());
    if (::google::protobuf::internal::DebugHardenForceCopyDefaultString() &&
        _impl_.password_.IsDefault()) {
        _impl_.password_.Set("", GetArena());
    }
    // @@protoc_insertion_point(field_set_allocated:turms.client.model.proto.CreateSessionRequest.password)
}

// optional .turms.client.model.proto.UserStatus user_status = 4;
inline bool CreateSessionRequest::has_user_status() const {
    bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
    return value;
}
inline void CreateSessionRequest::clear_user_status() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.user_status_ = 0;
    _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::turms::client::model::proto::UserStatus CreateSessionRequest::user_status() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.CreateSessionRequest.user_status)
    return _internal_user_status();
}
inline void CreateSessionRequest::set_user_status(::turms::client::model::proto::UserStatus value) {
    _internal_set_user_status(value);
    _impl_._has_bits_[0] |= 0x00000004u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.CreateSessionRequest.user_status)
}
inline ::turms::client::model::proto::UserStatus CreateSessionRequest::_internal_user_status()
    const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return static_cast<::turms::client::model::proto::UserStatus>(_impl_.user_status_);
}
inline void CreateSessionRequest::_internal_set_user_status(
    ::turms::client::model::proto::UserStatus value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.user_status_ = value;
}

// .turms.client.model.proto.DeviceType device_type = 5;
inline void CreateSessionRequest::clear_device_type() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.device_type_ = 0;
}
inline ::turms::client::model::proto::DeviceType CreateSessionRequest::device_type() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.CreateSessionRequest.device_type)
    return _internal_device_type();
}
inline void CreateSessionRequest::set_device_type(::turms::client::model::proto::DeviceType value) {
    _internal_set_device_type(value);
    // @@protoc_insertion_point(field_set:turms.client.model.proto.CreateSessionRequest.device_type)
}
inline ::turms::client::model::proto::DeviceType CreateSessionRequest::_internal_device_type()
    const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return static_cast<::turms::client::model::proto::DeviceType>(_impl_.device_type_);
}
inline void CreateSessionRequest::_internal_set_device_type(
    ::turms::client::model::proto::DeviceType value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.device_type_ = value;
}

// map<string, string> device_details = 6;
inline int CreateSessionRequest::_internal_device_details_size() const {
    return _internal_device_details().size();
}
inline int CreateSessionRequest::device_details_size() const {
    return _internal_device_details_size();
}
inline void CreateSessionRequest::clear_device_details() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.device_details_.Clear();
}
inline const ::google::protobuf::Map<std::string, std::string>&
CreateSessionRequest::_internal_device_details() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.device_details_.GetMap();
}
inline const ::google::protobuf::Map<std::string, std::string>&
CreateSessionRequest::device_details() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_map:turms.client.model.proto.CreateSessionRequest.device_details)
    return _internal_device_details();
}
inline ::google::protobuf::Map<std::string, std::string>*
CreateSessionRequest::_internal_mutable_device_details() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    return _impl_.device_details_.MutableMap();
}
inline ::google::protobuf::Map<std::string, std::string>*
CreateSessionRequest::mutable_device_details() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable_map:turms.client.model.proto.CreateSessionRequest.device_details)
    return _internal_mutable_device_details();
}

// optional .turms.client.model.proto.UserLocation location = 7;
inline bool CreateSessionRequest::has_location() const {
    bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
    PROTOBUF_ASSUME(!value || _impl_.location_ != nullptr);
    return value;
}
inline const ::turms::client::model::proto::UserLocation& CreateSessionRequest::_internal_location()
    const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    const ::turms::client::model::proto::UserLocation* p = _impl_.location_;
    return p != nullptr ? *p
                        : reinterpret_cast<const ::turms::client::model::proto::UserLocation&>(
                              ::turms::client::model::proto::_UserLocation_default_instance_);
}
inline const ::turms::client::model::proto::UserLocation& CreateSessionRequest::location() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.CreateSessionRequest.location)
    return _internal_location();
}
inline void CreateSessionRequest::unsafe_arena_set_allocated_location(
    ::turms::client::model::proto::UserLocation* value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    if (GetArena() == nullptr) {
        delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.location_);
    }
    _impl_.location_ = reinterpret_cast<::turms::client::model::proto::UserLocation*>(value);
    if (value != nullptr) {
        _impl_._has_bits_[0] |= 0x00000002u;
    } else {
        _impl_._has_bits_[0] &= ~0x00000002u;
    }
    // @@protoc_insertion_point(field_unsafe_arena_set_allocated:turms.client.model.proto.CreateSessionRequest.location)
}
inline ::turms::client::model::proto::UserLocation* CreateSessionRequest::release_location() {
    ::google::protobuf::internal::TSanWrite(&_impl_);

    _impl_._has_bits_[0] &= ~0x00000002u;
    ::turms::client::model::proto::UserLocation* released = _impl_.location_;
    _impl_.location_ = nullptr;
    if (::google::protobuf::internal::DebugHardenForceCopyInRelease()) {
        auto* old = reinterpret_cast<::google::protobuf::MessageLite*>(released);
        released = ::google::protobuf::internal::DuplicateIfNonNull(released);
        if (GetArena() == nullptr) {
            delete old;
        }
    } else {
        if (GetArena() != nullptr) {
            released = ::google::protobuf::internal::DuplicateIfNonNull(released);
        }
    }
    return released;
}
inline ::turms::client::model::proto::UserLocation*
CreateSessionRequest::unsafe_arena_release_location() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    // @@protoc_insertion_point(field_release:turms.client.model.proto.CreateSessionRequest.location)

    _impl_._has_bits_[0] &= ~0x00000002u;
    ::turms::client::model::proto::UserLocation* temp = _impl_.location_;
    _impl_.location_ = nullptr;
    return temp;
}
inline ::turms::client::model::proto::UserLocation*
CreateSessionRequest::_internal_mutable_location() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    if (_impl_.location_ == nullptr) {
        auto* p = ::google::protobuf::MessageLite::DefaultConstruct<
            ::turms::client::model::proto::UserLocation>(GetArena());
        _impl_.location_ = reinterpret_cast<::turms::client::model::proto::UserLocation*>(p);
    }
    return _impl_.location_;
}
inline ::turms::client::model::proto::UserLocation* CreateSessionRequest::mutable_location()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    _impl_._has_bits_[0] |= 0x00000002u;
    ::turms::client::model::proto::UserLocation* _msg = _internal_mutable_location();
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.CreateSessionRequest.location)
    return _msg;
}
inline void CreateSessionRequest::set_allocated_location(
    ::turms::client::model::proto::UserLocation* value) {
    ::google::protobuf::Arena* message_arena = GetArena();
    ::google::protobuf::internal::TSanWrite(&_impl_);
    if (message_arena == nullptr) {
        delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.location_);
    }

    if (value != nullptr) {
        ::google::protobuf::Arena* submessage_arena =
            reinterpret_cast<::google::protobuf::MessageLite*>(value)->GetArena();
        if (message_arena != submessage_arena) {
            value = ::google::protobuf::internal::GetOwnedMessage(
                message_arena, value, submessage_arena);
        }
        _impl_._has_bits_[0] |= 0x00000002u;
    } else {
        _impl_._has_bits_[0] &= ~0x00000002u;
    }

    _impl_.location_ = reinterpret_cast<::turms::client::model::proto::UserLocation*>(value);
    // @@protoc_insertion_point(field_set_allocated:turms.client.model.proto.CreateSessionRequest.location)
}

// repeated .turms.client.model.proto.Value custom_attributes = 15;
inline int CreateSessionRequest::_internal_custom_attributes_size() const {
    return _internal_custom_attributes().size();
}
inline int CreateSessionRequest::custom_attributes_size() const {
    return _internal_custom_attributes_size();
}
inline ::turms::client::model::proto::Value* CreateSessionRequest::mutable_custom_attributes(
    int index) ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.CreateSessionRequest.custom_attributes)
    return _internal_mutable_custom_attributes()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
CreateSessionRequest::mutable_custom_attributes() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.CreateSessionRequest.custom_attributes)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    return _internal_mutable_custom_attributes();
}
inline const ::turms::client::model::proto::Value& CreateSessionRequest::custom_attributes(
    int index) const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.CreateSessionRequest.custom_attributes)
    return _internal_custom_attributes().Get(index);
}
inline ::turms::client::model::proto::Value* CreateSessionRequest::add_custom_attributes()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    ::turms::client::model::proto::Value* _add = _internal_mutable_custom_attributes()->Add();
    // @@protoc_insertion_point(field_add:turms.client.model.proto.CreateSessionRequest.custom_attributes)
    return _add;
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
CreateSessionRequest::custom_attributes() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_list:turms.client.model.proto.CreateSessionRequest.custom_attributes)
    return _internal_custom_attributes();
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
CreateSessionRequest::_internal_custom_attributes() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.custom_attributes_;
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
CreateSessionRequest::_internal_mutable_custom_attributes() {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return &_impl_.custom_attributes_;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms

// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // request_2fuser_2fcreate_5fsession_5frequest_2eproto_2epb_2eh