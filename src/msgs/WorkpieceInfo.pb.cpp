// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: WorkpieceInfo.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "WorkpieceInfo.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace llsf_msgs {

namespace {

const ::google::protobuf::Descriptor* Workpiece_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Workpiece_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Workpiece_CompType_descriptor_ = NULL;
const ::google::protobuf::Descriptor* WorkpieceInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  WorkpieceInfo_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* WorkpieceInfo_CompType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_WorkpieceInfo_2eproto() {
  protobuf_AddDesc_WorkpieceInfo_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "WorkpieceInfo.proto");
  GOOGLE_CHECK(file != NULL);
  Workpiece_descriptor_ = file->message_type(0);
  static const int Workpiece_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Workpiece, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Workpiece, at_machine_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Workpiece, visible_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Workpiece, team_color_),
  };
  Workpiece_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Workpiece_descriptor_,
      Workpiece::default_instance_,
      Workpiece_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Workpiece, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Workpiece, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Workpiece));
  Workpiece_CompType_descriptor_ = Workpiece_descriptor_->enum_type(0);
  WorkpieceInfo_descriptor_ = file->message_type(1);
  static const int WorkpieceInfo_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WorkpieceInfo, workpieces_),
  };
  WorkpieceInfo_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      WorkpieceInfo_descriptor_,
      WorkpieceInfo::default_instance_,
      WorkpieceInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WorkpieceInfo, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WorkpieceInfo, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(WorkpieceInfo));
  WorkpieceInfo_CompType_descriptor_ = WorkpieceInfo_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_WorkpieceInfo_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Workpiece_descriptor_, &Workpiece::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    WorkpieceInfo_descriptor_, &WorkpieceInfo::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_WorkpieceInfo_2eproto() {
  delete Workpiece::default_instance_;
  delete Workpiece_reflection_;
  delete WorkpieceInfo::default_instance_;
  delete WorkpieceInfo_reflection_;
}

void protobuf_AddDesc_WorkpieceInfo_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::llsf_msgs::protobuf_AddDesc_Team_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023WorkpieceInfo.proto\022\tllsf_msgs\032\nTeam.p"
    "roto\"\211\001\n\tWorkpiece\022\n\n\002id\030\001 \002(\r\022\022\n\nat_mac"
    "hine\030\002 \002(\t\022\017\n\007visible\030\003 \001(\010\022#\n\nteam_colo"
    "r\030\004 \001(\0162\017.llsf_msgs.Team\"&\n\010CompType\022\014\n\007"
    "COMP_ID\020\320\017\022\014\n\010MSG_TYPE\0207\"a\n\rWorkpieceInf"
    "o\022(\n\nworkpieces\030\001 \003(\0132\024.llsf_msgs.Workpi"
    "ece\"&\n\010CompType\022\014\n\007COMP_ID\020\320\017\022\014\n\010MSG_TYP"
    "E\0208B6\n\037org.robocup_logistics.llsf_msgsB\023"
    "WorkpieceInfoProtos", 339);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "WorkpieceInfo.proto", &protobuf_RegisterTypes);
  Workpiece::default_instance_ = new Workpiece();
  WorkpieceInfo::default_instance_ = new WorkpieceInfo();
  Workpiece::default_instance_->InitAsDefaultInstance();
  WorkpieceInfo::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_WorkpieceInfo_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_WorkpieceInfo_2eproto {
  StaticDescriptorInitializer_WorkpieceInfo_2eproto() {
    protobuf_AddDesc_WorkpieceInfo_2eproto();
  }
} static_descriptor_initializer_WorkpieceInfo_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* Workpiece_CompType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Workpiece_CompType_descriptor_;
}
bool Workpiece_CompType_IsValid(int value) {
  switch(value) {
    case 55:
    case 2000:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const Workpiece_CompType Workpiece::COMP_ID;
const Workpiece_CompType Workpiece::MSG_TYPE;
const Workpiece_CompType Workpiece::CompType_MIN;
const Workpiece_CompType Workpiece::CompType_MAX;
const int Workpiece::CompType_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int Workpiece::kIdFieldNumber;
const int Workpiece::kAtMachineFieldNumber;
const int Workpiece::kVisibleFieldNumber;
const int Workpiece::kTeamColorFieldNumber;
#endif  // !_MSC_VER

Workpiece::Workpiece()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:llsf_msgs.Workpiece)
}

