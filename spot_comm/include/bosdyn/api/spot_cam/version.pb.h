// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: bosdyn/api/spot_cam/version.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_bosdyn_2fapi_2fspot_5fcam_2fversion_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_bosdyn_2fapi_2fspot_5fcam_2fversion_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3013000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3013000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "bosdyn/api/header.pb.h"
#include "bosdyn/api/robot_id.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_bosdyn_2fapi_2fspot_5fcam_2fversion_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_bosdyn_2fapi_2fspot_5fcam_2fversion_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_bosdyn_2fapi_2fspot_5fcam_2fversion_2eproto;
namespace bosdyn {
namespace api {
namespace spot_cam {
class GetSoftwareVersionRequest;
class GetSoftwareVersionRequestDefaultTypeInternal;
extern GetSoftwareVersionRequestDefaultTypeInternal _GetSoftwareVersionRequest_default_instance_;
class GetSoftwareVersionResponse;
class GetSoftwareVersionResponseDefaultTypeInternal;
extern GetSoftwareVersionResponseDefaultTypeInternal _GetSoftwareVersionResponse_default_instance_;
}  // namespace spot_cam
}  // namespace api
}  // namespace bosdyn
PROTOBUF_NAMESPACE_OPEN
template<> ::bosdyn::api::spot_cam::GetSoftwareVersionRequest* Arena::CreateMaybeMessage<::bosdyn::api::spot_cam::GetSoftwareVersionRequest>(Arena*);
template<> ::bosdyn::api::spot_cam::GetSoftwareVersionResponse* Arena::CreateMaybeMessage<::bosdyn::api::spot_cam::GetSoftwareVersionResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace bosdyn {
namespace api {
namespace spot_cam {

// ===================================================================

class GetSoftwareVersionRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:bosdyn.api.spot_cam.GetSoftwareVersionRequest) */ {
 public:
  inline GetSoftwareVersionRequest() : GetSoftwareVersionRequest(nullptr) {}
  virtual ~GetSoftwareVersionRequest();

  GetSoftwareVersionRequest(const GetSoftwareVersionRequest& from);
  GetSoftwareVersionRequest(GetSoftwareVersionRequest&& from) noexcept
    : GetSoftwareVersionRequest() {
    *this = ::std::move(from);
  }

  inline GetSoftwareVersionRequest& operator=(const GetSoftwareVersionRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline GetSoftwareVersionRequest& operator=(GetSoftwareVersionRequest&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const GetSoftwareVersionRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GetSoftwareVersionRequest* internal_default_instance() {
    return reinterpret_cast<const GetSoftwareVersionRequest*>(
               &_GetSoftwareVersionRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GetSoftwareVersionRequest& a, GetSoftwareVersionRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(GetSoftwareVersionRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(GetSoftwareVersionRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline GetSoftwareVersionRequest* New() const final {
    return CreateMaybeMessage<GetSoftwareVersionRequest>(nullptr);
  }

  GetSoftwareVersionRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<GetSoftwareVersionRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const GetSoftwareVersionRequest& from);
  void MergeFrom(const GetSoftwareVersionRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GetSoftwareVersionRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "bosdyn.api.spot_cam.GetSoftwareVersionRequest";
  }
  protected:
  explicit GetSoftwareVersionRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_bosdyn_2fapi_2fspot_5fcam_2fversion_2eproto);
    return ::descriptor_table_bosdyn_2fapi_2fspot_5fcam_2fversion_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kHeaderFieldNumber = 1,
  };
  // .bosdyn.api.RequestHeader header = 1;
  bool has_header() const;
  private:
  bool _internal_has_header() const;
  public:
  void clear_header();
  const ::bosdyn::api::RequestHeader& header() const;
  ::bosdyn::api::RequestHeader* release_header();
  ::bosdyn::api::RequestHeader* mutable_header();
  void set_allocated_header(::bosdyn::api::RequestHeader* header);
  private:
  const ::bosdyn::api::RequestHeader& _internal_header() const;
  ::bosdyn::api::RequestHeader* _internal_mutable_header();
  public:
  void unsafe_arena_set_allocated_header(
      ::bosdyn::api::RequestHeader* header);
  ::bosdyn::api::RequestHeader* unsafe_arena_release_header();

  // @@protoc_insertion_point(class_scope:bosdyn.api.spot_cam.GetSoftwareVersionRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::bosdyn::api::RequestHeader* header_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_bosdyn_2fapi_2fspot_5fcam_2fversion_2eproto;
};
// -------------------------------------------------------------------

class GetSoftwareVersionResponse PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:bosdyn.api.spot_cam.GetSoftwareVersionResponse) */ {
 public:
  inline GetSoftwareVersionResponse() : GetSoftwareVersionResponse(nullptr) {}
  virtual ~GetSoftwareVersionResponse();

  GetSoftwareVersionResponse(const GetSoftwareVersionResponse& from);
  GetSoftwareVersionResponse(GetSoftwareVersionResponse&& from) noexcept
    : GetSoftwareVersionResponse() {
    *this = ::std::move(from);
  }

  inline GetSoftwareVersionResponse& operator=(const GetSoftwareVersionResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline GetSoftwareVersionResponse& operator=(GetSoftwareVersionResponse&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const GetSoftwareVersionResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GetSoftwareVersionResponse* internal_default_instance() {
    return reinterpret_cast<const GetSoftwareVersionResponse*>(
               &_GetSoftwareVersionResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(GetSoftwareVersionResponse& a, GetSoftwareVersionResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(GetSoftwareVersionResponse* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(GetSoftwareVersionResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline GetSoftwareVersionResponse* New() const final {
    return CreateMaybeMessage<GetSoftwareVersionResponse>(nullptr);
  }

  GetSoftwareVersionResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<GetSoftwareVersionResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const GetSoftwareVersionResponse& from);
  void MergeFrom(const GetSoftwareVersionResponse& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GetSoftwareVersionResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "bosdyn.api.spot_cam.GetSoftwareVersionResponse";
  }
  protected:
  explicit GetSoftwareVersionResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_bosdyn_2fapi_2fspot_5fcam_2fversion_2eproto);
    return ::descriptor_table_bosdyn_2fapi_2fspot_5fcam_2fversion_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kHeaderFieldNumber = 1,
    kVersionFieldNumber = 2,
  };
  // .bosdyn.api.ResponseHeader header = 1;
  bool has_header() const;
  private:
  bool _internal_has_header() const;
  public:
  void clear_header();
  const ::bosdyn::api::ResponseHeader& header() const;
  ::bosdyn::api::ResponseHeader* release_header();
  ::bosdyn::api::ResponseHeader* mutable_header();
  void set_allocated_header(::bosdyn::api::ResponseHeader* header);
  private:
  const ::bosdyn::api::ResponseHeader& _internal_header() const;
  ::bosdyn::api::ResponseHeader* _internal_mutable_header();
  public:
  void unsafe_arena_set_allocated_header(
      ::bosdyn::api::ResponseHeader* header);
  ::bosdyn::api::ResponseHeader* unsafe_arena_release_header();

  // .bosdyn.api.SoftwareVersion version = 2;
  bool has_version() const;
  private:
  bool _internal_has_version() const;
  public:
  void clear_version();
  const ::bosdyn::api::SoftwareVersion& version() const;
  ::bosdyn::api::SoftwareVersion* release_version();
  ::bosdyn::api::SoftwareVersion* mutable_version();
  void set_allocated_version(::bosdyn::api::SoftwareVersion* version);
  private:
  const ::bosdyn::api::SoftwareVersion& _internal_version() const;
  ::bosdyn::api::SoftwareVersion* _internal_mutable_version();
  public:
  void unsafe_arena_set_allocated_version(
      ::bosdyn::api::SoftwareVersion* version);
  ::bosdyn::api::SoftwareVersion* unsafe_arena_release_version();

  // @@protoc_insertion_point(class_scope:bosdyn.api.spot_cam.GetSoftwareVersionResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::bosdyn::api::ResponseHeader* header_;
  ::bosdyn::api::SoftwareVersion* version_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_bosdyn_2fapi_2fspot_5fcam_2fversion_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GetSoftwareVersionRequest

// .bosdyn.api.RequestHeader header = 1;
inline bool GetSoftwareVersionRequest::_internal_has_header() const {
  return this != internal_default_instance() && header_ != nullptr;
}
inline bool GetSoftwareVersionRequest::has_header() const {
  return _internal_has_header();
}
inline const ::bosdyn::api::RequestHeader& GetSoftwareVersionRequest::_internal_header() const {
  const ::bosdyn::api::RequestHeader* p = header_;
  return p != nullptr ? *p : *reinterpret_cast<const ::bosdyn::api::RequestHeader*>(
      &::bosdyn::api::_RequestHeader_default_instance_);
}
inline const ::bosdyn::api::RequestHeader& GetSoftwareVersionRequest::header() const {
  // @@protoc_insertion_point(field_get:bosdyn.api.spot_cam.GetSoftwareVersionRequest.header)
  return _internal_header();
}
inline void GetSoftwareVersionRequest::unsafe_arena_set_allocated_header(
    ::bosdyn::api::RequestHeader* header) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(header_);
  }
  header_ = header;
  if (header) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:bosdyn.api.spot_cam.GetSoftwareVersionRequest.header)
}
inline ::bosdyn::api::RequestHeader* GetSoftwareVersionRequest::release_header() {
  
  ::bosdyn::api::RequestHeader* temp = header_;
  header_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::bosdyn::api::RequestHeader* GetSoftwareVersionRequest::unsafe_arena_release_header() {
  // @@protoc_insertion_point(field_release:bosdyn.api.spot_cam.GetSoftwareVersionRequest.header)
  
  ::bosdyn::api::RequestHeader* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::bosdyn::api::RequestHeader* GetSoftwareVersionRequest::_internal_mutable_header() {
  
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::bosdyn::api::RequestHeader>(GetArena());
    header_ = p;
  }
  return header_;
}
inline ::bosdyn::api::RequestHeader* GetSoftwareVersionRequest::mutable_header() {
  // @@protoc_insertion_point(field_mutable:bosdyn.api.spot_cam.GetSoftwareVersionRequest.header)
  return _internal_mutable_header();
}
inline void GetSoftwareVersionRequest::set_allocated_header(::bosdyn::api::RequestHeader* header) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(header_);
  }
  if (header) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(header)->GetArena();
    if (message_arena != submessage_arena) {
      header = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, header, submessage_arena);
    }
    
  } else {
    
  }
  header_ = header;
  // @@protoc_insertion_point(field_set_allocated:bosdyn.api.spot_cam.GetSoftwareVersionRequest.header)
}

// -------------------------------------------------------------------

// GetSoftwareVersionResponse

// .bosdyn.api.ResponseHeader header = 1;
inline bool GetSoftwareVersionResponse::_internal_has_header() const {
  return this != internal_default_instance() && header_ != nullptr;
}
inline bool GetSoftwareVersionResponse::has_header() const {
  return _internal_has_header();
}
inline const ::bosdyn::api::ResponseHeader& GetSoftwareVersionResponse::_internal_header() const {
  const ::bosdyn::api::ResponseHeader* p = header_;
  return p != nullptr ? *p : *reinterpret_cast<const ::bosdyn::api::ResponseHeader*>(
      &::bosdyn::api::_ResponseHeader_default_instance_);
}
inline const ::bosdyn::api::ResponseHeader& GetSoftwareVersionResponse::header() const {
  // @@protoc_insertion_point(field_get:bosdyn.api.spot_cam.GetSoftwareVersionResponse.header)
  return _internal_header();
}
inline void GetSoftwareVersionResponse::unsafe_arena_set_allocated_header(
    ::bosdyn::api::ResponseHeader* header) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(header_);
  }
  header_ = header;
  if (header) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:bosdyn.api.spot_cam.GetSoftwareVersionResponse.header)
}
inline ::bosdyn::api::ResponseHeader* GetSoftwareVersionResponse::release_header() {
  
  ::bosdyn::api::ResponseHeader* temp = header_;
  header_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::bosdyn::api::ResponseHeader* GetSoftwareVersionResponse::unsafe_arena_release_header() {
  // @@protoc_insertion_point(field_release:bosdyn.api.spot_cam.GetSoftwareVersionResponse.header)
  
  ::bosdyn::api::ResponseHeader* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::bosdyn::api::ResponseHeader* GetSoftwareVersionResponse::_internal_mutable_header() {
  
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::bosdyn::api::ResponseHeader>(GetArena());
    header_ = p;
  }
  return header_;
}
inline ::bosdyn::api::ResponseHeader* GetSoftwareVersionResponse::mutable_header() {
  // @@protoc_insertion_point(field_mutable:bosdyn.api.spot_cam.GetSoftwareVersionResponse.header)
  return _internal_mutable_header();
}
inline void GetSoftwareVersionResponse::set_allocated_header(::bosdyn::api::ResponseHeader* header) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(header_);
  }
  if (header) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(header)->GetArena();
    if (message_arena != submessage_arena) {
      header = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, header, submessage_arena);
    }
    
  } else {
    
  }
  header_ = header;
  // @@protoc_insertion_point(field_set_allocated:bosdyn.api.spot_cam.GetSoftwareVersionResponse.header)
}

