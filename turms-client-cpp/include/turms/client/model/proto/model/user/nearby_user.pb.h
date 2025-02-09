// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: model/user/nearby_user.proto
// Protobuf C++ Version: 5.29.1

#ifndef model_2fuser_2fnearby_5fuser_2eproto_2epb_2eh
#define model_2fuser_2fnearby_5fuser_2eproto_2epb_2eh

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
#include "google/protobuf/message_lite.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "turms/client/model/proto/constant/device_type.pb.h"
#include "turms/client/model/proto/model/common/value.pb.h"
#include "turms/client/model/proto/model/user/user_info.pb.h"
#include "turms/client/model/proto/model/user/user_location.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_model_2fuser_2fnearby_5fuser_2eproto

namespace google {
namespace protobuf {
namespace internal {
template <typename T>
::absl::string_view GetAnyMessageName();
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_model_2fuser_2fnearby_5fuser_2eproto {
    static const ::uint32_t offsets[];
};
namespace turms {
namespace client {
namespace model {
namespace proto {
class NearbyUser;
struct NearbyUserDefaultTypeInternal;
extern NearbyUserDefaultTypeInternal _NearbyUser_default_instance_;
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

class NearbyUser final : public ::google::protobuf::MessageLite
/* @@protoc_insertion_point(class_definition:turms.client.model.proto.NearbyUser) */ {
   public:
    inline NearbyUser()
        : NearbyUser(nullptr) {
    }
    ~NearbyUser() PROTOBUF_FINAL;

#if defined(PROTOBUF_CUSTOM_VTABLE)
    void operator delete(NearbyUser* msg, std::destroying_delete_t) {
        SharedDtor(*msg);
        ::google::protobuf::internal::SizedDelete(msg, sizeof(NearbyUser));
    }
#endif

    template <typename = void>
    explicit PROTOBUF_CONSTEXPR NearbyUser(::google::protobuf::internal::ConstantInitialized);

    inline NearbyUser(const NearbyUser& from)
        : NearbyUser(nullptr, from) {
    }
    inline NearbyUser(NearbyUser&& from) noexcept
        : NearbyUser(nullptr, std::move(from)) {
    }
    inline NearbyUser& operator=(const NearbyUser& from) {
        CopyFrom(from);
        return *this;
    }
    inline NearbyUser& operator=(NearbyUser&& from) noexcept {
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

    static const NearbyUser& default_instance() {
        return *internal_default_instance();
    }
    static inline const NearbyUser* internal_default_instance() {
        return reinterpret_cast<const NearbyUser*>(&_NearbyUser_default_instance_);
    }
    static constexpr int kIndexInFileMessages = 0;
    friend void swap(NearbyUser& a, NearbyUser& b) {
        a.Swap(&b);
    }
    inline void Swap(NearbyUser* other) {
        if (other == this)
            return;
        if (::google::protobuf::internal::CanUseInternalSwap(GetArena(), other->GetArena())) {
            InternalSwap(other);
        } else {
            ::google::protobuf::internal::GenericSwap(this, other);
        }
    }
    void UnsafeArenaSwap(NearbyUser* other) {
        if (other == this)
            return;
        ABSL_DCHECK(GetArena() == other->GetArena());
        InternalSwap(other);
    }

    // implements Message ----------------------------------------------

    NearbyUser* New(::google::protobuf::Arena* arena = nullptr) const {
        return ::google::protobuf::MessageLite::DefaultConstruct<NearbyUser>(arena);
    }
    void CopyFrom(const NearbyUser& from);
    void MergeFrom(const NearbyUser& from) {
        NearbyUser::MergeImpl(*this, from);
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
    void InternalSwap(NearbyUser* other);

   private:
    template <typename T>
    friend ::absl::string_view(::google::protobuf::internal::GetAnyMessageName)();
    static ::absl::string_view FullMessageName() {
        return "turms.client.model.proto.NearbyUser";
    }

   protected:
    explicit NearbyUser(::google::protobuf::Arena* arena);
    NearbyUser(::google::protobuf::Arena* arena, const NearbyUser& from);
    NearbyUser(::google::protobuf::Arena* arena, NearbyUser&& from) noexcept
        : NearbyUser(arena) {
        *this = ::std::move(from);
    }
    const ::google::protobuf::internal::ClassData* GetClassData() const PROTOBUF_FINAL;
    static void* PlacementNew_(const void*, void* mem, ::google::protobuf::Arena* arena);
    static constexpr auto InternalNewImpl_();
    static const ::google::protobuf::internal::ClassDataLite<36> _class_data_;

   public:
    // nested types ----------------------------------------------------

    // accessors -------------------------------------------------------
    enum : int {
        kCustomAttributesFieldNumber = 15,
        kInfoFieldNumber = 3,
        kLocationFieldNumber = 5,
        kUserIdFieldNumber = 1,
        kDeviceTypeFieldNumber = 2,
        kDistanceFieldNumber = 4,
    };
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
    // optional .turms.client.model.proto.UserInfo info = 3;
    bool has_info() const;
    void clear_info();
    const ::turms::client::model::proto::UserInfo& info() const;
    PROTOBUF_NODISCARD ::turms::client::model::proto::UserInfo* release_info();
    ::turms::client::model::proto::UserInfo* mutable_info();
    void set_allocated_info(::turms::client::model::proto::UserInfo* value);
    void unsafe_arena_set_allocated_info(::turms::client::model::proto::UserInfo* value);
    ::turms::client::model::proto::UserInfo* unsafe_arena_release_info();

   private:
    const ::turms::client::model::proto::UserInfo& _internal_info() const;
    ::turms::client::model::proto::UserInfo* _internal_mutable_info();

   public:
    // optional .turms.client.model.proto.UserLocation location = 5;
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
    // int64 user_id = 1;
    void clear_user_id();
    ::int64_t user_id() const;
    void set_user_id(::int64_t value);

   private:
    ::int64_t _internal_user_id() const;
    void _internal_set_user_id(::int64_t value);

   public:
    // optional .turms.client.model.proto.DeviceType device_type = 2;
    bool has_device_type() const;
    void clear_device_type();
    ::turms::client::model::proto::DeviceType device_type() const;
    void set_device_type(::turms::client::model::proto::DeviceType value);

   private:
    ::turms::client::model::proto::DeviceType _internal_device_type() const;
    void _internal_set_device_type(::turms::client::model::proto::DeviceType value);

   public:
    // optional int32 distance = 4;
    bool has_distance() const;
    void clear_distance();
    ::int32_t distance() const;
    void set_distance(::int32_t value);

   private:
    ::int32_t _internal_distance() const;
    void _internal_set_distance(::int32_t value);

   public:
    // @@protoc_insertion_point(class_scope:turms.client.model.proto.NearbyUser)
   private:
    class _Internal;
    friend class ::google::protobuf::internal::TcParser;
    static const ::google::protobuf::internal::TcParseTable<3, 6, 3, 0, 2> _table_;

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
                              const NearbyUser& from_msg);
        ::google::protobuf::internal::HasBits<1> _has_bits_;
        ::google::protobuf::internal::CachedSize _cached_size_;
        ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>
            custom_attributes_;
        ::turms::client::model::proto::UserInfo* info_;
        ::turms::client::model::proto::UserLocation* location_;
        ::int64_t user_id_;
        int device_type_;
        ::int32_t distance_;
        PROTOBUF_TSAN_DECLARE_MEMBER
    };
    union {
        Impl_ _impl_;
    };
    friend struct ::TableStruct_model_2fuser_2fnearby_5fuser_2eproto;
};

// ===================================================================

// ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// NearbyUser

// int64 user_id = 1;
inline void NearbyUser::clear_user_id() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.user_id_ = ::int64_t{0};
}
inline ::int64_t NearbyUser::user_id() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.NearbyUser.user_id)
    return _internal_user_id();
}
inline void NearbyUser::set_user_id(::int64_t value) {
    _internal_set_user_id(value);
    // @@protoc_insertion_point(field_set:turms.client.model.proto.NearbyUser.user_id)
}
inline ::int64_t NearbyUser::_internal_user_id() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.user_id_;
}
inline void NearbyUser::_internal_set_user_id(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.user_id_ = value;
}

// optional .turms.client.model.proto.DeviceType device_type = 2;
inline bool NearbyUser::has_device_type() const {
    bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
    return value;
}
inline void NearbyUser::clear_device_type() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.device_type_ = 0;
    _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::turms::client::model::proto::DeviceType NearbyUser::device_type() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.NearbyUser.device_type)
    return _internal_device_type();
}
inline void NearbyUser::set_device_type(::turms::client::model::proto::DeviceType value) {
    _internal_set_device_type(value);
    _impl_._has_bits_[0] |= 0x00000004u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.NearbyUser.device_type)
}
inline ::turms::client::model::proto::DeviceType NearbyUser::_internal_device_type() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return static_cast<::turms::client::model::proto::DeviceType>(_impl_.device_type_);
}
inline void NearbyUser::_internal_set_device_type(::turms::client::model::proto::DeviceType value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.device_type_ = value;
}

