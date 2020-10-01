// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: bosdyn/api/mission/mission_service.proto

#include "bosdyn/api/mission/mission_service.pb.h"

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
namespace mission {
}  // namespace mission
}  // namespace api
}  // namespace bosdyn
static constexpr ::PROTOBUF_NAMESPACE_ID::Metadata* file_level_metadata_bosdyn_2fapi_2fmission_2fmission_5fservice_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_bosdyn_2fapi_2fmission_2fmission_5fservice_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_bosdyn_2fapi_2fmission_2fmission_5fservice_2eproto = nullptr;
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_bosdyn_2fapi_2fmission_2fmission_5fservice_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_bosdyn_2fapi_2fmission_2fmission_5fservice_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n(bosdyn/api/mission/mission_service.pro"
  "to\022\022bosdyn.api.mission\032 bosdyn/api/missi"
  "on/mission.proto2\235\006\n\016MissionService\022`\n\013L"
  "oadMission\022&.bosdyn.api.mission.LoadMiss"
  "ionRequest\032\'.bosdyn.api.mission.LoadMiss"
  "ionResponse\"\000\022`\n\013PlayMission\022&.bosdyn.ap"
  "i.mission.PlayMissionRequest\032\'.bosdyn.ap"
  "i.mission.PlayMissionResponse\"\000\022c\n\014Pause"
  "Mission\022\'.bosdyn.api.mission.PauseMissio"
  "nRequest\032(.bosdyn.api.mission.PauseMissi"
  "onResponse\"\000\022i\n\016RestartMission\022).bosdyn."
  "api.mission.RestartMissionRequest\032*.bosd"
  "yn.api.mission.RestartMissionResponse\"\000\022"
  "W\n\010GetState\022#.bosdyn.api.mission.GetStat"
  "eRequest\032$.bosdyn.api.mission.GetStateRe"
  "sponse\"\000\022T\n\007GetInfo\022\".bosdyn.api.mission"
  ".GetInfoRequest\032#.bosdyn.api.mission.Get"
  "InfoResponse\"\000\022]\n\nGetMission\022%.bosdyn.ap"
  "i.mission.GetMissionRequest\032&.bosdyn.api"
  ".mission.GetMissionResponse\"\000\022i\n\016AnswerQ"
  "uestion\022).bosdyn.api.mission.AnswerQuest"
  "ionRequest\032*.bosdyn.api.mission.AnswerQu"
  "estionResponse\"\000B\025B\023MissionServiceProtob"
  "\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_bosdyn_2fapi_2fmission_2fmission_5fservice_2eproto_deps[1] = {
  &::descriptor_table_bosdyn_2fapi_2fmission_2fmission_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_bosdyn_2fapi_2fmission_2fmission_5fservice_2eproto_sccs[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_bosdyn_2fapi_2fmission_2fmission_5fservice_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_bosdyn_2fapi_2fmission_2fmission_5fservice_2eproto = {
  false, false, descriptor_table_protodef_bosdyn_2fapi_2fmission_2fmission_5fservice_2eproto, "bosdyn/api/mission/mission_service.proto", 927,
  &descriptor_table_bosdyn_2fapi_2fmission_2fmission_5fservice_2eproto_once, descriptor_table_bosdyn_2fapi_2fmission_2fmission_5fservice_2eproto_sccs, descriptor_table_bosdyn_2fapi_2fmission_2fmission_5fservice_2eproto_deps, 0, 1,
  schemas, file_default_instances, TableStruct_bosdyn_2fapi_2fmission_2fmission_5fservice_2eproto::offsets,
  file_level_metadata_bosdyn_2fapi_2fmission_2fmission_5fservice_2eproto, 0, file_level_enum_descriptors_bosdyn_2fapi_2fmission_2fmission_5fservice_2eproto, file_level_service_descriptors_bosdyn_2fapi_2fmission_2fmission_5fservice_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_bosdyn_2fapi_2fmission_2fmission_5fservice_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_bosdyn_2fapi_2fmission_2fmission_5fservice_2eproto)), true);
namespace bosdyn {
namespace api {
namespace mission {

// @@protoc_insertion_point(namespace_scope)
}  // namespace mission
}  // namespace api
}  // namespace bosdyn
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>