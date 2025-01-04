// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: model/conference/meeting.proto
// Protobuf C++ Version: 5.29.1

#ifndef model_2fconference_2fmeeting_2eproto_2epb_2eh
#define model_2fconference_2fmeeting_2eproto_2epb_2eh

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
#include "turms/client/model/proto/model/common/value.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_model_2fconference_2fmeeting_2eproto

namespace google {
namespace protobuf {
namespace internal {
template <typename T>
::absl::string_view GetAnyMessageName();
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_model_2fconference_2fmeeting_2eproto {
    static const ::uint32_t offsets[];
};
namespace turms {
namespace client {
namespace model {
namespace proto {
class Meeting;
struct MeetingDefaultTypeInternal;
extern MeetingDefaultTypeInternal _Meeting_default_instance_;
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

class Meeting final : public ::google::protobuf::MessageLite
/* @@protoc_insertion_point(class_definition:turms.client.model.proto.Meeting) */ {
   public:
    inline Meeting()
        : Meeting(nullptr) {
    }
    ~Meeting() PROTOBUF_FINAL;

#if defined(PROTOBUF_CUSTOM_VTABLE)
    void operator delete(Meeting* msg, std::destroying_delete_t) {
        SharedDtor(*msg);
        ::google::protobuf::internal::SizedDelete(msg, sizeof(Meeting));
    }
#endif

    template <typename = void>
    explicit PROTOBUF_CONSTEXPR Meeting(::google::protobuf::internal::ConstantInitialized);

    inline Meeting(const Meeting& from)
        : Meeting(nullptr, from) {
    }
    inline Meeting(Meeting&& from) noexcept
        : Meeting(nullptr, std::move(from)) {
    }
    inline Meeting& operator=(const Meeting& from) {
        CopyFrom(from);
        return *this;
    }
    inline Meeting& operator=(Meeting&& from) noexcept {
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

    static const Meeting& default_instance() {
        return *internal_default_instance();
    }
    static inline const Meeting* internal_default_instance() {
        return reinterpret_cast<const Meeting*>(&_Meeting_default_instance_);
    }
    static constexpr int kIndexInFileMessages = 0;
    friend void swap(Meeting& a, Meeting& b) {
        a.Swap(&b);
    }
    inline void Swap(Meeting* other) {
        if (other == this)
            return;
        if (::google::protobuf::internal::CanUseInternalSwap(GetArena(), other->GetArena())) {
            InternalSwap(other);
        } else {
            ::google::protobuf::internal::GenericSwap(this, other);
        }
    }
    void UnsafeArenaSwap(Meeting* other) {
        if (other == this)
            return;
        ABSL_DCHECK(GetArena() == other->GetArena());
        InternalSwap(other);
    }

    // implements Message ----------------------------------------------

    Meeting* New(::google::protobuf::Arena* arena = nullptr) const {
        return ::google::protobuf::MessageLite::DefaultConstruct<Meeting>(arena);
    }
    void CopyFrom(const Meeting& from);
    void MergeFrom(const Meeting& from) {
        Meeting::MergeImpl(*this, from);
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
    void InternalSwap(Meeting* other);

   private:
    template <typename T>
    friend ::absl::string_view(::google::protobuf::internal::GetAnyMessageName)();
    static ::absl::string_view FullMessageName() {
        return "turms.client.model.proto.Meeting";
    }

   protected:
    explicit Meeting(::google::protobuf::Arena* arena);
    Meeting(::google::protobuf::Arena* arena, const Meeting& from);
    Meeting(::google::protobuf::Arena* arena, Meeting&& from) noexcept
        : Meeting(arena) {
        *this = ::std::move(from);
    }
    const ::google::protobuf::internal::ClassData* GetClassData() const PROTOBUF_FINAL;
    static void* PlacementNew_(const void*, void* mem, ::google::protobuf::Arena* arena);
    static constexpr auto InternalNewImpl_();
    static const ::google::protobuf::internal::ClassDataLite<33> _class_data_;

   public:
    // nested types ----------------------------------------------------

    // accessors -------------------------------------------------------
    enum : int {
        kCustomAttributesFieldNumber = 15,
        kAccessTokenFieldNumber = 5,
        kNameFieldNumber = 6,
        kIntroFieldNumber = 7,
        kPasswordFieldNumber = 8,
        kIdFieldNumber = 1,
        kUserIdFieldNumber = 2,
        kGroupIdFieldNumber = 3,
        kCreatorIdFieldNumber = 4,
        kStartDateFieldNumber = 9,
        kEndDateFieldNumber = 10,
        kCancelDateFieldNumber = 11,
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
    // optional string access_token = 5;
    bool has_access_token() const;
    void clear_access_token();
    const std::string& access_token() const;
    template <typename Arg_ = const std::string&, typename... Args_>
    void set_access_token(Arg_&& arg, Args_... args);
    std::string* mutable_access_token();
    PROTOBUF_NODISCARD std::string* release_access_token();
    void set_allocated_access_token(std::string* value);

   private:
    const std::string& _internal_access_token() const;
    inline PROTOBUF_ALWAYS_INLINE void _internal_set_access_token(const std::string& value);
    std::string* _internal_mutable_access_token();

   public:
    // optional string name = 6;
    bool has_name() const;
    void clear_name();
    const std::string& name() const;
    template <typename Arg_ = const std::string&, typename... Args_>
    void set_name(Arg_&& arg, Args_... args);
    std::string* mutable_name();
    PROTOBUF_NODISCARD std::string* release_name();
    void set_allocated_name(std::string* value);

   private:
    const std::string& _internal_name() const;
    inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
    std::string* _internal_mutable_name();

   public:
    // optional string intro = 7;
    bool has_intro() const;
    void clear_intro();
    const std::string& intro() const;
    template <typename Arg_ = const std::string&, typename... Args_>
    void set_intro(Arg_&& arg, Args_... args);
    std::string* mutable_intro();
    PROTOBUF_NODISCARD std::string* release_intro();
    void set_allocated_intro(std::string* value);

   private:
    const std::string& _internal_intro() const;
    inline PROTOBUF_ALWAYS_INLINE void _internal_set_intro(const std::string& value);
    std::string* _internal_mutable_intro();

   public:
    // optional string password = 8;
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
    // int64 id = 1;
    void clear_id();
    ::int64_t id() const;
    void set_id(::int64_t value);

   private:
    ::int64_t _internal_id() const;
    void _internal_set_id(::int64_t value);

   public:
    // optional int64 user_id = 2;
    bool has_user_id() const;
    void clear_user_id();
    ::int64_t user_id() const;
    void set_user_id(::int64_t value);

   private:
    ::int64_t _internal_user_id() const;
    void _internal_set_user_id(::int64_t value);

   public:
    // optional int64 group_id = 3;
    bool has_group_id() const;
    void clear_group_id();
    ::int64_t group_id() const;
    void set_group_id(::int64_t value);

   private:
    ::int64_t _internal_group_id() const;
    void _internal_set_group_id(::int64_t value);

   public:
    // int64 creator_id = 4;
    void clear_creator_id();
    ::int64_t creator_id() const;
    void set_creator_id(::int64_t value);

   private:
    ::int64_t _internal_creator_id() const;
    void _internal_set_creator_id(::int64_t value);

   public:
    // int64 start_date = 9;
    void clear_start_date();
    ::int64_t start_date() const;
    void set_start_date(::int64_t value);

   private:
    ::int64_t _internal_start_date() const;
    void _internal_set_start_date(::int64_t value);

   public:
    // optional int64 end_date = 10;
    bool has_end_date() const;
    void clear_end_date();
    ::int64_t end_date() const;
    void set_end_date(::int64_t value);

   private:
    ::int64_t _internal_end_date() const;
    void _internal_set_end_date(::int64_t value);

   public:
    // optional int64 cancel_date = 11;
    bool has_cancel_date() const;
    void clear_cancel_date();
    ::int64_t cancel_date() const;
    void set_cancel_date(::int64_t value);

   private:
    ::int64_t _internal_cancel_date() const;
    void _internal_set_cancel_date(::int64_t value);

   public:
    // @@protoc_insertion_point(class_scope:turms.client.model.proto.Meeting)
   private:
    class _Internal;
    friend class ::google::protobuf::internal::TcParser;
    static const ::google::protobuf::internal::TcParseTable<4, 12, 1, 78, 2> _table_;

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
                              const Meeting& from_msg);
        ::google::protobuf::internal::HasBits<1> _has_bits_;
        ::google::protobuf::internal::CachedSize _cached_size_;
        ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>
            custom_attributes_;
        ::google::protobuf::internal::ArenaStringPtr access_token_;
        ::google::protobuf::internal::ArenaStringPtr name_;
        ::google::protobuf::internal::ArenaStringPtr intro_;
        ::google::protobuf::internal::ArenaStringPtr password_;
        ::int64_t id_;
        ::int64_t user_id_;
        ::int64_t group_id_;
        ::int64_t creator_id_;
        ::int64_t start_date_;
        ::int64_t end_date_;
        ::int64_t cancel_date_;
        PROTOBUF_TSAN_DECLARE_MEMBER
    };
    union {
        Impl_ _impl_;
    };
    friend struct ::TableStruct_model_2fconference_2fmeeting_2eproto;
};

// ===================================================================

// ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Meeting

// int64 id = 1;
inline void Meeting::clear_id() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.id_ = ::int64_t{0};
}
inline ::int64_t Meeting::id() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.Meeting.id)
    return _internal_id();
}
inline void Meeting::set_id(::int64_t value) {
    _internal_set_id(value);
    // @@protoc_insertion_point(field_set:turms.client.model.proto.Meeting.id)
}
inline ::int64_t Meeting::_internal_id() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.id_;
}
inline void Meeting::_internal_set_id(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.id_ = value;
}

// optional int64 user_id = 2;
inline bool Meeting::has_user_id() const {
    bool value = (_impl_._has_bits_[0] & 0x00000010u) != 0;
    return value;
}
inline void Meeting::clear_user_id() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.user_id_ = ::int64_t{0};
    _impl_._has_bits_[0] &= ~0x00000010u;
}
inline ::int64_t Meeting::user_id() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.Meeting.user_id)
    return _internal_user_id();
}
inline void Meeting::set_user_id(::int64_t value) {
    _internal_set_user_id(value);
    _impl_._has_bits_[0] |= 0x00000010u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.Meeting.user_id)
}
inline ::int64_t Meeting::_internal_user_id() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.user_id_;
}
inline void Meeting::_internal_set_user_id(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.user_id_ = value;
}

