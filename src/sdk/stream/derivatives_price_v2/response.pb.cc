// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sdk/stream/derivatives_price_v2/response.proto

#include "sdk/stream/derivatives_price_v2/response.pb.h"

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

PROTOBUF_PRAGMA_INIT_SEG
namespace kaikosdk {
constexpr StreamDerivativesPriceResponseV2_ValuesEntry_DoNotUse::StreamDerivativesPriceResponseV2_ValuesEntry_DoNotUse(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized){}
struct StreamDerivativesPriceResponseV2_ValuesEntry_DoNotUseDefaultTypeInternal {
  constexpr StreamDerivativesPriceResponseV2_ValuesEntry_DoNotUseDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~StreamDerivativesPriceResponseV2_ValuesEntry_DoNotUseDefaultTypeInternal() {}
  union {
    StreamDerivativesPriceResponseV2_ValuesEntry_DoNotUse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT StreamDerivativesPriceResponseV2_ValuesEntry_DoNotUseDefaultTypeInternal _StreamDerivativesPriceResponseV2_ValuesEntry_DoNotUse_default_instance_;
constexpr StreamDerivativesPriceResponseV2::StreamDerivativesPriceResponseV2(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : values_(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{})
  , class__(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , code_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , exchange_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , ts_exchange_(nullptr)
  , ts_collection_(nullptr)
  , ts_event_(nullptr){}
struct StreamDerivativesPriceResponseV2DefaultTypeInternal {
  constexpr StreamDerivativesPriceResponseV2DefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~StreamDerivativesPriceResponseV2DefaultTypeInternal() {}
  union {
    StreamDerivativesPriceResponseV2 _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT StreamDerivativesPriceResponseV2DefaultTypeInternal _StreamDerivativesPriceResponseV2_default_instance_;
}  // namespace kaikosdk
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_sdk_2fstream_2fderivatives_5fprice_5fv2_2fresponse_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_sdk_2fstream_2fderivatives_5fprice_5fv2_2fresponse_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_sdk_2fstream_2fderivatives_5fprice_5fv2_2fresponse_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_sdk_2fstream_2fderivatives_5fprice_5fv2_2fresponse_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamDerivativesPriceResponseV2_ValuesEntry_DoNotUse, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamDerivativesPriceResponseV2_ValuesEntry_DoNotUse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamDerivativesPriceResponseV2_ValuesEntry_DoNotUse, key_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamDerivativesPriceResponseV2_ValuesEntry_DoNotUse, value_),
  0,
  1,
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamDerivativesPriceResponseV2, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamDerivativesPriceResponseV2, class__),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamDerivativesPriceResponseV2, code_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamDerivativesPriceResponseV2, exchange_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamDerivativesPriceResponseV2, values_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamDerivativesPriceResponseV2, ts_exchange_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamDerivativesPriceResponseV2, ts_collection_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamDerivativesPriceResponseV2, ts_event_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::kaikosdk::StreamDerivativesPriceResponseV2_ValuesEntry_DoNotUse)},
  { 9, -1, sizeof(::kaikosdk::StreamDerivativesPriceResponseV2)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::kaikosdk::_StreamDerivativesPriceResponseV2_ValuesEntry_DoNotUse_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::kaikosdk::_StreamDerivativesPriceResponseV2_default_instance_),
};

const char descriptor_table_protodef_sdk_2fstream_2fderivatives_5fprice_5fv2_2fresponse_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n.sdk/stream/derivatives_price_v2/respon"
  "se.proto\022\010kaikosdk\032\037google/protobuf/time"
  "stamp.proto\032\027sdk/core/wrappers.proto\"\326\002\n"
  " StreamDerivativesPriceResponseV2\022\r\n\005cla"
  "ss\030\001 \001(\t\022\014\n\004code\030\002 \001(\t\022\020\n\010exchange\030\003 \001(\t"
  "\022F\n\006values\030\004 \003(\01326.kaikosdk.StreamDeriva"
  "tivesPriceResponseV2.ValuesEntry\022-\n\013ts_e"
  "xchange\030\005 \001(\0132\030.kaikosdk.TimestampValue\022"
  "/\n\rts_collection\030\006 \001(\0132\030.kaikosdk.Timest"
  "ampValue\022,\n\010ts_event\030\007 \001(\0132\032.google.prot"
  "obuf.Timestamp\032-\n\013ValuesEntry\022\013\n\003key\030\001 \001"
  "(\t\022\r\n\005value\030\002 \001(\t:\0028\001B\253\001\n)com.kaiko.sdk."
  "stream.derivatives_price_v2P\001ZWgithub.co"
  "m/challengerdeep/kaiko-go-sdk/stream/der"
  "ivatives_price_v2;derivatives_price_v2\252\002"
  "\"KaikoSdk.Stream.DerivativesPriceV2b\006pro"
  "to3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_sdk_2fstream_2fderivatives_5fprice_5fv2_2fresponse_2eproto_deps[2] = {
  &::descriptor_table_google_2fprotobuf_2ftimestamp_2eproto,
  &::descriptor_table_sdk_2fcore_2fwrappers_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_sdk_2fstream_2fderivatives_5fprice_5fv2_2fresponse_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_sdk_2fstream_2fderivatives_5fprice_5fv2_2fresponse_2eproto = {
  false, false, 643, descriptor_table_protodef_sdk_2fstream_2fderivatives_5fprice_5fv2_2fresponse_2eproto, "sdk/stream/derivatives_price_v2/response.proto", 
  &descriptor_table_sdk_2fstream_2fderivatives_5fprice_5fv2_2fresponse_2eproto_once, descriptor_table_sdk_2fstream_2fderivatives_5fprice_5fv2_2fresponse_2eproto_deps, 2, 2,
  schemas, file_default_instances, TableStruct_sdk_2fstream_2fderivatives_5fprice_5fv2_2fresponse_2eproto::offsets,
  file_level_metadata_sdk_2fstream_2fderivatives_5fprice_5fv2_2fresponse_2eproto, file_level_enum_descriptors_sdk_2fstream_2fderivatives_5fprice_5fv2_2fresponse_2eproto, file_level_service_descriptors_sdk_2fstream_2fderivatives_5fprice_5fv2_2fresponse_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_sdk_2fstream_2fderivatives_5fprice_5fv2_2fresponse_2eproto_getter() {
  return &descriptor_table_sdk_2fstream_2fderivatives_5fprice_5fv2_2fresponse_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_sdk_2fstream_2fderivatives_5fprice_5fv2_2fresponse_2eproto(&descriptor_table_sdk_2fstream_2fderivatives_5fprice_5fv2_2fresponse_2eproto);
namespace kaikosdk {

// ===================================================================

StreamDerivativesPriceResponseV2_ValuesEntry_DoNotUse::StreamDerivativesPriceResponseV2_ValuesEntry_DoNotUse() {}
StreamDerivativesPriceResponseV2_ValuesEntry_DoNotUse::StreamDerivativesPriceResponseV2_ValuesEntry_DoNotUse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
    : SuperType(arena) {}
void StreamDerivativesPriceResponseV2_ValuesEntry_DoNotUse::MergeFrom(const StreamDerivativesPriceResponseV2_ValuesEntry_DoNotUse& other) {
  MergeFromInternal(other);
}
::PROTOBUF_NAMESPACE_ID::Metadata StreamDerivativesPriceResponseV2_ValuesEntry_DoNotUse::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_sdk_2fstream_2fderivatives_5fprice_5fv2_2fresponse_2eproto_getter, &descriptor_table_sdk_2fstream_2fderivatives_5fprice_5fv2_2fresponse_2eproto_once,
      file_level_metadata_sdk_2fstream_2fderivatives_5fprice_5fv2_2fresponse_2eproto[0]);
}
void StreamDerivativesPriceResponseV2_ValuesEntry_DoNotUse::MergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::Message& other) {
  ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom(other);
}


// ===================================================================

class StreamDerivativesPriceResponseV2::_Internal {
 public:
  static const ::kaikosdk::TimestampValue& ts_exchange(const StreamDerivativesPriceResponseV2* msg);
  static const ::kaikosdk::TimestampValue& ts_collection(const StreamDerivativesPriceResponseV2* msg);
  static const PROTOBUF_NAMESPACE_ID::Timestamp& ts_event(const StreamDerivativesPriceResponseV2* msg);
};

const ::kaikosdk::TimestampValue&
StreamDerivativesPriceResponseV2::_Internal::ts_exchange(const StreamDerivativesPriceResponseV2* msg) {
  return *msg->ts_exchange_;
}
const ::kaikosdk::TimestampValue&
StreamDerivativesPriceResponseV2::_Internal::ts_collection(const StreamDerivativesPriceResponseV2* msg) {
  return *msg->ts_collection_;
}
const PROTOBUF_NAMESPACE_ID::Timestamp&
StreamDerivativesPriceResponseV2::_Internal::ts_event(const StreamDerivativesPriceResponseV2* msg) {
  return *msg->ts_event_;
}
void StreamDerivativesPriceResponseV2::clear_ts_exchange() {
  if (GetArenaForAllocation() == nullptr && ts_exchange_ != nullptr) {
    delete ts_exchange_;
  }
  ts_exchange_ = nullptr;
}
void StreamDerivativesPriceResponseV2::clear_ts_collection() {
  if (GetArenaForAllocation() == nullptr && ts_collection_ != nullptr) {
    delete ts_collection_;
  }
  ts_collection_ = nullptr;
}
void StreamDerivativesPriceResponseV2::clear_ts_event() {
  if (GetArenaForAllocation() == nullptr && ts_event_ != nullptr) {
    delete ts_event_;
  }
  ts_event_ = nullptr;
}
StreamDerivativesPriceResponseV2::StreamDerivativesPriceResponseV2(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  values_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:kaikosdk.StreamDerivativesPriceResponseV2)
}
StreamDerivativesPriceResponseV2::StreamDerivativesPriceResponseV2(const StreamDerivativesPriceResponseV2& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  values_.MergeFrom(from.values_);
  class__.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_class_().empty()) {
    class__.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_class_(), 
      GetArenaForAllocation());
  }
  code_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_code().empty()) {
    code_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_code(), 
      GetArenaForAllocation());
  }
  exchange_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_exchange().empty()) {
    exchange_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_exchange(), 
      GetArenaForAllocation());
  }
  if (from._internal_has_ts_exchange()) {
    ts_exchange_ = new ::kaikosdk::TimestampValue(*from.ts_exchange_);
  } else {
    ts_exchange_ = nullptr;
  }
  if (from._internal_has_ts_collection()) {
    ts_collection_ = new ::kaikosdk::TimestampValue(*from.ts_collection_);
  } else {
    ts_collection_ = nullptr;
  }
  if (from._internal_has_ts_event()) {
    ts_event_ = new PROTOBUF_NAMESPACE_ID::Timestamp(*from.ts_event_);
  } else {
    ts_event_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:kaikosdk.StreamDerivativesPriceResponseV2)
}

