#pragma once

#include <iostream>
#include "item.hpp"
#include "stats.hpp"

enum armorSlot{HEAD, SHOULDERS, CHEST, BACK, LEGS, WRIST, WAIST, FEET, TRINKET, SNULL};
class armor : public item{
private:
  armorSlot slot;
  stats armorStats;
  unsigned short minLvl;
public:
  armor() : item(ARMOR), minLvl(0), armorStats(), slot(SNULL){}
  armor(const int& refValue, itemQuality refQuality, bool refSoulbound, const DinString& refName, armorSlot refSlot, const stats& refStats, const unsigned short& refLvl) : item(ARMOR, refQuality, 1, refValue, refSoulbound, refName), slot(refSlot), armorStats(refStats), minLvl(refLvl) {}
  armor(const armor& ref) : item(ARMOR, ref.getQuality(), 1, ref.getValue(), ref.getSoulbound(), ref.getName()), slot(ref.getSlot()), armorStats(ref.getArmorStats()), minLvl(ref.getLvl()) {}
  armorSlot getSlot()const{return slot;}
  stats getArmorStats()const{return armorStats;}
  unsigned short getLvl()const{return minLvl;}
  void setArmorSlot(armorSlot ref){slot = ref;}
  void setArmorStats(stats ref){armorStats = ref;}
  void setLvl(unsigned short ref){minLvl = ref;}
};