// optional int64 group_id = 3;
inline bool Meeting::has_group_id() const {
    bool value = (_impl_._has_bits_[0] & 0x00000020u) != 0;
    return value;
}
inline void Meeting::clear_group_id() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.group_id_ = ::int64_t{0};
    _impl_._has_bits_[0] &= ~0x00000020u;
}
inline ::int64_t Meeting::group_id() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.Meeting.group_id)
    return _internal_group_id();
}
inline void Meeting::set_group_id(::int64_t value) {
    _internal_set_group_id(value);
    _impl_._has_bits_[0] |= 0x00000020u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.Meeting.group_id)
}
inline ::int64_t Meeting::_internal_group_id() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.group_id_;
}
inline void Meeting::_internal_set_group_id(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.group_id_ = value;
}

// int64 creator_id = 4;
inline void Meeting::clear_creator_id() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.creator_id_ = ::int64_t{0};
}
inline ::int64_t Meeting::creator_id() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.Meeting.creator_id)
    return _internal_creator_id();
}
inline void Meeting::set_creator_id(::int64_t value) {
    _internal_set_creator_id(value);
    // @@protoc_insertion_point(field_set:turms.client.model.proto.Meeting.creator_id)
}
inline ::int64_t Meeting::_internal_creator_id() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.creator_id_;
}
inline void Meeting::_internal_set_creator_id(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.creator_id_ = value;
}

