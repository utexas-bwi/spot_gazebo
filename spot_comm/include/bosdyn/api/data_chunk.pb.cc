// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: bosdyn/api/data_chunk.proto

#include "bosdyn/api/data_chunk.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace bosdyn {
namespace api {
class DataChunkDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<DataChunk> _instance;
} _DataChunk_default_instance_;
}  // namespace api
}  // namespace bosdyn
static void InitDefaultsscc_info_DataChunk_bosdyn_2fapi_2fdata_5fchunk_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::bosdyn::api::_DataChunk_default_instance_;
    new (ptr) ::bosdyn::api::DataChunk();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::bosdyn::api::DataChunk::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_DataChunk_bosdyn_2fapi_2fdata_5fchunk_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_DataChunk_bosdyn_2fapi_2fdata_5fchunk_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_bosdyn_2fapi_2fdata_5fchunk_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_bosdyn_2fapi_2fdata_5fchunk_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_bosdyn_2fapi_2fdata_5fchunk_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_bosdyn_2fapi_2fdata_5fchunk_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::bosdyn::api::DataChunk, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::bosdyn::api::DataChunk, total_size_),
  PROTOBUF_FIELD_OFFSET(::bosdyn::api::DataChunk, data_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::bosdyn::api::DataChunk)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::bosdyn::api::_DataChunk_default_instance_),
};

const char descriptor_table_protodef_bosdyn_2fapi_2fdata_5fchunk_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\033bosdyn/api/data_chunk.proto\022\nbosdyn.ap"
  "i\"-\n\tDataChunk\022\022\n\ntotal_size\030\001 \001(\004\022\014\n\004da"
  "ta\030\002 \001(\014B\020B\016DataChunkProtob\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_bosdyn_2fapi_2fdata_5fchunk_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_bosdyn_2fapi_2fdata_5fchunk_2eproto_sccs[1] = {
  &scc_info_DataChunk_bosdyn_2fapi_2fdata_5fchunk_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_bosdyn_2fapi_2fdata_5fchunk_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_bosdyn_2fapi_2fdata_5fchunk_2eproto = {
  false, false, descriptor_table_protodef_bosdyn_2fapi_2fdata_5fchunk_2eproto, "bosdyn/api/data_chunk.proto", 114,
  &descriptor_table_bosdyn_2fapi_2fdata_5fchunk_2eproto_once, descriptor_table_bosdyn_2fapi_2fdata_5fchunk_2eproto_sccs, descriptor_table_bosdyn_2fapi_2fdata_5fchunk_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_bosdyn_2fapi_2fdata_5fchunk_2eproto::offsets,
  file_level_metadata_bosdyn_2fapi_2fdata_5fchunk_2eproto, 1, file_level_enum_descriptors_bosdyn_2fapi_2fdata_5fchunk_2eproto, file_level_service_descriptors_bosdyn_2fapi_2fdata_5fchunk_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_bosdyn_2fapi_2fdata_5fchunk_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_bosdyn_2fapi_2fdata_5fchunk_2eproto)), true);
namespace bosdyn {
namespace api {

// ===================================================================

void DataChunk::InitAsDefaultInstance() {
}
class DataChunk::_Internal {
 public:
};

DataChunk::DataChunk(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:bosdyn.api.DataChunk)
}
DataChunk::DataChunk(const DataChunk& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_data().empty()) {
    data_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_data(),
      GetArena());
  }
  total_size_ = from.total_size_;
  // @@protoc_insertion_point(copy_constructor:bosdyn.api.DataChunk)
}

void DataChunk::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_DataChunk_bosdyn_2fapi_2fdata_5fchunk_2eproto.base);
  data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  total_size_ = PROTOBUF_ULONGLONG(0);
}

DataChunk::~DataChunk() {
  // @@protoc_insertion_point(destructor:bosdyn.api.DataChunk)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void DataChunk::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  data_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void DataChunk::ArenaDtor(void* object) {
  DataChunk* _this = reinterpret_cast< DataChunk* >(object);
  (void)_this;
}
void DataChunk::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void DataChunk::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const DataChunk& DataChunk::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_DataChunk_bosdyn_2fapi_2fdata_5fchunk_2eproto.base);
  return *internal_default_instance();
}


void DataChunk::Clear() {
// @@protoc_insertion_point(message_clear_start:bosdyn.api.DataChunk)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  data_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  total_size_ = PROTOBUF_ULONGLONG(0);
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* DataChunk::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // uint64 total_size = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          total_size_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes data = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_data();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* DataChunk::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:bosdyn.api.DataChunk)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 total_size = 1;
  if (this->total_size() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(1, this->_internal_total_size(), target);
  }

  // bytes data = 2;
  if (this->data().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_data(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:bosdyn.api.DataChunk)
  return target;
}

size_t DataChunk::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:bosdyn.api.DataChunk)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes data = 2;
  if (this->data().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_data());
  }

  // uint64 total_size = 1;
  if (this->total_size() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->_internal_total_size());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void DataChunk::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:bosdyn.api.DataChunk)
  GOOGLE_DCHECK_NE(&from, this);
  const DataChunk* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<DataChunk>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:bosdyn.api.DataChunk)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:bosdyn.api.DataChunk)
    MergeFrom(*source);
  }
}

void DataChunk::MergeFrom(const DataChunk& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:bosdyn.api.DataChunk)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.data().size() > 0) {
    _internal_set_data(from._internal_data());
  }
  if (from.total_size() != 0) {
    _internal_set_total_size(from._internal_total_size());
  }
}

void DataChunk::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:bosdyn.api.DataChunk)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DataChunk::CopyFrom(const DataChunk& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:bosdyn.api.DataChunk)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DataChunk::IsInitialized() const {
  return true;
}

void DataChunk::InternalSwap(DataChunk* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  data_.Swap(&other->data_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  swap(total_size_, other->total_size_);
}

::PROTOBUF_NAMESPACE_ID::Metadata DataChunk::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace api
}  // namespace bosdyn
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::bosdyn::api::DataChunk* Arena::CreateMaybeMessage< ::bosdyn::api::DataChunk >(Arena* arena) {
  return Arena::CreateMessageInternal< ::bosdyn::api::DataChunk >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