// .bosdyn.api.SoftwareVersion version = 2;
inline bool GetSoftwareVersionResponse::_internal_has_version() const {
  return this != internal_default_instance() && version_ != nullptr;
}
inline bool GetSoftwareVersionResponse::has_version() const {
  return _internal_has_version();
}
inline const ::bosdyn::api::SoftwareVersion& GetSoftwareVersionResponse::_internal_version() const {
  const ::bosdyn::api::SoftwareVersion* p = version_;
  return p != nullptr ? *p : *reinterpret_cast<const ::bosdyn::api::SoftwareVersion*>(
      &::bosdyn::api::_SoftwareVersion_default_instance_);
}
inline const ::bosdyn::api::SoftwareVersion& GetSoftwareVersionResponse::version() const {
  // @@protoc_insertion_point(field_get:bosdyn.api.spot_cam.GetSoftwareVersionResponse.version)
  return _internal_version();
}
inline void GetSoftwareVersionResponse::unsafe_arena_set_allocated_version(
    ::bosdyn::api::SoftwareVersion* version) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(version_);
  }
  version_ = version;
  if (version) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:bosdyn.api.spot_cam.GetSoftwareVersionResponse.version)
}
inline ::bosdyn::api::SoftwareVersion* GetSoftwareVersionResponse::release_version() {
  
  ::bosdyn::api::SoftwareVersion* temp = version_;
  version_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::bosdyn::api::SoftwareVersion* GetSoftwareVersionResponse::unsafe_arena_release_version() {
  // @@protoc_insertion_point(field_release:bosdyn.api.spot_cam.GetSoftwareVersionResponse.version)
  
  ::bosdyn::api::SoftwareVersion* temp = version_;
  version_ = nullptr;
  return temp;
}
inline ::bosdyn::api::SoftwareVersion* GetSoftwareVersionResponse::_internal_mutable_version() {
  
  if (version_ == nullptr) {
    auto* p = CreateMaybeMessage<::bosdyn::api::SoftwareVersion>(GetArena());
    version_ = p;
  }
  return version_;
}
inline ::bosdyn::api::SoftwareVersion* GetSoftwareVersionResponse::mutable_version() {
  // @@protoc_insertion_point(field_mutable:bosdyn.api.spot_cam.GetSoftwareVersionResponse.version)
  return _internal_mutable_version();
}
inline void GetSoftwareVersionResponse::set_allocated_version(::bosdyn::api::SoftwareVersion* version) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(version_);
  }
  if (version) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(version)->GetArena();
    if (message_arena != submessage_arena) {
      version = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, version, submessage_arena);
    }
    
  } else {
    
  }
  version_ = version;
  // @@protoc_insertion_point(field_set_allocated:bosdyn.api.spot_cam.GetSoftwareVersionResponse.version)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace spot_cam
}  // namespace api
}  // namespace bosdyn

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_bosdyn_2fapi_2fspot_5fcam_2fversion_2eproto