// optional .turms.client.model.proto.UserInfo info = 3;
inline bool NearbyUser::has_info() const {
    bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
    PROTOBUF_ASSUME(!value || _impl_.info_ != nullptr);
    return value;
}
inline const ::turms::client::model::proto::UserInfo& NearbyUser::_internal_info() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    const ::turms::client::model::proto::UserInfo* p = _impl_.info_;
    return p != nullptr ? *p
                        : reinterpret_cast<const ::turms::client::model::proto::UserInfo&>(
                              ::turms::client::model::proto::_UserInfo_default_instance_);
}
inline const ::turms::client::model::proto::UserInfo& NearbyUser::info() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.NearbyUser.info)
    return _internal_info();
}
inline void NearbyUser::unsafe_arena_set_allocated_info(
    ::turms::client::model::proto::UserInfo* value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    if (GetArena() == nullptr) {
        delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.info_);
    }
    _impl_.info_ = reinterpret_cast<::turms::client::model::proto::UserInfo*>(value);
    if (value != nullptr) {
        _impl_._has_bits_[0] |= 0x00000001u;
    } else {
        _impl_._has_bits_[0] &= ~0x00000001u;
    }
    // @@protoc_insertion_point(field_unsafe_arena_set_allocated:turms.client.model.proto.NearbyUser.info)
}
inline ::turms::client::model::proto::UserInfo* NearbyUser::release_info() {
    ::google::protobuf::internal::TSanWrite(&_impl_);

    _impl_._has_bits_[0] &= ~0x00000001u;
    ::turms::client::model::proto::UserInfo* released = _impl_.info_;
    _impl_.info_ = nullptr;
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
inline ::turms::client::model::proto::UserInfo* NearbyUser::unsafe_arena_release_info() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    // @@protoc_insertion_point(field_release:turms.client.model.proto.NearbyUser.info)

    _impl_._has_bits_[0] &= ~0x00000001u;
    ::turms::client::model::proto::UserInfo* temp = _impl_.info_;
    _impl_.info_ = nullptr;
    return temp;
}
inline ::turms::client::model::proto::UserInfo* NearbyUser::_internal_mutable_info() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    if (_impl_.info_ == nullptr) {
        auto* p = ::google::protobuf::MessageLite::DefaultConstruct<
            ::turms::client::model::proto::UserInfo>(GetArena());
        _impl_.info_ = reinterpret_cast<::turms::client::model::proto::UserInfo*>(p);
    }
    return _impl_.info_;
}
inline ::turms::client::model::proto::UserInfo* NearbyUser::mutable_info()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    _impl_._has_bits_[0] |= 0x00000001u;
    ::turms::client::model::proto::UserInfo* _msg = _internal_mutable_info();
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.NearbyUser.info)
    return _msg;
}
inline void NearbyUser::set_allocated_info(::turms::client::model::proto::UserInfo* value) {
    ::google::protobuf::Arena* message_arena = GetArena();
    ::google::protobuf::internal::TSanWrite(&_impl_);
    if (message_arena == nullptr) {
        delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.info_);
    }

    if (value != nullptr) {
        ::google::protobuf::Arena* submessage_arena =
            reinterpret_cast<::google::protobuf::MessageLite*>(value)->GetArena();
        if (message_arena != submessage_arena) {
            value = ::google::protobuf::internal::GetOwnedMessage(
                message_arena, value, submessage_arena);
        }
        _impl_._has_bits_[0] |= 0x00000001u;
    } else {
        _impl_._has_bits_[0] &= ~0x00000001u;
    }

    _impl_.info_ = reinterpret_cast<::turms::client::model::proto::UserInfo*>(value);
    // @@protoc_insertion_point(field_set_allocated:turms.client.model.proto.NearbyUser.info)
}

