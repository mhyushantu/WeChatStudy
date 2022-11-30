// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Common.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Common_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Common_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021009 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Common_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Common_2eproto {
  static const uint32_t offsets[];
};
class BaseResponse;
struct BaseResponseDefaultTypeInternal;
extern BaseResponseDefaultTypeInternal _BaseResponse_default_instance_;
class SKBuiltinString_t;
struct SKBuiltinString_tDefaultTypeInternal;
extern SKBuiltinString_tDefaultTypeInternal _SKBuiltinString_t_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::BaseResponse* Arena::CreateMaybeMessage<::BaseResponse>(Arena*);
template<> ::SKBuiltinString_t* Arena::CreateMaybeMessage<::SKBuiltinString_t>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class SKBuiltinString_t final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:SKBuiltinString_t) */ {
 public:
  inline SKBuiltinString_t() : SKBuiltinString_t(nullptr) {}
  ~SKBuiltinString_t() override;
  explicit PROTOBUF_CONSTEXPR SKBuiltinString_t(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SKBuiltinString_t(const SKBuiltinString_t& from);
  SKBuiltinString_t(SKBuiltinString_t&& from) noexcept
    : SKBuiltinString_t() {
    *this = ::std::move(from);
  }

  inline SKBuiltinString_t& operator=(const SKBuiltinString_t& from) {
    CopyFrom(from);
    return *this;
  }
  inline SKBuiltinString_t& operator=(SKBuiltinString_t&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const SKBuiltinString_t& default_instance() {
    return *internal_default_instance();
  }
  static inline const SKBuiltinString_t* internal_default_instance() {
    return reinterpret_cast<const SKBuiltinString_t*>(
               &_SKBuiltinString_t_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SKBuiltinString_t& a, SKBuiltinString_t& b) {
    a.Swap(&b);
  }
  inline void Swap(SKBuiltinString_t* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SKBuiltinString_t* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SKBuiltinString_t* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SKBuiltinString_t>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const SKBuiltinString_t& from);
  void MergeFrom(const SKBuiltinString_t& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(SKBuiltinString_t* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "SKBuiltinString_t";
  }
  protected:
  explicit SKBuiltinString_t(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kStringFieldNumber = 1,
  };
  // optional string string = 1;
  bool has_string() const;
  private:
  bool _internal_has_string() const;
  public:
  void clear_string();
  const std::string& string() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_string(ArgT0&& arg0, ArgT... args);
  std::string* mutable_string();
  PROTOBUF_NODISCARD std::string* release_string();
  void set_allocated_string(std::string* string);
  private:
  const std::string& _internal_string() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_string(const std::string& value);
  std::string* _internal_mutable_string();
  public:

  // @@protoc_insertion_point(class_scope:SKBuiltinString_t)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr string_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_Common_2eproto;
};
// -------------------------------------------------------------------

class BaseResponse final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:BaseResponse) */ {
 public:
  inline BaseResponse() : BaseResponse(nullptr) {}
  ~BaseResponse() override;
  explicit PROTOBUF_CONSTEXPR BaseResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  BaseResponse(const BaseResponse& from);
  BaseResponse(BaseResponse&& from) noexcept
    : BaseResponse() {
    *this = ::std::move(from);
  }

  inline BaseResponse& operator=(const BaseResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline BaseResponse& operator=(BaseResponse&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const BaseResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const BaseResponse* internal_default_instance() {
    return reinterpret_cast<const BaseResponse*>(
               &_BaseResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(BaseResponse& a, BaseResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(BaseResponse* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(BaseResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  BaseResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<BaseResponse>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const BaseResponse& from);
  void MergeFrom(const BaseResponse& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(BaseResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "BaseResponse";
  }
  protected:
  explicit BaseResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kErrMsgFieldNumber = 2,
    kRetFieldNumber = 1,
  };
  // .SKBuiltinString_t errMsg = 2;
  bool has_errmsg() const;
  private:
  bool _internal_has_errmsg() const;
  public:
  void clear_errmsg();
  const ::SKBuiltinString_t& errmsg() const;
  PROTOBUF_NODISCARD ::SKBuiltinString_t* release_errmsg();
  ::SKBuiltinString_t* mutable_errmsg();
  void set_allocated_errmsg(::SKBuiltinString_t* errmsg);
  private:
  const ::SKBuiltinString_t& _internal_errmsg() const;
  ::SKBuiltinString_t* _internal_mutable_errmsg();
  public:
  void unsafe_arena_set_allocated_errmsg(
      ::SKBuiltinString_t* errmsg);
  ::SKBuiltinString_t* unsafe_arena_release_errmsg();

  // int32 ret = 1;
  void clear_ret();
  int32_t ret() const;
  void set_ret(int32_t value);
  private:
  int32_t _internal_ret() const;
  void _internal_set_ret(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:BaseResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::SKBuiltinString_t* errmsg_;
    int32_t ret_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_Common_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SKBuiltinString_t

// optional string string = 1;
inline bool SKBuiltinString_t::_internal_has_string() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool SKBuiltinString_t::has_string() const {
  return _internal_has_string();
}
inline void SKBuiltinString_t::clear_string() {
  _impl_.string_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& SKBuiltinString_t::string() const {
  // @@protoc_insertion_point(field_get:SKBuiltinString_t.string)
  return _internal_string();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void SKBuiltinString_t::set_string(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000001u;
 _impl_.string_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:SKBuiltinString_t.string)
}
inline std::string* SKBuiltinString_t::mutable_string() {
  std::string* _s = _internal_mutable_string();
  // @@protoc_insertion_point(field_mutable:SKBuiltinString_t.string)
  return _s;
}
inline const std::string& SKBuiltinString_t::_internal_string() const {
  return _impl_.string_.Get();
}
inline void SKBuiltinString_t::_internal_set_string(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.string_.Set(value, GetArenaForAllocation());
}
inline std::string* SKBuiltinString_t::_internal_mutable_string() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.string_.Mutable(GetArenaForAllocation());
}
inline std::string* SKBuiltinString_t::release_string() {
  // @@protoc_insertion_point(field_release:SKBuiltinString_t.string)
  if (!_internal_has_string()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* p = _impl_.string_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.string_.IsDefault()) {
    _impl_.string_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void SKBuiltinString_t::set_allocated_string(std::string* string) {
  if (string != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.string_.SetAllocated(string, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.string_.IsDefault()) {
    _impl_.string_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:SKBuiltinString_t.string)
}

// -------------------------------------------------------------------

// BaseResponse

// int32 ret = 1;
inline void BaseResponse::clear_ret() {
  _impl_.ret_ = 0;
}
inline int32_t BaseResponse::_internal_ret() const {
  return _impl_.ret_;
}
inline int32_t BaseResponse::ret() const {
  // @@protoc_insertion_point(field_get:BaseResponse.ret)
  return _internal_ret();
}
inline void BaseResponse::_internal_set_ret(int32_t value) {
  
  _impl_.ret_ = value;
}
inline void BaseResponse::set_ret(int32_t value) {
  _internal_set_ret(value);
  // @@protoc_insertion_point(field_set:BaseResponse.ret)
}

// .SKBuiltinString_t errMsg = 2;
inline bool BaseResponse::_internal_has_errmsg() const {
  return this != internal_default_instance() && _impl_.errmsg_ != nullptr;
}
inline bool BaseResponse::has_errmsg() const {
  return _internal_has_errmsg();
}
inline void BaseResponse::clear_errmsg() {
  if (GetArenaForAllocation() == nullptr && _impl_.errmsg_ != nullptr) {
    delete _impl_.errmsg_;
  }
  _impl_.errmsg_ = nullptr;
}
inline const ::SKBuiltinString_t& BaseResponse::_internal_errmsg() const {
  const ::SKBuiltinString_t* p = _impl_.errmsg_;
  return p != nullptr ? *p : reinterpret_cast<const ::SKBuiltinString_t&>(
      ::_SKBuiltinString_t_default_instance_);
}
inline const ::SKBuiltinString_t& BaseResponse::errmsg() const {
  // @@protoc_insertion_point(field_get:BaseResponse.errMsg)
  return _internal_errmsg();
}
inline void BaseResponse::unsafe_arena_set_allocated_errmsg(
    ::SKBuiltinString_t* errmsg) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.errmsg_);
  }
  _impl_.errmsg_ = errmsg;
  if (errmsg) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:BaseResponse.errMsg)
}
inline ::SKBuiltinString_t* BaseResponse::release_errmsg() {
  
  ::SKBuiltinString_t* temp = _impl_.errmsg_;
  _impl_.errmsg_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::SKBuiltinString_t* BaseResponse::unsafe_arena_release_errmsg() {
  // @@protoc_insertion_point(field_release:BaseResponse.errMsg)
  
  ::SKBuiltinString_t* temp = _impl_.errmsg_;
  _impl_.errmsg_ = nullptr;
  return temp;
}
inline ::SKBuiltinString_t* BaseResponse::_internal_mutable_errmsg() {
  
  if (_impl_.errmsg_ == nullptr) {
    auto* p = CreateMaybeMessage<::SKBuiltinString_t>(GetArenaForAllocation());
    _impl_.errmsg_ = p;
  }
  return _impl_.errmsg_;
}
inline ::SKBuiltinString_t* BaseResponse::mutable_errmsg() {
  ::SKBuiltinString_t* _msg = _internal_mutable_errmsg();
  // @@protoc_insertion_point(field_mutable:BaseResponse.errMsg)
  return _msg;
}
inline void BaseResponse::set_allocated_errmsg(::SKBuiltinString_t* errmsg) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete _impl_.errmsg_;
  }
  if (errmsg) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(errmsg);
    if (message_arena != submessage_arena) {
      errmsg = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, errmsg, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.errmsg_ = errmsg;
  // @@protoc_insertion_point(field_set_allocated:BaseResponse.errMsg)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Common_2eproto