void StreamDerivativesPriceResponseV2::SharedCtor() {
class__.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
code_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
exchange_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&ts_exchange_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&ts_event_) -
    reinterpret_cast<char*>(&ts_exchange_)) + sizeof(ts_event_));
}

StreamDerivativesPriceResponseV2::~StreamDerivativesPriceResponseV2() {
  // @@protoc_insertion_point(destructor:kaikosdk.StreamDerivativesPriceResponseV2)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void StreamDerivativesPriceResponseV2::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  class__.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  code_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  exchange_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete ts_exchange_;
  if (this != internal_default_instance()) delete ts_collection_;
  if (this != internal_default_instance()) delete ts_event_;
}

void StreamDerivativesPriceResponseV2::ArenaDtor(void* object) {
  StreamDerivativesPriceResponseV2* _this = reinterpret_cast< StreamDerivativesPriceResponseV2* >(object);
  (void)_this;
  _this->values_. ~MapField();
}
inline void StreamDerivativesPriceResponseV2::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena) {
  if (arena != nullptr) {
    arena->OwnCustomDestructor(this, &StreamDerivativesPriceResponseV2::ArenaDtor);
  }
}
void StreamDerivativesPriceResponseV2::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void StreamDerivativesPriceResponseV2::Clear() {
// @@protoc_insertion_point(message_clear_start:kaikosdk.StreamDerivativesPriceResponseV2)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  values_.Clear();
  class__.ClearToEmpty();
  code_.ClearToEmpty();
  exchange_.ClearToEmpty();
  if (GetArenaForAllocation() == nullptr && ts_exchange_ != nullptr) {
    delete ts_exchange_;
  }
  ts_exchange_ = nullptr;
  if (GetArenaForAllocation() == nullptr && ts_collection_ != nullptr) {
    delete ts_collection_;
  }
  ts_collection_ = nullptr;
  if (GetArenaForAllocation() == nullptr && ts_event_ != nullptr) {
    delete ts_event_;
  }
  ts_event_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* StreamDerivativesPriceResponseV2::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string class = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_class_();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "kaikosdk.StreamDerivativesPriceResponseV2.class"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string code = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_code();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "kaikosdk.StreamDerivativesPriceResponseV2.code"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string exchange = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_exchange();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "kaikosdk.StreamDerivativesPriceResponseV2.exchange"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // map<string, string> values = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(&values_, ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<34>(ptr));
        } else goto handle_unusual;
        continue;
      // .kaikosdk.TimestampValue ts_exchange = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          ptr = ctx->ParseMessage(_internal_mutable_ts_exchange(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .kaikosdk.TimestampValue ts_collection = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          ptr = ctx->ParseMessage(_internal_mutable_ts_collection(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .google.protobuf.Timestamp ts_event = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          ptr = ctx->ParseMessage(_internal_mutable_ts_event(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* StreamDerivativesPriceResponseV2::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:kaikosdk.StreamDerivativesPriceResponseV2)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string class = 1;
  if (!this->class_().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_class_().data(), static_cast<int>(this->_internal_class_().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamDerivativesPriceResponseV2.class");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_class_(), target);
  }

  // string code = 2;
  if (!this->code().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_code().data(), static_cast<int>(this->_internal_code().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamDerivativesPriceResponseV2.code");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_code(), target);
  }

  // string exchange = 3;
  if (!this->exchange().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_exchange().data(), static_cast<int>(this->_internal_exchange().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamDerivativesPriceResponseV2.exchange");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_exchange(), target);
  }

  // map<string, string> values = 4;
  if (!this->_internal_values().empty()) {
    typedef ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >::const_pointer
        ConstPtr;
    typedef ConstPtr SortItem;
    typedef ::PROTOBUF_NAMESPACE_ID::internal::CompareByDerefFirst<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        (void)p;
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
          p->first.data(), static_cast<int>(p->first.length()),
          ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
          "kaikosdk.StreamDerivativesPriceResponseV2.ValuesEntry.key");
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
          p->second.data(), static_cast<int>(p->second.length()),
          ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
          "kaikosdk.StreamDerivativesPriceResponseV2.ValuesEntry.value");
      }
    };

    if (stream->IsSerializationDeterministic() &&
        this->_internal_values().size() > 1) {
      ::std::unique_ptr<SortItem[]> items(
          new SortItem[this->_internal_values().size()]);
      typedef ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >::size_type size_type;
      size_type n = 0;
      for (::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >::const_iterator
          it = this->_internal_values().begin();
          it != this->_internal_values().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      for (size_type i = 0; i < n; i++) {
        target = StreamDerivativesPriceResponseV2_ValuesEntry_DoNotUse::Funcs::InternalSerialize(4, items[static_cast<ptrdiff_t>(i)]->first, items[static_cast<ptrdiff_t>(i)]->second, target, stream);
        Utf8Check::Check(&(*items[static_cast<ptrdiff_t>(i)]));
      }
    } else {
      for (::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >::const_iterator
          it = this->_internal_values().begin();
          it != this->_internal_values().end(); ++it) {
        target = StreamDerivativesPriceResponseV2_ValuesEntry_DoNotUse::Funcs::InternalSerialize(4, it->first, it->second, target, stream);
        Utf8Check::Check(&(*it));
      }
    }
  }

  // .kaikosdk.TimestampValue ts_exchange = 5;
  if (this->has_ts_exchange()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        5, _Internal::ts_exchange(this), target, stream);
  }

  // .kaikosdk.TimestampValue ts_collection = 6;
  if (this->has_ts_collection()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        6, _Internal::ts_collection(this), target, stream);
  }

  // .google.protobuf.Timestamp ts_event = 7;
  if (this->has_ts_event()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        7, _Internal::ts_event(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:kaikosdk.StreamDerivativesPriceResponseV2)
  return target;
}