// optional int32 distance = 4;
inline bool NearbyUser::has_distance() const {
    bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
    return value;
}
inline void NearbyUser::clear_distance() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.distance_ = 0;
    _impl_._has_bits_[0] &= ~0x00000008u;
}
inline ::int32_t NearbyUser::distance() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.NearbyUser.distance)
    return _internal_distance();
}
inline void NearbyUser::set_distance(::int32_t value) {
    _internal_set_distance(value);
    _impl_._has_bits_[0] |= 0x00000008u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.NearbyUser.distance)
}
inline ::int32_t NearbyUser::_internal_distance() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.distance_;
}
inline void NearbyUser::_internal_set_distance(::int32_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.distance_ = value;
}

// optional .turms.client.model.proto.UserLocation location = 5;
inline bool NearbyUser::has_location() const {
    bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
    PROTOBUF_ASSUME(!value || _impl_.location_ != nullptr);
    return value;
}
inline const ::turms::client::model::proto::UserLocation& NearbyUser::_internal_location() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    const ::turms::client::model::proto::UserLocation* p = _impl_.location_;
    return p != nullptr ? *p
                        : reinterpret_cast<const ::turms::client::model::proto::UserLocation&>(
                              ::turms::client::model::proto::_UserLocation_default_instance_);
}
inline const ::turms::client::model::proto::UserLocation& NearbyUser::location() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.NearbyUser.location)
    return _internal_location();
}
inline void NearbyUser::unsafe_arena_set_allocated_location(
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
    // @@protoc_insertion_point(field_unsafe_arena_set_allocated:turms.client.model.proto.NearbyUser.location)
}
inline ::turms::client::model::proto::UserLocation* NearbyUser::release_location() {
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
inline ::turms::client::model::proto::UserLocation* NearbyUser::unsafe_arena_release_location() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    // @@protoc_insertion_point(field_release:turms.client.model.proto.NearbyUser.location)

    _impl_._has_bits_[0] &= ~0x00000002u;
    ::turms::client::model::proto::UserLocation* temp = _impl_.location_;
    _impl_.location_ = nullptr;
    return temp;
}
inline ::turms::client::model::proto::UserLocation* NearbyUser::_internal_mutable_location() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    if (_impl_.location_ == nullptr) {
        auto* p = ::google::protobuf::MessageLite::DefaultConstruct<
            ::turms::client::model::proto::UserLocation>(GetArena());
        _impl_.location_ = reinterpret_cast<::turms::client::model::proto::UserLocation*>(p);
    }
    return _impl_.location_;
}
inline ::turms::client::model::proto::UserLocation* NearbyUser::mutable_location()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    _impl_._has_bits_[0] |= 0x00000002u;
    ::turms::client::model::proto::UserLocation* _msg = _internal_mutable_location();
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.NearbyUser.location)
    return _msg;
}
inline void NearbyUser::set_allocated_location(::turms::client::model::proto::UserLocation* value) {
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
    // @@protoc_insertion_point(field_set_allocated:turms.client.model.proto.NearbyUser.location)
}

