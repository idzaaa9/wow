#pragma once

#include <iostream>
#include "item.hpp"
#include "stats.hpp"

enum wpnType{AXE1H, AXE2H, BOW, CBOW, DAG, FWEP, GUN, MACE1H, MACE2H, PARM, STAFF, SWORD1H, SWORD2H, TWEP, WAND, WNULL};
enum wpnSlot{MAINHAND, OFFHAND, BOTH, WSNULL};
class weapon : public item{
private:
  stats wpnStats;
  float wpnDmg, wpnAs;
  wpnType type;
  unsigned short minLvl;
  wpnSlot slot;
public:
  weapon() : item(WEAPON), minLvl(0), wpnStats(), slot(WSNULL), wpnDmg(0), wpnAs(0), type(WNULL){}
  weapon(const int& refValue, itemQuality refQuality, bool refSoulbound, const DinString& refName, wpnSlot refSlot, const stats& refStats, const unsigned short& refLvl) : item(WEAPON, refQuality, 1, refValue, refSoulbound, refName), slot(refSlot), wpnStats(refStats), minLvl(refLvl) {}
  weapon(const weapon& ref) : item(WEAPON, ref.getQuality(), 1, ref.getValue(), ref.getSoulbound(), ref.getName()), slot(ref.getSlot()), wpnStats(ref.getWpnStats()), minLvl(ref.getLvl()), wpnDmg(ref.getWpnDmg()), wpnAs(ref.getWpnAs()), type(ref.getWpnType()) {}
  stats getWpnStats()const{return wpnStats;}
  float getWpnDmg()const{return wpnDmg;}
  float getWpnAs()const{return wpnAs;}
  wpnType getWpnType()const{return type;}
  unsigned short getLvl()const{return minLvl;}
  wpnSlot getSlot()const{return slot;}
  void setWpnStats(const stats& ref){wpnStats = ref;}
  void setWpnDmg(const float& ref){wpnDmg = ref;}
  void setWpnAs(const float& ref){wpnAs = ref;}
  void setWpnType(wpnType ref){type = ref;}
  void setLvl(const unsigned short &ref){minLvl = ref;}
  void setSlot(wpnSlot ref){slot = ref;}
};
