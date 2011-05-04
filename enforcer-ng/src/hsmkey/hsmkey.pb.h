// Generated by the protocol buffer compiler.  DO NOT EDIT!

#ifndef PROTOBUF_hsmkey_2eproto__INCLUDED
#define PROTOBUF_hsmkey_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2002000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2002000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
#include "xmlext.pb.h"

namespace ods {
namespace hsmkey {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_hsmkey_2eproto();
void protobuf_AssignDesc_hsmkey_2eproto();
void protobuf_ShutdownFile_hsmkey_2eproto();

class HsmKeyDocument;
class HsmKey;

enum keyrole {
  KSK = 1,
  ZSK = 2,
  CSK = 3
};
bool keyrole_IsValid(int value);
const keyrole keyrole_MIN = KSK;
const keyrole keyrole_MAX = CSK;

const ::google::protobuf::EnumDescriptor* keyrole_descriptor();
inline const ::std::string& keyrole_Name(keyrole value) {
  return ::google::protobuf::internal::NameOfEnum(
    keyrole_descriptor(), value);
}
inline bool keyrole_Parse(
    const ::std::string& name, keyrole* value) {
  return ::google::protobuf::internal::ParseNamedEnum<keyrole>(
    keyrole_descriptor(), name, value);
}
// ===================================================================

class HsmKeyDocument : public ::google::protobuf::Message {
 public:
  HsmKeyDocument();
  virtual ~HsmKeyDocument();
  
  HsmKeyDocument(const HsmKeyDocument& from);
  
  inline HsmKeyDocument& operator=(const HsmKeyDocument& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const HsmKeyDocument& default_instance();
  void Swap(HsmKeyDocument* other);
  
  // implements Message ----------------------------------------------
  
  HsmKeyDocument* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const HsmKeyDocument& from);
  void MergeFrom(const HsmKeyDocument& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const { _cached_size_ = size; }
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // repeated .ods.hsmkey.HsmKey keys = 1;
  inline int keys_size() const;
  inline void clear_keys();
  static const int kKeysFieldNumber = 1;
  inline const ::google::protobuf::RepeatedPtrField< ::ods::hsmkey::HsmKey >& keys() const;
  inline ::google::protobuf::RepeatedPtrField< ::ods::hsmkey::HsmKey >* mutable_keys();
  inline const ::ods::hsmkey::HsmKey& keys(int index) const;
  inline ::ods::hsmkey::HsmKey* mutable_keys(int index);
  inline ::ods::hsmkey::HsmKey* add_keys();
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::RepeatedPtrField< ::ods::hsmkey::HsmKey > keys_;
  friend void  protobuf_AddDesc_hsmkey_2eproto();
  friend void protobuf_AssignDesc_hsmkey_2eproto();
  friend void protobuf_ShutdownFile_hsmkey_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static HsmKeyDocument* default_instance_;
};
// -------------------------------------------------------------------

class HsmKey : public ::google::protobuf::Message {
 public:
  HsmKey();
  virtual ~HsmKey();
  
  HsmKey(const HsmKey& from);
  
