// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Common.proto

#include "Common.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

PROTOBUF_CONSTEXPR SKBuiltinString_t::SKBuiltinString_t(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.string_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}} {}
struct SKBuiltinString_tDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SKBuiltinString_tDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SKBuiltinString_tDefaultTypeInternal() {}
  union {
    SKBuiltinString_t _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SKBuiltinString_tDefaultTypeInternal _SKBuiltinString_t_default_instance_;
PROTOBUF_CONSTEXPR BaseResponse::BaseResponse(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.errmsg_)*/nullptr
  , /*decltype(_impl_.ret_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct BaseResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR BaseResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~BaseResponseDefaultTypeInternal() {}
  union {
    BaseResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 BaseResponseDefaultTypeInternal _BaseResponse_default_instance_;

// ===================================================================

class SKBuiltinString_t::_Internal {
 public:
  using HasBits = decltype(std::declval<SKBuiltinString_t>()._impl_._has_bits_);
  static void set_has_string(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

SKBuiltinString_t::SKBuiltinString_t(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:SKBuiltinString_t)
}
SKBuiltinString_t::SKBuiltinString_t(const SKBuiltinString_t& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite() {
  SKBuiltinString_t* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.string_){}};

  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  _impl_.string_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.string_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_string()) {
    _this->_impl_.string_.Set(from._internal_string(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:SKBuiltinString_t)
}

inline void SKBuiltinString_t::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.string_){}
  };
  _impl_.string_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.string_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

SKBuiltinString_t::~SKBuiltinString_t() {
  // @@protoc_insertion_point(destructor:SKBuiltinString_t)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SKBuiltinString_t::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.string_.Destroy();
}

void SKBuiltinString_t::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SKBuiltinString_t::Clear() {
// @@protoc_insertion_point(message_clear_start:SKBuiltinString_t)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    _impl_.string_.ClearNonDefaultToEmpty();
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* SKBuiltinString_t::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string string = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_string();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, nullptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<std::string>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* SKBuiltinString_t::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:SKBuiltinString_t)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // optional string string = 1;
  if (_internal_has_string()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_string().data(), static_cast<int>(this->_internal_string().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "SKBuiltinString_t.string");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_string(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:SKBuiltinString_t)
  return target;
}

size_t SKBuiltinString_t::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:SKBuiltinString_t)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional string string = 1;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_string());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SKBuiltinString_t::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const SKBuiltinString_t*>(
      &from));
}

void SKBuiltinString_t::MergeFrom(const SKBuiltinString_t& from) {
  SKBuiltinString_t* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:SKBuiltinString_t)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_string()) {
    _this->_internal_set_string(from._internal_string());
  }
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void SKBuiltinString_t::CopyFrom(const SKBuiltinString_t& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:SKBuiltinString_t)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SKBuiltinString_t::IsInitialized() const {
  return true;
}

void SKBuiltinString_t::InternalSwap(SKBuiltinString_t* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.string_, lhs_arena,
      &other->_impl_.string_, rhs_arena
  );
}

std::string SKBuiltinString_t::GetTypeName() const {
  return "SKBuiltinString_t";
}


// ===================================================================

class BaseResponse::_Internal {
 public:
  static const ::SKBuiltinString_t& errmsg(const BaseResponse* msg);
};

const ::SKBuiltinString_t&
BaseResponse::_Internal::errmsg(const BaseResponse* msg) {
  return *msg->_impl_.errmsg_;
}
BaseResponse::BaseResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:BaseResponse)
}
BaseResponse::BaseResponse(const BaseResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite() {
  BaseResponse* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.errmsg_){nullptr}
    , decltype(_impl_.ret_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  if (from._internal_has_errmsg()) {
    _this->_impl_.errmsg_ = new ::SKBuiltinString_t(*from._impl_.errmsg_);
  }
  _this->_impl_.ret_ = from._impl_.ret_;
  // @@protoc_insertion_point(copy_constructor:BaseResponse)
}

inline void BaseResponse::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.errmsg_){nullptr}
    , decltype(_impl_.ret_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

BaseResponse::~BaseResponse() {
  // @@protoc_insertion_point(destructor:BaseResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void BaseResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.errmsg_;
}

void BaseResponse::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void BaseResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:BaseResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaForAllocation() == nullptr && _impl_.errmsg_ != nullptr) {
    delete _impl_.errmsg_;
  }
  _impl_.errmsg_ = nullptr;
  _impl_.ret_ = 0;
  _internal_metadata_.Clear<std::string>();
}

const char* BaseResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 ret = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.ret_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .SKBuiltinString_t errMsg = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_errmsg(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<std::string>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* BaseResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:BaseResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 ret = 1;
  if (this->_internal_ret() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_ret(), target);
  }

  // .SKBuiltinString_t errMsg = 2;
  if (this->_internal_has_errmsg()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::errmsg(this),
        _Internal::errmsg(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:BaseResponse)
  return target;
}

size_t BaseResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:BaseResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .SKBuiltinString_t errMsg = 2;
  if (this->_internal_has_errmsg()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.errmsg_);
  }

  // int32 ret = 1;
  if (this->_internal_ret() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_ret());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void BaseResponse::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const BaseResponse*>(
      &from));
}

void BaseResponse::MergeFrom(const BaseResponse& from) {
  BaseResponse* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:BaseResponse)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_errmsg()) {
    _this->_internal_mutable_errmsg()->::SKBuiltinString_t::MergeFrom(
        from._internal_errmsg());
  }
  if (from._internal_ret() != 0) {
    _this->_internal_set_ret(from._internal_ret());
  }
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void BaseResponse::CopyFrom(const BaseResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:BaseResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BaseResponse::IsInitialized() const {
  return true;
}

void BaseResponse::InternalSwap(BaseResponse* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(BaseResponse, _impl_.ret_)
      + sizeof(BaseResponse::_impl_.ret_)
      - PROTOBUF_FIELD_OFFSET(BaseResponse, _impl_.errmsg_)>(
          reinterpret_cast<char*>(&_impl_.errmsg_),
          reinterpret_cast<char*>(&other->_impl_.errmsg_));
}

std::string BaseResponse::GetTypeName() const {
  return "BaseResponse";
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::SKBuiltinString_t*
Arena::CreateMaybeMessage< ::SKBuiltinString_t >(Arena* arena) {
  return Arena::CreateMessageInternal< ::SKBuiltinString_t >(arena);
}
template<> PROTOBUF_NOINLINE ::BaseResponse*
Arena::CreateMaybeMessage< ::BaseResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::BaseResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