void Workpiece::InitAsDefaultInstance() {
}

Workpiece::Workpiece(const Workpiece& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:llsf_msgs.Workpiece)
}

void Workpiece::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  id_ = 0u;
  at_machine_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  visible_ = false;
  team_color_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Workpiece::~Workpiece() {
  // @@protoc_insertion_point(destructor:llsf_msgs.Workpiece)
  SharedDtor();
}

void Workpiece::SharedDtor() {
  if (at_machine_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete at_machine_;
  }
  if (this != default_instance_) {
  }
}

void Workpiece::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Workpiece::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Workpiece_descriptor_;
}

const Workpiece& Workpiece::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_WorkpieceInfo_2eproto();
  return *default_instance_;
}

Workpiece* Workpiece::default_instance_ = NULL;

Workpiece* Workpiece::New() const {
  return new Workpiece;
}

void Workpiece::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<Workpiece*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 15) {
    ZR_(id_, team_color_);
    if (has_at_machine()) {
      if (at_machine_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        at_machine_->clear();
      }
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Workpiece::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:llsf_msgs.Workpiece)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 id = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_at_machine;
        break;
      }

      // required string at_machine = 2;
      case 2: {
        if (tag == 18) {
         parse_at_machine:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_at_machine()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->at_machine().data(), this->at_machine().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "at_machine");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_visible;
        break;
      }

      // optional bool visible = 3;
      case 3: {
        if (tag == 24) {
         parse_visible:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &visible_)));
          set_has_visible();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_team_color;
        break;
      }

      // optional .llsf_msgs.Team team_color = 4;
      case 4: {
        if (tag == 32) {
         parse_team_color:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::llsf_msgs::Team_IsValid(value)) {
            set_team_color(static_cast< ::llsf_msgs::Team >(value));
          } else {
            mutable_unknown_fields()->AddVarint(4, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:llsf_msgs.Workpiece)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:llsf_msgs.Workpiece)
  return false;
#undef DO_
}

void Workpiece::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:llsf_msgs.Workpiece)
  // required uint32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->id(), output);
  }

  // required string at_machine = 2;
  if (has_at_machine()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->at_machine().data(), this->at_machine().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "at_machine");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->at_machine(), output);
  }

  // optional bool visible = 3;
  if (has_visible()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->visible(), output);
  }

  // optional .llsf_msgs.Team team_color = 4;
  if (has_team_color()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      4, this->team_color(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:llsf_msgs.Workpiece)
}

::google::protobuf::uint8* Workpiece::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:llsf_msgs.Workpiece)
  // required uint32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->id(), target);
  }

  // required string at_machine = 2;
  if (has_at_machine()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->at_machine().data(), this->at_machine().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "at_machine");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->at_machine(), target);
  }

  // optional bool visible = 3;
  if (has_visible()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->visible(), target);
  }

  // optional .llsf_msgs.Team team_color = 4;
  if (has_team_color()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      4, this->team_color(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:llsf_msgs.Workpiece)
  return target;
}