  inline HsmKey& operator=(const HsmKey& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const HsmKey& default_instance();
  void Swap(HsmKey* other);
  
  // implements Message ----------------------------------------------
  
  HsmKey* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const HsmKey& from);
  void MergeFrom(const HsmKey& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const { _cached_size_ = size; }
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required string locator = 1;
  inline bool has_locator() const;
  inline void clear_locator();
  static const int kLocatorFieldNumber = 1;
  inline const ::std::string& locator() const;
  inline void set_locator(const ::std::string& value);
  inline void set_locator(const char* value);
  inline void set_locator(const char* value, size_t size);
  inline ::std::string* mutable_locator();
  
  // optional bool candidate_for_sharing = 2 [default = false];
  inline bool has_candidate_for_sharing() const;
  inline void clear_candidate_for_sharing();
  static const int kCandidateForSharingFieldNumber = 2;
  inline bool candidate_for_sharing() const;
  inline void set_candidate_for_sharing(bool value);
  
  // optional uint32 bits = 3 [default = 2048];
  inline bool has_bits() const;
  inline void clear_bits();
  static const int kBitsFieldNumber = 3;
  inline ::google::protobuf::uint32 bits() const;
  inline void set_bits(::google::protobuf::uint32 value);
  
  // optional string policy = 4 [default = "default"];
  inline bool has_policy() const;
  inline void clear_policy();
  static const int kPolicyFieldNumber = 4;
  inline const ::std::string& policy() const;
  inline void set_policy(const ::std::string& value);
  inline void set_policy(const char* value);
  inline void set_policy(const char* value, size_t size);
  inline ::std::string* mutable_policy();
  
  // optional uint32 algorithm = 5 [default = 1];
  inline bool has_algorithm() const;
  inline void clear_algorithm();
  static const int kAlgorithmFieldNumber = 5;
  inline ::google::protobuf::uint32 algorithm() const;
  inline void set_algorithm(::google::protobuf::uint32 value);
  
  // optional .ods.hsmkey.keyrole role = 6 [default = ZSK];
  inline bool has_role() const;
  inline void clear_role();
  static const int kRoleFieldNumber = 6;
  inline ods::hsmkey::keyrole role() const;
  inline void set_role(ods::hsmkey::keyrole value);
  
  // repeated string used_by_zones = 7;
  inline int used_by_zones_size() const;
  inline void clear_used_by_zones();
  static const int kUsedByZonesFieldNumber = 7;
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& used_by_zones() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_used_by_zones();
  inline const ::std::string& used_by_zones(int index) const;
  inline ::std::string* mutable_used_by_zones(int index);
  inline void set_used_by_zones(int index, const ::std::string& value);
  inline void set_used_by_zones(int index, const char* value);
  inline void set_used_by_zones(int index, const char* value, size_t size);
  inline ::std::string* add_used_by_zones();
  inline void add_used_by_zones(const ::std::string& value);
  inline void add_used_by_zones(const char* value);
  inline void add_used_by_zones(const char* value, size_t size);
  
  // optional uint32 inception = 8;
  inline bool has_inception() const;
  inline void clear_inception();
  static const int kInceptionFieldNumber = 8;
  inline ::google::protobuf::uint32 inception() const;
  inline void set_inception(::google::protobuf::uint32 value);
  
  // optional bool revoke = 9 [default = false];
  inline bool has_revoke() const;
  inline void clear_revoke();
  static const int kRevokeFieldNumber = 9;
  inline bool revoke() const;
  inline void set_revoke(bool value);
  
  // optional string algorithm_name = 10;
  inline bool has_algorithm_name() const;
  inline void clear_algorithm_name();
  static const int kAlgorithmNameFieldNumber = 10;
  inline const ::std::string& algorithm_name() const;
  inline void set_algorithm_name(const ::std::string& value);
  inline void set_algorithm_name(const char* value);
  inline void set_algorithm_name(const char* value, size_t size);
  inline ::std::string* mutable_algorithm_name();
  
  // optional string hsm_name = 11;
  inline bool has_hsm_name() const;
  inline void clear_hsm_name();
  static const int kHsmNameFieldNumber = 11;
  inline const ::std::string& hsm_name() const;
  inline void set_hsm_name(const ::std::string& value);
  inline void set_hsm_name(const char* value);
  inline void set_hsm_name(const char* value, size_t size);
  inline ::std::string* mutable_hsm_name();
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::std::string* locator_;
  static const ::std::string _default_locator_;
  bool candidate_for_sharing_;
  ::google::protobuf::uint32 bits_;
  ::std::string* policy_;
  static const ::std::string _default_policy_;
  ::google::protobuf::uint32 algorithm_;
  int role_;
  ::google::protobuf::RepeatedPtrField< ::std::string> used_by_zones_;
  ::google::protobuf::uint32 inception_;
  bool revoke_;
  ::std::string* algorithm_name_;
  static const ::std::string _default_algorithm_name_;
  ::std::string* hsm_name_;
  static const ::std::string _default_hsm_name_;
  friend void  protobuf_AddDesc_hsmkey_2eproto();
  friend void protobuf_AssignDesc_hsmkey_2eproto();
  friend void protobuf_ShutdownFile_hsmkey_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(11 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static HsmKey* default_instance_;
};
// ===================================================================


// ===================================================================


// ===================================================================

// HsmKeyDocument

// repeated .ods.hsmkey.HsmKey keys = 1;
inline int HsmKeyDocument::keys_size() const {
  return keys_.size();
}
inline void HsmKeyDocument::clear_keys() {
  keys_.Clear();
}
inline const ::google::protobuf::RepeatedPtrField< ::ods::hsmkey::HsmKey >&
HsmKeyDocument::keys() const {
  return keys_;
}
inline ::google::protobuf::RepeatedPtrField< ::ods::hsmkey::HsmKey >*
HsmKeyDocument::mutable_keys() {
  return &keys_;
}
inline const ::ods::hsmkey::HsmKey& HsmKeyDocument::keys(int index) const {
  return keys_.Get(index);
}
inline ::ods::hsmkey::HsmKey* HsmKeyDocument::mutable_keys(int index) {
  return keys_.Mutable(index);
}
inline ::ods::hsmkey::HsmKey* HsmKeyDocument::add_keys() {
  return keys_.Add();
}

// -------------------------------------------------------------------

// HsmKey

// required string locator = 1;
inline bool HsmKey::has_locator() const {
  return _has_bit(0);
}
inline void HsmKey::clear_locator() {
  if (locator_ != &_default_locator_) {
    locator_->clear();
  }
  _clear_bit(0);
}
inline const ::std::string& HsmKey::locator() const {
  return *locator_;
}
inline void HsmKey::set_locator(const ::std::string& value) {
  _set_bit(0);
  if (locator_ == &_default_locator_) {
    locator_ = new ::std::string;
  }
  locator_->assign(value);
}
inline void HsmKey::set_locator(const char* value) {
  _set_bit(0);
  if (locator_ == &_default_locator_) {
    locator_ = new ::std::string;
  }
  locator_->assign(value);
}
inline void HsmKey::set_locator(const char* value, size_t size) {
  _set_bit(0);
  if (locator_ == &_default_locator_) {
    locator_ = new ::std::string;
  }
  locator_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* HsmKey::mutable_locator() {
  _set_bit(0);
  if (locator_ == &_default_locator_) {
    locator_ = new ::std::string;
  }
  return locator_;
}

// optional bool candidate_for_sharing = 2 [default = false];
inline bool HsmKey::has_candidate_for_sharing() const {
  return _has_bit(1);
}
inline void HsmKey::clear_candidate_for_sharing() {
  candidate_for_sharing_ = false;
  _clear_bit(1);
}
inline bool HsmKey::candidate_for_sharing() const {
  return candidate_for_sharing_;
}
inline void HsmKey::set_candidate_for_sharing(bool value) {
  _set_bit(1);
  candidate_for_sharing_ = value;
}

// optional uint32 bits = 3 [default = 2048];
inline bool HsmKey::has_bits() const {
  return _has_bit(2);
}
inline void HsmKey::clear_bits() {
  bits_ = 2048u;
  _clear_bit(2);
}
inline ::google::protobuf::uint32 HsmKey::bits() const {
  return bits_;
}
inline void HsmKey::set_bits(::google::protobuf::uint32 value) {
  _set_bit(2);
  bits_ = value;
}

// optional string policy = 4 [default = "default"];
inline bool HsmKey::has_policy() const {
  return _has_bit(3);
}
inline void HsmKey::clear_policy() {
  if (policy_ != &_default_policy_) {
    policy_->assign(_default_policy_);
  }
  _clear_bit(3);
}
inline const ::std::string& HsmKey::policy() const {
  return *policy_;
}
inline void HsmKey::set_policy(const ::std::string& value) {
  _set_bit(3);
  if (policy_ == &_default_policy_) {
    policy_ = new ::std::string;
  }
  policy_->assign(value);
}
inline void HsmKey::set_policy(const char* value) {
  _set_bit(3);
  if (policy_ == &_default_policy_) {
    policy_ = new ::std::string;
  }
  policy_->assign(value);
}
inline void HsmKey::set_policy(const char* value, size_t size) {
  _set_bit(3);
  if (policy_ == &_default_policy_) {
    policy_ = new ::std::string;
  }
  policy_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* HsmKey::mutable_policy() {
  _set_bit(3);
  if (policy_ == &_default_policy_) {
    policy_ = new ::std::string(_default_policy_);
  }
  return policy_;
}

// optional uint32 algorithm = 5 [default = 1];
inline bool HsmKey::has_algorithm() const {
  return _has_bit(4);
}
inline void HsmKey::clear_algorithm() {
  algorithm_ = 1u;
  _clear_bit(4);
}
inline ::google::protobuf::uint32 HsmKey::algorithm() const {
  return algorithm_;
}
inline void HsmKey::set_algorithm(::google::protobuf::uint32 value) {
  _set_bit(4);
  algorithm_ = value;
}

// optional .ods.hsmkey.keyrole role = 6 [default = ZSK];
inline bool HsmKey::has_role() const {
  return _has_bit(5);
}
inline void HsmKey::clear_role() {
  role_ = 2;
  _clear_bit(5);
}
inline ods::hsmkey::keyrole HsmKey::role() const {
  return static_cast< ods::hsmkey::keyrole >(role_);
}
inline void HsmKey::set_role(ods::hsmkey::keyrole value) {
  GOOGLE_DCHECK(ods::hsmkey::keyrole_IsValid(value));
  _set_bit(5);
  role_ = value;
}

// repeated string used_by_zones = 7;
inline int HsmKey::used_by_zones_size() const {
  return used_by_zones_.size();
}
inline void HsmKey::clear_used_by_zones() {
  used_by_zones_.Clear();
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
HsmKey::used_by_zones() const {
  return used_by_zones_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
HsmKey::mutable_used_by_zones() {
  return &used_by_zones_;
}
inline const ::std::string& HsmKey::used_by_zones(int index) const {
  return used_by_zones_.Get(index);
}
inline ::std::string* HsmKey::mutable_used_by_zones(int index) {
  return used_by_zones_.Mutable(index);
}
inline void HsmKey::set_used_by_zones(int index, const ::std::string& value) {
  used_by_zones_.Mutable(index)->assign(value);
}
inline void HsmKey::set_used_by_zones(int index, const char* value) {
  used_by_zones_.Mutable(index)->assign(value);
}
inline void HsmKey::set_used_by_zones(int index, const char* value, size_t size) {
  used_by_zones_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* HsmKey::add_used_by_zones() {
  return used_by_zones_.Add();
}
inline void HsmKey::add_used_by_zones(const ::std::string& value) {
  used_by_zones_.Add()->assign(value);
}
inline void HsmKey::add_used_by_zones(const char* value) {
  used_by_zones_.Add()->assign(value);
}
inline void HsmKey::add_used_by_zones(const char* value, size_t size) {
  used_by_zones_.Add()->assign(reinterpret_cast<const char*>(value), size);
}

// optional uint32 inception = 8;
inline bool HsmKey::has_inception() const {
  return _has_bit(7);
}
inline void HsmKey::clear_inception() {
  inception_ = 0u;
  _clear_bit(7);
}
inline ::google::protobuf::uint32 HsmKey::inception() const {
  return inception_;
}
inline void HsmKey::set_inception(::google::protobuf::uint32 value) {
  _set_bit(7);
  inception_ = value;
}

// optional bool revoke = 9 [default = false];
inline bool HsmKey::has_revoke() const {
  return _has_bit(8);
}
inline void HsmKey::clear_revoke() {
  revoke_ = false;
  _clear_bit(8);
}
inline bool HsmKey::revoke() const {
  return revoke_;
}
inline void HsmKey::set_revoke(bool value) {
  _set_bit(8);
  revoke_ = value;
}

// optional string algorithm_name = 10;
inline bool HsmKey::has_algorithm_name() const {
  return _has_bit(9);
}
inline void HsmKey::clear_algorithm_name() {
  if (algorithm_name_ != &_default_algorithm_name_) {
    algorithm_name_->clear();
  }
  _clear_bit(9);
}
inline const ::std::string& HsmKey::algorithm_name() const {
  return *algorithm_name_;
}
inline void HsmKey::set_algorithm_name(const ::std::string& value) {
  _set_bit(9);
  if (algorithm_name_ == &_default_algorithm_name_) {
    algorithm_name_ = new ::std::string;
  }
  algorithm_name_->assign(value);
}
inline void HsmKey::set_algorithm_name(const char* value) {
  _set_bit(9);
  if (algorithm_name_ == &_default_algorithm_name_) {
    algorithm_name_ = new ::std::string;
  }
  algorithm_name_->assign(value);
}
inline void HsmKey::set_algorithm_name(const char* value, size_t size) {
  _set_bit(9);
  if (algorithm_name_ == &_default_algorithm_name_) {
    algorithm_name_ = new ::std::string;
  }
  algorithm_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* HsmKey::mutable_algorithm_name() {
  _set_bit(9);
  if (algorithm_name_ == &_default_algorithm_name_) {
    algorithm_name_ = new ::std::string;
  }
  return algorithm_name_;
}

// optional string hsm_name = 11;
inline bool HsmKey::has_hsm_name() const {
  return _has_bit(10);
}
inline void HsmKey::clear_hsm_name() {
  if (hsm_name_ != &_default_hsm_name_) {
    hsm_name_->clear();
  }
  _clear_bit(10);
}
inline const ::std::string& HsmKey::hsm_name() const {
  return *hsm_name_;
}
inline void HsmKey::set_hsm_name(const ::std::string& value) {
  _set_bit(10);
  if (hsm_name_ == &_default_hsm_name_) {
    hsm_name_ = new ::std::string;
  }
  hsm_name_->assign(value);
}
inline void HsmKey::set_hsm_name(const char* value) {
  _set_bit(10);
  if (hsm_name_ == &_default_hsm_name_) {
    hsm_name_ = new ::std::string;
  }
  hsm_name_->assign(value);
}
inline void HsmKey::set_hsm_name(const char* value, size_t size) {
  _set_bit(10);
  if (hsm_name_ == &_default_hsm_name_) {
    hsm_name_ = new ::std::string;
  }
  hsm_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* HsmKey::mutable_hsm_name() {
  _set_bit(10);
  if (hsm_name_ == &_default_hsm_name_) {
    hsm_name_ = new ::std::string;
  }
  return hsm_name_;
}


}  // namespace hsmkey
}  // namespace ods

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ods::hsmkey::keyrole>() {
  return ods::hsmkey::keyrole_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

#endif  // PROTOBUF_hsmkey_2eproto__INCLUDED
