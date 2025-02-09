// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: request/message/query_messages_request.proto
// Protobuf C++ Version: 5.29.1

#include "turms/client/model/proto/request/message/query_messages_request.pb.h"

#include <algorithm>
#include <type_traits>

#include "google/protobuf/extension_set.h"
#include "google/protobuf/generated_message_tctable_impl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/io/zero_copy_stream_impl_lite.h"
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
namespace proto {

inline constexpr QueryMessagesRequest::Impl_::Impl_(::_pbi::ConstantInitialized) noexcept
    : _cached_size_{0},
      ids_{},
      _ids_cached_byte_size_{0},
      from_ids_{},
      _from_ids_cached_byte_size_{0},
      custom_attributes_{},
      delivery_date_start_{::int64_t{0}},
      are_group_messages_{false},
      are_system_messages_{false},
      with_total_{false},
      descending_{false},
      max_count_{0},
      delivery_date_end_{::int64_t{0}} {
}

template <typename>
PROTOBUF_CONSTEXPR QueryMessagesRequest::QueryMessagesRequest(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::MessageLite(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::MessageLite(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct QueryMessagesRequestDefaultTypeInternal {
    PROTOBUF_CONSTEXPR QueryMessagesRequestDefaultTypeInternal()
        : _instance(::_pbi::ConstantInitialized{}) {
    }
    ~QueryMessagesRequestDefaultTypeInternal() {
    }
    union {
        QueryMessagesRequest _instance;
    };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
    QueryMessagesRequestDefaultTypeInternal _QueryMessagesRequest_default_instance_;
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace turms {
namespace client {
namespace model {
namespace proto {
// ===================================================================

class QueryMessagesRequest::_Internal {
   public:
    using HasBits = decltype(std::declval<QueryMessagesRequest>()._impl_._has_bits_);
    static constexpr ::int32_t kHasBitsOffset =
        8 * PROTOBUF_FIELD_OFFSET(QueryMessagesRequest, _impl_._has_bits_);
};

void QueryMessagesRequest::clear_custom_attributes() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.custom_attributes_.Clear();
}
QueryMessagesRequest::QueryMessagesRequest(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::MessageLite(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::MessageLite(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
    SharedCtor(arena);
    // @@protoc_insertion_point(arena_constructor:turms.client.model.proto.QueryMessagesRequest)
}
inline PROTOBUF_NDEBUG_INLINE QueryMessagesRequest::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena,
    const Impl_& from,
    const ::turms::client::model::proto::QueryMessagesRequest& from_msg)
    : _has_bits_{from._has_bits_},
      _cached_size_{0},
      ids_{visibility, arena, from.ids_},
      _ids_cached_byte_size_{0},
      from_ids_{visibility, arena, from.from_ids_},
      _from_ids_cached_byte_size_{0},
      custom_attributes_{visibility, arena, from.custom_attributes_} {
}

QueryMessagesRequest::QueryMessagesRequest(::google::protobuf::Arena* arena,
                                           const QueryMessagesRequest& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::MessageLite(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::MessageLite(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
    QueryMessagesRequest* const _this = this;
    (void)_this;
    _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
    new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
    ::memcpy(reinterpret_cast<char*>(&_impl_) + offsetof(Impl_, delivery_date_start_),
             reinterpret_cast<const char*>(&from._impl_) + offsetof(Impl_, delivery_date_start_),
             offsetof(Impl_, delivery_date_end_) - offsetof(Impl_, delivery_date_start_) +
                 sizeof(Impl_::delivery_date_end_));

    // @@protoc_insertion_point(copy_constructor:turms.client.model.proto.QueryMessagesRequest)
}
inline PROTOBUF_NDEBUG_INLINE QueryMessagesRequest::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena)
    : _cached_size_{0},
      ids_{visibility, arena},
      _ids_cached_byte_size_{0},
      from_ids_{visibility, arena},
      _from_ids_cached_byte_size_{0},
      custom_attributes_{visibility, arena} {
}

inline void QueryMessagesRequest::SharedCtor(::_pb::Arena* arena) {
    new (&_impl_) Impl_(internal_visibility(), arena);
    ::memset(reinterpret_cast<char*>(&_impl_) + offsetof(Impl_, delivery_date_start_),
             0,
             offsetof(Impl_, delivery_date_end_) - offsetof(Impl_, delivery_date_start_) +
                 sizeof(Impl_::delivery_date_end_));
}
QueryMessagesRequest::~QueryMessagesRequest() {
    // @@protoc_insertion_point(destructor:turms.client.model.proto.QueryMessagesRequest)
    SharedDtor(*this);
}
inline void QueryMessagesRequest::SharedDtor(MessageLite& self) {
    QueryMessagesRequest& this_ = static_cast<QueryMessagesRequest&>(self);
    this_._internal_metadata_.Delete<std::string>();
    ABSL_DCHECK(this_.GetArena() == nullptr);
    this_._impl_.~Impl_();
}

inline void* QueryMessagesRequest::PlacementNew_(const void*,
                                                 void* mem,
                                                 ::google::protobuf::Arena* arena) {
    return ::new (mem) QueryMessagesRequest(arena);
}
constexpr auto QueryMessagesRequest::InternalNewImpl_() {
    constexpr auto arena_bits = ::google::protobuf::internal::EncodePlacementArenaOffsets({
        PROTOBUF_FIELD_OFFSET(QueryMessagesRequest, _impl_.ids_) +
            decltype(QueryMessagesRequest::_impl_.ids_)::InternalGetArenaOffset(
                ::google::protobuf::MessageLite::internal_visibility()),
        PROTOBUF_FIELD_OFFSET(QueryMessagesRequest, _impl_.from_ids_) +
            decltype(QueryMessagesRequest::_impl_.from_ids_)::InternalGetArenaOffset(
                ::google::protobuf::MessageLite::internal_visibility()),
        PROTOBUF_FIELD_OFFSET(QueryMessagesRequest, _impl_.custom_attributes_) +
            decltype(QueryMessagesRequest::_impl_.custom_attributes_)::InternalGetArenaOffset(
                ::google::protobuf::MessageLite::internal_visibility()),
    });
    if (arena_bits.has_value()) {
        return ::google::protobuf::internal::MessageCreator::ZeroInit(
            sizeof(QueryMessagesRequest), alignof(QueryMessagesRequest), *arena_bits);
    } else {
        return ::google::protobuf::internal::MessageCreator(&QueryMessagesRequest::PlacementNew_,
                                                            sizeof(QueryMessagesRequest),
                                                            alignof(QueryMessagesRequest));
    }
}
PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::internal::ClassDataLite<46> QueryMessagesRequest::_class_data_ = {
    {
        &_QueryMessagesRequest_default_instance_._instance,
        &_table_.header,
        nullptr,  // OnDemandRegisterArenaDtor
        nullptr,  // IsInitialized
        &QueryMessagesRequest::MergeImpl,
        ::google::protobuf::MessageLite::GetNewImpl<QueryMessagesRequest>(),
#if defined(PROTOBUF_CUSTOM_VTABLE)
        &QueryMessagesRequest::SharedDtor,
        ::google::protobuf::MessageLite::GetClearImpl<QueryMessagesRequest>(),
        &QueryMessagesRequest::ByteSizeLong,
        &QueryMessagesRequest::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
        PROTOBUF_FIELD_OFFSET(QueryMessagesRequest, _impl_._cached_size_),
        true,
    },
    "turms.client.model.proto.QueryMessagesRequest",
};
const ::google::protobuf::internal::ClassData* QueryMessagesRequest::GetClassData() const {
    return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 const ::_pbi::TcParseTable<4, 10, 1, 0, 2>
    QueryMessagesRequest::_table_ = {
        {
            PROTOBUF_FIELD_OFFSET(QueryMessagesRequest, _impl_._has_bits_),
            0,  // no _extensions_
            15,
            120,  // max_field_number, fast_idx_mask
            offsetof(decltype(_table_), field_lookup_table),
            4294950400,  // skipmap
            offsetof(decltype(_table_), field_entries),
            10,  // num_field_entries
            1,   // num_aux_entries
            offsetof(decltype(_table_), aux_entries),
            _class_data_.base(),
            nullptr,                                // post_loop_handler
            ::_pbi::TcParser::GenericFallbackLite,  // fallback
#ifdef PROTOBUF_PREFETCH_PARSE_TABLE
            ::_pbi::TcParser::GetTable<
                ::turms::client::model::proto::QueryMessagesRequest>(),  // to_prefetch
#endif  // PROTOBUF_PREFETCH_PARSE_TABLE
        },
        {{
            {::_pbi::TcParser::MiniParse, {}},
            // repeated int64 ids = 1;
            {::_pbi::TcParser::FastV64P1,
             {10, 63, 0, PROTOBUF_FIELD_OFFSET(QueryMessagesRequest, _impl_.ids_)}},
            // optional bool are_group_messages = 2;
            {::_pbi::TcParser::FastV8S1,
             {16, 1, 0, PROTOBUF_FIELD_OFFSET(QueryMessagesRequest, _impl_.are_group_messages_)}},
            // optional bool are_system_messages = 3;
            {::_pbi::TcParser::FastV8S1,
             {24, 2, 0, PROTOBUF_FIELD_OFFSET(QueryMessagesRequest, _impl_.are_system_messages_)}},
            // repeated int64 from_ids = 4;
            {::_pbi::TcParser::FastV64P1,
             {34, 63, 0, PROTOBUF_FIELD_OFFSET(QueryMessagesRequest, _impl_.from_ids_)}},
            // optional int64 delivery_date_start = 5;
            {::_pbi::TcParser::FastV64S1,
             {40, 0, 0, PROTOBUF_FIELD_OFFSET(QueryMessagesRequest, _impl_.delivery_date_start_)}},
            // optional int64 delivery_date_end = 6;
            {::_pbi::TcParser::FastV64S1,
             {48, 5, 0, PROTOBUF_FIELD_OFFSET(QueryMessagesRequest, _impl_.delivery_date_end_)}},
            // optional int32 max_count = 7;
            {::_pbi::TcParser::FastV32S1,
             {56, 4, 0, PROTOBUF_FIELD_OFFSET(QueryMessagesRequest, _impl_.max_count_)}},
            // bool with_total = 8;
            {::_pbi::TcParser::FastV8S1,
             {64, 63, 0, PROTOBUF_FIELD_OFFSET(QueryMessagesRequest, _impl_.with_total_)}},
            // optional bool descending = 9;
            {::_pbi::TcParser::FastV8S1,
             {72, 3, 0, PROTOBUF_FIELD_OFFSET(QueryMessagesRequest, _impl_.descending_)}},
            {::_pbi::TcParser::MiniParse, {}},
            {::_pbi::TcParser::MiniParse, {}},
            {::_pbi::TcParser::MiniParse, {}},
            {::_pbi::TcParser::MiniParse, {}},
            {::_pbi::TcParser::MiniParse, {}},
            // repeated .turms.client.model.proto.Value custom_attributes = 15;
            {::_pbi::TcParser::FastMtR1,
             {122, 63, 0, PROTOBUF_FIELD_OFFSET(QueryMessagesRequest, _impl_.custom_attributes_)}},
        }},
        {{65535, 65535}},
        {{
            // repeated int64 ids = 1;
            {PROTOBUF_FIELD_OFFSET(QueryMessagesRequest, _impl_.ids_),
             -1,
             0,
             (0 | ::_fl::kFcRepeated | ::_fl::kPackedInt64)},
            // optional bool are_group_messages = 2;
            {PROTOBUF_FIELD_OFFSET(QueryMessagesRequest, _impl_.are_group_messages_),
             _Internal::kHasBitsOffset + 1,
             0,
             (0 | ::_fl::kFcOptional | ::_fl::kBool)},
            // optional bool are_system_messages = 3;
            {PROTOBUF_FIELD_OFFSET(QueryMessagesRequest, _impl_.are_system_messages_),
             _Internal::kHasBitsOffset + 2,
             0,
             (0 | ::_fl::kFcOptional | ::_fl::kBool)},
            // repeated int64 from_ids = 4;
            {PROTOBUF_FIELD_OFFSET(QueryMessagesRequest, _impl_.from_ids_),
             -1,
             0,
             (0 | ::_fl::kFcRepeated | ::_fl::kPackedInt64)},
            // optional int64 delivery_date_start = 5;
            {PROTOBUF_FIELD_OFFSET(QueryMessagesRequest, _impl_.delivery_date_start_),
             _Internal::kHasBitsOffset + 0,
             0,
             (0 | ::_fl::kFcOptional | ::_fl::kInt64)},
            // optional int64 delivery_date_end = 6;
            {PROTOBUF_FIELD_OFFSET(QueryMessagesRequest, _impl_.delivery_date_end_),
             _Internal::kHasBitsOffset + 5,
             0,
             (0 | ::_fl::kFcOptional | ::_fl::kInt64)},
            // optional int32 max_count = 7;
            {PROTOBUF_FIELD_OFFSET(QueryMessagesRequest, _impl_.max_count_),
             _Internal::kHasBitsOffset + 4,
             0,
             (0 | ::_fl::kFcOptional | ::_fl::kInt32)},
            // bool with_total = 8;
            {PROTOBUF_FIELD_OFFSET(QueryMessagesRequest, _impl_.with_total_),
             -1,
             0,
             (0 | ::_fl::kFcSingular | ::_fl::kBool)},
            // optional bool descending = 9;
            {PROTOBUF_FIELD_OFFSET(QueryMessagesRequest, _impl_.descending_),
             _Internal::kHasBitsOffset + 3,
             0,
             (0 | ::_fl::kFcOptional | ::_fl::kBool)},
            // repeated .turms.client.model.proto.Value custom_attributes = 15;
            {PROTOBUF_FIELD_OFFSET(QueryMessagesRequest, _impl_.custom_attributes_),
             -1,
             0,
             (0 | ::_fl::kFcRepeated | ::_fl::kMessage | ::_fl::kTvTable)},
        }},
        {{
            {::_pbi::TcParser::GetTable<::turms::client::model::proto::Value>()},
        }},
        {{}},
    };

PROTOBUF_NOINLINE void QueryMessagesRequest::Clear() {
    // @@protoc_insertion_point(message_clear_start:turms.client.model.proto.QueryMessagesRequest)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    ::uint32_t cached_has_bits = 0;
    // Prevent compiler warnings about cached_has_bits being unused
    (void)cached_has_bits;

    _impl_.ids_.Clear();
    _impl_.from_ids_.Clear();
    _impl_.custom_attributes_.Clear();
    cached_has_bits = _impl_._has_bits_[0];
    if (cached_has_bits & 0x00000007u) {
        ::memset(&_impl_.delivery_date_start_,
                 0,
                 static_cast<::size_t>(reinterpret_cast<char*>(&_impl_.are_system_messages_) -
                                       reinterpret_cast<char*>(&_impl_.delivery_date_start_)) +
                     sizeof(_impl_.are_system_messages_));
    }
    _impl_.with_total_ = false;
    if (cached_has_bits & 0x00000038u) {
        ::memset(&_impl_.descending_,
                 0,
                 static_cast<::size_t>(reinterpret_cast<char*>(&_impl_.delivery_date_end_) -
                                       reinterpret_cast<char*>(&_impl_.descending_)) +
                     sizeof(_impl_.delivery_date_end_));
    }
    _impl_._has_bits_.Clear();
    _internal_metadata_.Clear<std::string>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
::uint8_t* QueryMessagesRequest::_InternalSerialize(
    const MessageLite& base,
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) {
    const QueryMessagesRequest& this_ = static_cast<const QueryMessagesRequest&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
::uint8_t* QueryMessagesRequest::_InternalSerialize(
    ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const {
    const QueryMessagesRequest& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
        // @@protoc_insertion_point(serialize_to_array_start:turms.client.model.proto.QueryMessagesRequest)
    ::uint32_t cached_has_bits = 0;
    (void)cached_has_bits;

    // repeated int64 ids = 1;
    {
        int byte_size = this_._impl_._ids_cached_byte_size_.Get();
        if (byte_size > 0) {
            target = stream->WriteInt64Packed(1, this_._internal_ids(), byte_size, target);
        }
    }

    cached_has_bits = this_._impl_._has_bits_[0];
    // optional bool are_group_messages = 2;
    if (cached_has_bits & 0x00000002u) {
        target = stream->EnsureSpace(target);
        target = ::_pbi::WireFormatLite::WriteBoolToArray(
            2, this_._internal_are_group_messages(), target);
    }

    // optional bool are_system_messages = 3;
    if (cached_has_bits & 0x00000004u) {
        target = stream->EnsureSpace(target);
        target = ::_pbi::WireFormatLite::WriteBoolToArray(
            3, this_._internal_are_system_messages(), target);
    }

    // repeated int64 from_ids = 4;
    {
        int byte_size = this_._impl_._from_ids_cached_byte_size_.Get();
        if (byte_size > 0) {
            target = stream->WriteInt64Packed(4, this_._internal_from_ids(), byte_size, target);
        }
    }

    // optional int64 delivery_date_start = 5;
    if (cached_has_bits & 0x00000001u) {
        target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<5>(
            stream, this_._internal_delivery_date_start(), target);
    }

    // optional int64 delivery_date_end = 6;
    if (cached_has_bits & 0x00000020u) {
        target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<6>(
            stream, this_._internal_delivery_date_end(), target);
    }

    // optional int32 max_count = 7;
    if (cached_has_bits & 0x00000010u) {
        target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<7>(
            stream, this_._internal_max_count(), target);
    }

    // bool with_total = 8;
    if (this_._internal_with_total() != 0) {
        target = stream->EnsureSpace(target);
        target = ::_pbi::WireFormatLite::WriteBoolToArray(8, this_._internal_with_total(), target);
    }

    // optional bool descending = 9;
    if (cached_has_bits & 0x00000008u) {
        target = stream->EnsureSpace(target);
        target = ::_pbi::WireFormatLite::WriteBoolToArray(9, this_._internal_descending(), target);
    }

    // repeated .turms.client.model.proto.Value custom_attributes = 15;
    for (unsigned i = 0, n = static_cast<unsigned>(this_._internal_custom_attributes_size()); i < n;
         i++) {
        const auto& repfield = this_._internal_custom_attributes().Get(i);
        target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
            15, repfield, repfield.GetCachedSize(), target, stream);
    }

    if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
        target = stream->WriteRaw(
            this_._internal_metadata_
                .unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString)
                .data(),
            static_cast<int>(
                this_._internal_metadata_
                    .unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString)
                    .size()),
            target);
    }
    // @@protoc_insertion_point(serialize_to_array_end:turms.client.model.proto.QueryMessagesRequest)
    return target;
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
::size_t QueryMessagesRequest::ByteSizeLong(const MessageLite& base) {
    const QueryMessagesRequest& this_ = static_cast<const QueryMessagesRequest&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
::size_t QueryMessagesRequest::ByteSizeLong() const {
    const QueryMessagesRequest& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
        // @@protoc_insertion_point(message_byte_size_start:turms.client.model.proto.QueryMessagesRequest)
    ::size_t total_size = 0;

    ::uint32_t cached_has_bits = 0;
    // Prevent compiler warnings about cached_has_bits being unused
    (void)cached_has_bits;

    ::_pbi::Prefetch5LinesFrom7Lines(&this_);
    {
        // repeated int64 ids = 1;
        {
            total_size += ::_pbi::WireFormatLite::Int64SizeWithPackedTagSize(
                this_._internal_ids(), 1, this_._impl_._ids_cached_byte_size_);
        }
        // repeated int64 from_ids = 4;
        {
            total_size += ::_pbi::WireFormatLite::Int64SizeWithPackedTagSize(
                this_._internal_from_ids(), 1, this_._impl_._from_ids_cached_byte_size_);
        }
        // repeated .turms.client.model.proto.Value custom_attributes = 15;
        {
            total_size += 1UL * this_._internal_custom_attributes_size();
            for (const auto& msg : this_._internal_custom_attributes()) {
                total_size += ::google::protobuf::internal::WireFormatLite::MessageSize(msg);
            }
        }
    }
    cached_has_bits = this_._impl_._has_bits_[0];
    if (cached_has_bits & 0x00000007u) {
        // optional int64 delivery_date_start = 5;
        if (cached_has_bits & 0x00000001u) {
            total_size +=
                ::_pbi::WireFormatLite::Int64SizePlusOne(this_._internal_delivery_date_start());
        }
        // optional bool are_group_messages = 2;
        if (cached_has_bits & 0x00000002u) {
            total_size += 2;
        }
        // optional bool are_system_messages = 3;
        if (cached_has_bits & 0x00000004u) {
            total_size += 2;
        }
    }
    {
        // bool with_total = 8;
        if (this_._internal_with_total() != 0) {
            total_size += 2;
        }
    }
    if (cached_has_bits & 0x00000038u) {
        // optional bool descending = 9;
        if (cached_has_bits & 0x00000008u) {
            total_size += 2;
        }
        // optional int32 max_count = 7;
        if (cached_has_bits & 0x00000010u) {
            total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this_._internal_max_count());
        }
        // optional int64 delivery_date_end = 6;
        if (cached_has_bits & 0x00000020u) {
            total_size +=
                ::_pbi::WireFormatLite::Int64SizePlusOne(this_._internal_delivery_date_end());
        }
    }
    if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
        total_size += this_._internal_metadata_
                          .unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString)
                          .size();
    }
    this_._impl_._cached_size_.Set(::_pbi::ToCachedSize(total_size));
    return total_size;
}

void QueryMessagesRequest::MergeImpl(::google::protobuf::MessageLite& to_msg,
                                     const ::google::protobuf::MessageLite& from_msg) {
    auto* const _this = static_cast<QueryMessagesRequest*>(&to_msg);
    auto& from = static_cast<const QueryMessagesRequest&>(from_msg);
    // @@protoc_insertion_point(class_specific_merge_from_start:turms.client.model.proto.QueryMessagesRequest)
    ABSL_DCHECK_NE(&from, _this);
    ::uint32_t cached_has_bits = 0;
    (void)cached_has_bits;

    _this->_internal_mutable_ids()->MergeFrom(from._internal_ids());
    _this->_internal_mutable_from_ids()->MergeFrom(from._internal_from_ids());
    _this->_internal_mutable_custom_attributes()->MergeFrom(from._internal_custom_attributes());
    cached_has_bits = from._impl_._has_bits_[0];
    if (cached_has_bits & 0x00000007u) {
        if (cached_has_bits & 0x00000001u) {
            _this->_impl_.delivery_date_start_ = from._impl_.delivery_date_start_;
        }
        if (cached_has_bits & 0x00000002u) {
            _this->_impl_.are_group_messages_ = from._impl_.are_group_messages_;
        }
        if (cached_has_bits & 0x00000004u) {
            _this->_impl_.are_system_messages_ = from._impl_.are_system_messages_;
        }
    }
    if (from._internal_with_total() != 0) {
        _this->_impl_.with_total_ = from._impl_.with_total_;
    }
    if (cached_has_bits & 0x00000038u) {
        if (cached_has_bits & 0x00000008u) {
            _this->_impl_.descending_ = from._impl_.descending_;
        }
        if (cached_has_bits & 0x00000010u) {
            _this->_impl_.max_count_ = from._impl_.max_count_;
        }
        if (cached_has_bits & 0x00000020u) {
            _this->_impl_.delivery_date_end_ = from._impl_.delivery_date_end_;
        }
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
    _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void QueryMessagesRequest::CopyFrom(const QueryMessagesRequest& from) {
    // @@protoc_insertion_point(class_specific_copy_from_start:turms.client.model.proto.QueryMessagesRequest)
    if (&from == this)
        return;
    Clear();
    MergeFrom(from);
}

void QueryMessagesRequest::InternalSwap(QueryMessagesRequest* PROTOBUF_RESTRICT other) {
    using std::swap;
    _internal_metadata_.InternalSwap(&other->_internal_metadata_);
    swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
    _impl_.ids_.InternalSwap(&other->_impl_.ids_);
    _impl_.from_ids_.InternalSwap(&other->_impl_.from_ids_);
    _impl_.custom_attributes_.InternalSwap(&other->_impl_.custom_attributes_);
    ::google::protobuf::internal::memswap<
        PROTOBUF_FIELD_OFFSET(QueryMessagesRequest, _impl_.delivery_date_end_) +
        sizeof(QueryMessagesRequest::_impl_.delivery_date_end_) -
        PROTOBUF_FIELD_OFFSET(QueryMessagesRequest, _impl_.delivery_date_start_)>(
        reinterpret_cast<char*>(&_impl_.delivery_date_start_),
        reinterpret_cast<char*>(&other->_impl_.delivery_date_start_));
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