// optional string access_token = 5;
inline bool Meeting::has_access_token() const {
    bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
    return value;
}
inline void Meeting::clear_access_token() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.access_token_.ClearToEmpty();
    _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Meeting::access_token() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.Meeting.access_token)
    return _internal_access_token();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Meeting::set_access_token(Arg_&& arg, Args_... args) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000001u;
    _impl_.access_token_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
    // @@protoc_insertion_point(field_set:turms.client.model.proto.Meeting.access_token)
}
inline std::string* Meeting::mutable_access_token() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    std::string* _s = _internal_mutable_access_token();
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.Meeting.access_token)
    return _s;
}
inline const std::string& Meeting::_internal_access_token() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.access_token_.Get();
}
inline void Meeting::_internal_set_access_token(const std::string& value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000001u;
    _impl_.access_token_.Set(value, GetArena());
}
inline std::string* Meeting::_internal_mutable_access_token() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000001u;
    return _impl_.access_token_.Mutable(GetArena());
}
inline std::string* Meeting::release_access_token() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    // @@protoc_insertion_point(field_release:turms.client.model.proto.Meeting.access_token)
    if ((_impl_._has_bits_[0] & 0x00000001u) == 0) {
        return nullptr;
    }
    _impl_._has_bits_[0] &= ~0x00000001u;
    auto* released = _impl_.access_token_.Release();
    if (::google::protobuf::internal::DebugHardenForceCopyDefaultString()) {
        _impl_.access_token_.Set("", GetArena());
    }
    return released;
}
inline void Meeting::set_allocated_access_token(std::string* value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    if (value != nullptr) {
        _impl_._has_bits_[0] |= 0x00000001u;
    } else {
        _impl_._has_bits_[0] &= ~0x00000001u;
    }
    _impl_.access_token_.SetAllocated(value, GetArena());
    if (::google::protobuf::internal::DebugHardenForceCopyDefaultString() &&
        _impl_.access_token_.IsDefault()) {
        _impl_.access_token_.Set("", GetArena());
    }
    // @@protoc_insertion_point(field_set_allocated:turms.client.model.proto.Meeting.access_token)
}

