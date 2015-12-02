/**
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "data_resource_models_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace apache { namespace airavata { namespace model { namespace data { namespace resource {


ResourceModel::~ResourceModel() throw() {
}


void ResourceModel::__set_resourceId(const std::string& val) {
  this->resourceId = val;
__isset.resourceId = true;
}

void ResourceModel::__set_resourceName(const std::string& val) {
  this->resourceName = val;
__isset.resourceName = true;
}

void ResourceModel::__set_replicaLocations(const std::vector<ReplicaLocationModel> & val) {
  this->replicaLocations = val;
}

const char* ResourceModel::ascii_fingerprint = "D638A8293F444DF2C34755C1D925146E";
const uint8_t ResourceModel::binary_fingerprint[16] = {0xD6,0x38,0xA8,0x29,0x3F,0x44,0x4D,0xF2,0xC3,0x47,0x55,0xC1,0xD9,0x25,0x14,0x6E};

uint32_t ResourceModel::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->resourceId);
          this->__isset.resourceId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->resourceName);
          this->__isset.resourceName = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->replicaLocations.clear();
            uint32_t _size0;
            ::apache::thrift::protocol::TType _etype3;
            xfer += iprot->readListBegin(_etype3, _size0);
            this->replicaLocations.resize(_size0);
            uint32_t _i4;
            for (_i4 = 0; _i4 < _size0; ++_i4)
            {
              xfer += this->replicaLocations[_i4].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.replicaLocations = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t ResourceModel::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("ResourceModel");

  if (this->__isset.resourceId) {
    xfer += oprot->writeFieldBegin("resourceId", ::apache::thrift::protocol::T_STRING, 1);
    xfer += oprot->writeString(this->resourceId);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.resourceName) {
    xfer += oprot->writeFieldBegin("resourceName", ::apache::thrift::protocol::T_STRING, 2);
    xfer += oprot->writeString(this->resourceName);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldBegin("replicaLocations", ::apache::thrift::protocol::T_LIST, 3);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->replicaLocations.size()));
    std::vector<ReplicaLocationModel> ::const_iterator _iter5;
    for (_iter5 = this->replicaLocations.begin(); _iter5 != this->replicaLocations.end(); ++_iter5)
    {
      xfer += (*_iter5).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(ResourceModel &a, ResourceModel &b) {
  using ::std::swap;
  swap(a.resourceId, b.resourceId);
  swap(a.resourceName, b.resourceName);
  swap(a.replicaLocations, b.replicaLocations);
  swap(a.__isset, b.__isset);
}

ResourceModel::ResourceModel(const ResourceModel& other6) {
  resourceId = other6.resourceId;
  resourceName = other6.resourceName;
  replicaLocations = other6.replicaLocations;
  __isset = other6.__isset;
}
ResourceModel& ResourceModel::operator=(const ResourceModel& other7) {
  resourceId = other7.resourceId;
  resourceName = other7.resourceName;
  replicaLocations = other7.replicaLocations;
  __isset = other7.__isset;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const ResourceModel& obj) {
  using apache::thrift::to_string;
  out << "ResourceModel(";
  out << "resourceId="; (obj.__isset.resourceId ? (out << to_string(obj.resourceId)) : (out << "<null>"));
  out << ", " << "resourceName="; (obj.__isset.resourceName ? (out << to_string(obj.resourceName)) : (out << "<null>"));
  out << ", " << "replicaLocations=" << to_string(obj.replicaLocations);
  out << ")";
  return out;
}


ReplicaLocationModel::~ReplicaLocationModel() throw() {
}


void ReplicaLocationModel::__set_physicalLocations(const std::vector<std::string> & val) {
  this->physicalLocations = val;
__isset.physicalLocations = true;
}

const char* ReplicaLocationModel::ascii_fingerprint = "6A3474ADDA840BE2091105F0DFB630C7";
const uint8_t ReplicaLocationModel::binary_fingerprint[16] = {0x6A,0x34,0x74,0xAD,0xDA,0x84,0x0B,0xE2,0x09,0x11,0x05,0xF0,0xDF,0xB6,0x30,0xC7};

uint32_t ReplicaLocationModel::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->physicalLocations.clear();
            uint32_t _size8;
            ::apache::thrift::protocol::TType _etype11;
            xfer += iprot->readListBegin(_etype11, _size8);
            this->physicalLocations.resize(_size8);
            uint32_t _i12;
            for (_i12 = 0; _i12 < _size8; ++_i12)
            {
              xfer += iprot->readString(this->physicalLocations[_i12]);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.physicalLocations = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t ReplicaLocationModel::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("ReplicaLocationModel");

  if (this->__isset.physicalLocations) {
    xfer += oprot->writeFieldBegin("physicalLocations", ::apache::thrift::protocol::T_LIST, 1);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->physicalLocations.size()));
      std::vector<std::string> ::const_iterator _iter13;
      for (_iter13 = this->physicalLocations.begin(); _iter13 != this->physicalLocations.end(); ++_iter13)
      {
        xfer += oprot->writeString((*_iter13));
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(ReplicaLocationModel &a, ReplicaLocationModel &b) {
  using ::std::swap;
  swap(a.physicalLocations, b.physicalLocations);
  swap(a.__isset, b.__isset);
}

ReplicaLocationModel::ReplicaLocationModel(const ReplicaLocationModel& other14) {
  physicalLocations = other14.physicalLocations;
  __isset = other14.__isset;
}
ReplicaLocationModel& ReplicaLocationModel::operator=(const ReplicaLocationModel& other15) {
  physicalLocations = other15.physicalLocations;
  __isset = other15.__isset;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const ReplicaLocationModel& obj) {
  using apache::thrift::to_string;
  out << "ReplicaLocationModel(";
  out << "physicalLocations="; (obj.__isset.physicalLocations ? (out << to_string(obj.physicalLocations)) : (out << "<null>"));
  out << ")";
  return out;
}

}}}}} // namespace
