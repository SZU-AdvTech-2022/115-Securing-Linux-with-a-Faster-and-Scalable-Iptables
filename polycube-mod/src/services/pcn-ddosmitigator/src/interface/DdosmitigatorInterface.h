/**
* ddosmitigator API
* ddosmitigator API generated from ddosmitigator.yang
*
* OpenAPI spec version: 1.0.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */

/*
* DdosmitigatorInterface.h
*
*
*/

#pragma once

#include "../serializer/DdosmitigatorJsonObject.h"

#include "../BlacklistDst.h"
#include "../BlacklistSrc.h"
#include "../Stats.h"

using namespace io::swagger::server::model;

class DdosmitigatorInterface {
public:

  virtual void update(const DdosmitigatorJsonObject &conf) = 0;
  virtual DdosmitigatorJsonObject toJsonObject() = 0;

  /// <summary>
  ///
  /// </summary>
  virtual std::shared_ptr<Stats> getStats() = 0;
  virtual void addStats(const StatsJsonObject &value) = 0;
  virtual void replaceStats(const StatsJsonObject &conf) = 0;
  virtual void delStats() = 0;

  /// <summary>
  /// Blacklisted source IP addresses
  /// </summary>
  virtual std::shared_ptr<BlacklistSrc> getBlacklistSrc(const std::string &ip) = 0;
  virtual std::vector<std::shared_ptr<BlacklistSrc>> getBlacklistSrcList() = 0;
  virtual void addBlacklistSrc(const std::string &ip, const BlacklistSrcJsonObject &conf) = 0;
  virtual void addBlacklistSrcList(const std::vector<BlacklistSrcJsonObject> &conf) = 0;
  virtual void replaceBlacklistSrc(const std::string &ip, const BlacklistSrcJsonObject &conf) = 0;
  virtual void delBlacklistSrc(const std::string &ip) = 0;
  virtual void delBlacklistSrcList() = 0;

  /// <summary>
  /// Blacklisted destination IP addresses
  /// </summary>
  virtual std::shared_ptr<BlacklistDst> getBlacklistDst(const std::string &ip) = 0;
  virtual std::vector<std::shared_ptr<BlacklistDst>> getBlacklistDstList() = 0;
  virtual void addBlacklistDst(const std::string &ip, const BlacklistDstJsonObject &conf) = 0;
  virtual void addBlacklistDstList(const std::vector<BlacklistDstJsonObject> &conf) = 0;
  virtual void replaceBlacklistDst(const std::string &ip, const BlacklistDstJsonObject &conf) = 0;
  virtual void delBlacklistDst(const std::string &ip) = 0;
  virtual void delBlacklistDstList() = 0;
};