size_t StreamDerivativesPriceResponseV2::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:kaikosdk.StreamDerivativesPriceResponseV2)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // map<string, string> values = 4;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(this->_internal_values_size());
  for (::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >::const_iterator
      it = this->_internal_values().begin();
      it != this->_internal_values().end(); ++it) {
    total_size += StreamDerivativesPriceResponseV2_ValuesEntry_DoNotUse::Funcs::ByteSizeLong(it->first, it->second);
  }

  // string class = 1;
  if (!this->class_().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_class_());
  }

  // string code = 2;
  if (!this->code().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_code());
  }

  // string exchange = 3;
  if (!this->exchange().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_exchange());
  }

  // .kaikosdk.TimestampValue ts_exchange = 5;
  if (this->has_ts_exchange()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *ts_exchange_);
  }

  // .kaikosdk.TimestampValue ts_collection = 6;
  if (this->has_ts_collection()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *ts_collection_);
  }

  // .google.protobuf.Timestamp ts_event = 7;
  if (this->has_ts_event()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *ts_event_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void StreamDerivativesPriceResponseV2::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:kaikosdk.StreamDerivativesPriceResponseV2)
  GOOGLE_DCHECK_NE(&from, this);
  const StreamDerivativesPriceResponseV2* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<StreamDerivativesPriceResponseV2>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:kaikosdk.StreamDerivativesPriceResponseV2)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:kaikosdk.StreamDerivativesPriceResponseV2)
    MergeFrom(*source);
  }
}