// optional string name = 6;
inline bool Meeting::has_name() const {
    bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
    return value;
}
inline void Meeting::clear_name() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.name_.ClearToEmpty();
    _impl_._has_bits_[0] &= ~0x00000002u;
}
inline const std::string& Meeting::name() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.Meeting.name)
    return _internal_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Meeting::set_name(Arg_&& arg, Args_... args) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000002u;
    _impl_.name_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
    // @@protoc_insertion_point(field_set:turms.client.model.proto.Meeting.name)
}
inline std::string* Meeting::mutable_name() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    std::string* _s = _internal_mutable_name();
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.Meeting.name)
    return _s;
}
inline const std::string& Meeting::_internal_name() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.name_.Get();
}
inline void Meeting::_internal_set_name(const std::string& value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000002u;
    _impl_.name_.Set(value, GetArena());
}
inline std::string* Meeting::_internal_mutable_name() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000002u;
    return _impl_.name_.Mutable(GetArena());
}
inline std::string* Meeting::release_name() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    // @@protoc_insertion_point(field_release:turms.client.model.proto.Meeting.name)
    if ((_impl_._has_bits_[0] & 0x00000002u) == 0) {
        return nullptr;
    }
    _impl_._has_bits_[0] &= ~0x00000002u;
    auto* released = _impl_.name_.Release();
    if (::google::protobuf::internal::DebugHardenForceCopyDefaultString()) {
        _impl_.name_.Set("", GetArena());
    }
    return released;
}
inline void Meeting::set_allocated_name(std::string* value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    if (value != nullptr) {
        _impl_._has_bits_[0] |= 0x00000002u;
    } else {
        _impl_._has_bits_[0] &= ~0x00000002u;
    }
    _impl_.name_.SetAllocated(value, GetArena());
    if (::google::protobuf::internal::DebugHardenForceCopyDefaultString() &&
        _impl_.name_.IsDefault()) {
        _impl_.name_.Set("", GetArena());
    }
    // @@protoc_insertion_point(field_set_allocated:turms.client.model.proto.Meeting.name)
}