// repeated .turms.client.model.proto.Value custom_attributes = 15;
inline int NearbyUser::_internal_custom_attributes_size() const {
    return _internal_custom_attributes().size();
}
inline int NearbyUser::custom_attributes_size() const {
    return _internal_custom_attributes_size();
}
inline ::turms::client::model::proto::Value* NearbyUser::mutable_custom_attributes(int index)
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.NearbyUser.custom_attributes)
    return _internal_mutable_custom_attributes()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
NearbyUser::mutable_custom_attributes() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.NearbyUser.custom_attributes)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    return _internal_mutable_custom_attributes();
}
inline const ::turms::client::model::proto::Value& NearbyUser::custom_attributes(int index) const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.NearbyUser.custom_attributes)
    return _internal_custom_attributes().Get(index);
}
inline ::turms::client::model::proto::Value* NearbyUser::add_custom_attributes()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    ::turms::client::model::proto::Value* _add = _internal_mutable_custom_attributes()->Add();
    // @@protoc_insertion_point(field_add:turms.client.model.proto.NearbyUser.custom_attributes)
    return _add;
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
NearbyUser::custom_attributes() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_list:turms.client.model.proto.NearbyUser.custom_attributes)
    return _internal_custom_attributes();
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
NearbyUser::_internal_custom_attributes() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.custom_attributes_;
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
NearbyUser::_internal_mutable_custom_attributes() {
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

#endif  // model_2fuser_2fnearby_5fuser_2eproto_2epb_2eh