void StreamDerivativesPriceResponseV2::MergeFrom(const StreamDerivativesPriceResponseV2& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:kaikosdk.StreamDerivativesPriceResponseV2)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  values_.MergeFrom(from.values_);
  if (!from.class_().empty()) {
    _internal_set_class_(from._internal_class_());
  }
  if (!from.code().empty()) {
    _internal_set_code(from._internal_code());
  }
  if (!from.exchange().empty()) {
    _internal_set_exchange(from._internal_exchange());
  }
  if (from.has_ts_exchange()) {
    _internal_mutable_ts_exchange()->::kaikosdk::TimestampValue::MergeFrom(from._internal_ts_exchange());
  }
  if (from.has_ts_collection()) {
    _internal_mutable_ts_collection()->::kaikosdk::TimestampValue::MergeFrom(from._internal_ts_collection());
  }
  if (from.has_ts_event()) {
    _internal_mutable_ts_event()->PROTOBUF_NAMESPACE_ID::Timestamp::MergeFrom(from._internal_ts_event());
  }
}

void StreamDerivativesPriceResponseV2::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:kaikosdk.StreamDerivativesPriceResponseV2)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void StreamDerivativesPriceResponseV2::CopyFrom(const StreamDerivativesPriceResponseV2& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:kaikosdk.StreamDerivativesPriceResponseV2)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StreamDerivativesPriceResponseV2::IsInitialized() const {
  return true;
}