// optional string intro = 7;
inline bool Meeting::has_intro() const {
    bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
    return value;
}
inline void Meeting::clear_intro() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.intro_.ClearToEmpty();
    _impl_._has_bits_[0] &= ~0x00000004u;
}
inline const std::string& Meeting::intro() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.Meeting.intro)
    return _internal_intro();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Meeting::set_intro(Arg_&& arg, Args_... args) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000004u;
    _impl_.intro_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
    // @@protoc_insertion_point(field_set:turms.client.model.proto.Meeting.intro)
}
inline std::string* Meeting::mutable_intro() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    std::string* _s = _internal_mutable_intro();
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.Meeting.intro)
    return _s;
}
inline const std::string& Meeting::_internal_intro() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.intro_.Get();
}
inline void Meeting::_internal_set_intro(const std::string& value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000004u;
    _impl_.intro_.Set(value, GetArena());
}
inline std::string* Meeting::_internal_mutable_intro() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000004u;
    return _impl_.intro_.Mutable(GetArena());
}
inline std::string* Meeting::release_intro() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    // @@protoc_insertion_point(field_release:turms.client.model.proto.Meeting.intro)
    if ((_impl_._has_bits_[0] & 0x00000004u) == 0) {
        return nullptr;
    }
    _impl_._has_bits_[0] &= ~0x00000004u;
    auto* released = _impl_.intro_.Release();
    if (::google::protobuf::internal::DebugHardenForceCopyDefaultString()) {
        _impl_.intro_.Set("", GetArena());
    }
    return released;
}
inline void Meeting::set_allocated_intro(std::string* value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    if (value != nullptr) {
        _impl_._has_bits_[0] |= 0x00000004u;
    } else {
        _impl_._has_bits_[0] &= ~0x00000004u;
    }
    _impl_.intro_.SetAllocated(value, GetArena());
    if (::google::protobuf::internal::DebugHardenForceCopyDefaultString() &&
        _impl_.intro_.IsDefault()) {
        _impl_.intro_.Set("", GetArena());
    }
    // @@protoc_insertion_point(field_set_allocated:turms.client.model.proto.Meeting.intro)
}

// optional string password = 8;
inline bool Meeting::has_password() const {
    bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
    return value;
}
inline void Meeting::clear_password() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.password_.ClearToEmpty();
    _impl_._has_bits_[0] &= ~0x00000008u;
}
inline const std::string& Meeting::password() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.Meeting.password)
    return _internal_password();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Meeting::set_password(Arg_&& arg, Args_... args) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000008u;
    _impl_.password_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
    // @@protoc_insertion_point(field_set:turms.client.model.proto.Meeting.password)
}
inline std::string* Meeting::mutable_password() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    std::string* _s = _internal_mutable_password();
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.Meeting.password)
    return _s;
}
inline const std::string& Meeting::_internal_password() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.password_.Get();
}
inline void Meeting::_internal_set_password(const std::string& value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000008u;
    _impl_.password_.Set(value, GetArena());
}
inline std::string* Meeting::_internal_mutable_password() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000008u;
    return _impl_.password_.Mutable(GetArena());
}
inline std::string* Meeting::release_password() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    // @@protoc_insertion_point(field_release:turms.client.model.proto.Meeting.password)
    if ((_impl_._has_bits_[0] & 0x00000008u) == 0) {
        return nullptr;
    }
    _impl_._has_bits_[0] &= ~0x00000008u;
    auto* released = _impl_.password_.Release();
    if (::google::protobuf::internal::DebugHardenForceCopyDefaultString()) {
        _impl_.password_.Set("", GetArena());
    }
    return released;
}
inline void Meeting::set_allocated_password(std::string* value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    if (value != nullptr) {
        _impl_._has_bits_[0] |= 0x00000008u;
    } else {
        _impl_._has_bits_[0] &= ~0x00000008u;
    }
    _impl_.password_.SetAllocated(value, GetArena());
    if (::google::protobuf::internal::DebugHardenForceCopyDefaultString() &&
        _impl_.password_.IsDefault()) {
        _impl_.password_.Set("", GetArena());
    }
    // @@protoc_insertion_point(field_set_allocated:turms.client.model.proto.Meeting.password)
}