int Workpiece::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->id());
    }

    // required string at_machine = 2;
    if (has_at_machine()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->at_machine());
    }

    // optional bool visible = 3;
    if (has_visible()) {
      total_size += 1 + 1;
    }

    // optional .llsf_msgs.Team team_color = 4;
    if (has_team_color()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->team_color());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Workpiece::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Workpiece* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Workpiece*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Workpiece::MergeFrom(const Workpiece& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_at_machine()) {
      set_at_machine(from.at_machine());
    }
    if (from.has_visible()) {
      set_visible(from.visible());
    }
    if (from.has_team_color()) {
      set_team_color(from.team_color());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Workpiece::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Workpiece::CopyFrom(const Workpiece& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Workpiece::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void Workpiece::Swap(Workpiece* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(at_machine_, other->at_machine_);
    std::swap(visible_, other->visible_);
    std::swap(team_color_, other->team_color_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Workpiece::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Workpiece_descriptor_;
  metadata.reflection = Workpiece_reflection_;
  return metadata;
}


// ===================================================================

const ::google::protobuf::EnumDescriptor* WorkpieceInfo_CompType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return WorkpieceInfo_CompType_descriptor_;
}
bool WorkpieceInfo_CompType_IsValid(int value) {
  switch(value) {
    case 56:
    case 2000:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const WorkpieceInfo_CompType WorkpieceInfo::COMP_ID;
const WorkpieceInfo_CompType WorkpieceInfo::MSG_TYPE;
const WorkpieceInfo_CompType WorkpieceInfo::CompType_MIN;
const WorkpieceInfo_CompType WorkpieceInfo::CompType_MAX;
const int WorkpieceInfo::CompType_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int WorkpieceInfo::kWorkpiecesFieldNumber;
#endif  // !_MSC_VER

WorkpieceInfo::WorkpieceInfo()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:llsf_msgs.WorkpieceInfo)
}

void WorkpieceInfo::InitAsDefaultInstance() {
}

WorkpieceInfo::WorkpieceInfo(const WorkpieceInfo& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:llsf_msgs.WorkpieceInfo)
}

void WorkpieceInfo::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

WorkpieceInfo::~WorkpieceInfo() {
  // @@protoc_insertion_point(destructor:llsf_msgs.WorkpieceInfo)
  SharedDtor();
}

void WorkpieceInfo::SharedDtor() {
  if (this != default_instance_) {
  }
}

void WorkpieceInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* WorkpieceInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return WorkpieceInfo_descriptor_;
}

const WorkpieceInfo& WorkpieceInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_WorkpieceInfo_2eproto();
  return *default_instance_;
}

WorkpieceInfo* WorkpieceInfo::default_instance_ = NULL;

WorkpieceInfo* WorkpieceInfo::New() const {
  return new WorkpieceInfo;
}

void WorkpieceInfo::Clear() {
  workpieces_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool WorkpieceInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:llsf_msgs.WorkpieceInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .llsf_msgs.Workpiece workpieces = 1;
      case 1: {
        if (tag == 10) {
         parse_workpieces:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_workpieces()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_workpieces;
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:llsf_msgs.WorkpieceInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:llsf_msgs.WorkpieceInfo)
  return false;
#undef DO_
}

void WorkpieceInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:llsf_msgs.WorkpieceInfo)
  // repeated .llsf_msgs.Workpiece workpieces = 1;
  for (int i = 0; i < this->workpieces_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->workpieces(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:llsf_msgs.WorkpieceInfo)
}

::google::protobuf::uint8* WorkpieceInfo::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:llsf_msgs.WorkpieceInfo)
  // repeated .llsf_msgs.Workpiece workpieces = 1;
  for (int i = 0; i < this->workpieces_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->workpieces(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:llsf_msgs.WorkpieceInfo)
  return target;
}

int WorkpieceInfo::ByteSize() const {
  int total_size = 0;

  // repeated .llsf_msgs.Workpiece workpieces = 1;
  total_size += 1 * this->workpieces_size();
  for (int i = 0; i < this->workpieces_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->workpieces(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void WorkpieceInfo::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const WorkpieceInfo* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const WorkpieceInfo*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void WorkpieceInfo::MergeFrom(const WorkpieceInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  workpieces_.MergeFrom(from.workpieces_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void WorkpieceInfo::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void WorkpieceInfo::CopyFrom(const WorkpieceInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WorkpieceInfo::IsInitialized() const {

  if (!::google::protobuf::internal::AllAreInitialized(this->workpieces())) return false;
  return true;
}

void WorkpieceInfo::Swap(WorkpieceInfo* other) {
  if (other != this) {
    workpieces_.Swap(&other->workpieces_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata WorkpieceInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = WorkpieceInfo_descriptor_;
  metadata.reflection = WorkpieceInfo_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace llsf_msgs

// @@protoc_insertion_point(global_scope)