void StreamDerivativesPriceResponseV2::InternalSwap(StreamDerivativesPriceResponseV2* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  values_.InternalSwap(&other->values_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &class__, GetArenaForAllocation(),
      &other->class__, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &code_, GetArenaForAllocation(),
      &other->code_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &exchange_, GetArenaForAllocation(),
      &other->exchange_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(StreamDerivativesPriceResponseV2, ts_event_)
      + sizeof(StreamDerivativesPriceResponseV2::ts_event_)
      - PROTOBUF_FIELD_OFFSET(StreamDerivativesPriceResponseV2, ts_exchange_)>(
          reinterpret_cast<char*>(&ts_exchange_),
          reinterpret_cast<char*>(&other->ts_exchange_));
}

::PROTOBUF_NAMESPACE_ID::Metadata StreamDerivativesPriceResponseV2::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_sdk_2fstream_2fderivatives_5fprice_5fv2_2fresponse_2eproto_getter, &descriptor_table_sdk_2fstream_2fderivatives_5fprice_5fv2_2fresponse_2eproto_once,
      file_level_metadata_sdk_2fstream_2fderivatives_5fprice_5fv2_2fresponse_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace kaikosdk
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::kaikosdk::StreamDerivativesPriceResponseV2_ValuesEntry_DoNotUse* Arena::CreateMaybeMessage< ::kaikosdk::StreamDerivativesPriceResponseV2_ValuesEntry_DoNotUse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::kaikosdk::StreamDerivativesPriceResponseV2_ValuesEntry_DoNotUse >(arena);
}
template<> PROTOBUF_NOINLINE ::kaikosdk::StreamDerivativesPriceResponseV2* Arena::CreateMaybeMessage< ::kaikosdk::StreamDerivativesPriceResponseV2 >(Arena* arena) {
  return Arena::CreateMessageInternal< ::kaikosdk::StreamDerivativesPriceResponseV2 >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>