/**
* bridge API generated from bridge.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


/* Do not edit this file manually */

/*
* FdbJsonObject.h
*
*
*/

#pragma once


#include "JsonObjectBase.h"

#include "FdbEntryJsonObject.h"
#include <vector>

namespace polycube {
namespace service {
namespace model {


/// <summary>
///
/// </summary>
class  FdbJsonObject : public JsonObjectBase {
public:
  FdbJsonObject();
  FdbJsonObject(const nlohmann::json &json);
  ~FdbJsonObject() final = default;
  nlohmann::json toJson() const final;


  /// <summary>
  /// Aging time of the filtering database (in seconds)
  /// </summary>
  uint32_t getAgingTime() const;
  void setAgingTime(uint32_t value);
  bool agingTimeIsSet() const;
  void unsetAgingTime();

  /// <summary>
  /// Entry associated with the filtering database
  /// </summary>
  const std::vector<FdbEntryJsonObject>& getEntry() const;
  void addFdbEntry(FdbEntryJsonObject value);
  bool entryIsSet() const;
  void unsetEntry();

private:
  uint32_t m_agingTime;
  bool m_agingTimeIsSet;
  std::vector<FdbEntryJsonObject> m_entry;
  bool m_entryIsSet;
};

}
}
}