// int64 start_date = 9;
inline void Meeting::clear_start_date() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.start_date_ = ::int64_t{0};
}
inline ::int64_t Meeting::start_date() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.Meeting.start_date)
    return _internal_start_date();
}
inline void Meeting::set_start_date(::int64_t value) {
    _internal_set_start_date(value);
    // @@protoc_insertion_point(field_set:turms.client.model.proto.Meeting.start_date)
}
inline ::int64_t Meeting::_internal_start_date() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.start_date_;
}
inline void Meeting::_internal_set_start_date(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.start_date_ = value;
}

// optional int64 end_date = 10;
inline bool Meeting::has_end_date() const {
    bool value = (_impl_._has_bits_[0] & 0x00000040u) != 0;
    return value;
}
inline void Meeting::clear_end_date() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.end_date_ = ::int64_t{0};
    _impl_._has_bits_[0] &= ~0x00000040u;
}
inline ::int64_t Meeting::end_date() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.Meeting.end_date)
    return _internal_end_date();
}
inline void Meeting::set_end_date(::int64_t value) {
    _internal_set_end_date(value);
    _impl_._has_bits_[0] |= 0x00000040u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.Meeting.end_date)
}
inline ::int64_t Meeting::_internal_end_date() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.end_date_;
}
inline void Meeting::_internal_set_end_date(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.end_date_ = value;
}

// optional int64 cancel_date = 11;
inline bool Meeting::has_cancel_date() const {
    bool value = (_impl_._has_bits_[0] & 0x00000080u) != 0;
    return value;
}
inline void Meeting::clear_cancel_date() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.cancel_date_ = ::int64_t{0};
    _impl_._has_bits_[0] &= ~0x00000080u;
}
inline ::int64_t Meeting::cancel_date() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.Meeting.cancel_date)
    return _internal_cancel_date();
}
inline void Meeting::set_cancel_date(::int64_t value) {
    _internal_set_cancel_date(value);
    _impl_._has_bits_[0] |= 0x00000080u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.Meeting.cancel_date)
}
inline ::int64_t Meeting::_internal_cancel_date() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.cancel_date_;
}
inline void Meeting::_internal_set_cancel_date(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.cancel_date_ = value;
}

// repeated .turms.client.model.proto.Value custom_attributes = 15;
inline int Meeting::_internal_custom_attributes_size() const {
    return _internal_custom_attributes().size();
}
inline int Meeting::custom_attributes_size() const {
    return _internal_custom_attributes_size();
}
inline ::turms::client::model::proto::Value* Meeting::mutable_custom_attributes(int index)
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.Meeting.custom_attributes)
    return _internal_mutable_custom_attributes()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
Meeting::mutable_custom_attributes() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.Meeting.custom_attributes)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    return _internal_mutable_custom_attributes();
}
inline const ::turms::client::model::proto::Value& Meeting::custom_attributes(int index) const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.Meeting.custom_attributes)
    return _internal_custom_attributes().Get(index);
}
inline ::turms::client::model::proto::Value* Meeting::add_custom_attributes()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    ::turms::client::model::proto::Value* _add = _internal_mutable_custom_attributes()->Add();
    // @@protoc_insertion_point(field_add:turms.client.model.proto.Meeting.custom_attributes)
    return _add;
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
Meeting::custom_attributes() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_list:turms.client.model.proto.Meeting.custom_attributes)
    return _internal_custom_attributes();
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
Meeting::_internal_custom_attributes() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.custom_attributes_;
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
Meeting::_internal_mutable_custom_attributes() {
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

#endif  // model_2fconference_2fmeeting_2eproto_2epb_2eh