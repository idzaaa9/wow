#pragma once

#include <iostream>
#include "character.hpp"
#include "..\stats.hpp"
#include "..\list.hpp"
#include <map>
#include "..\item.hpp"

enum Agressivity{FRIENDLY, AGRESSIVE, PASSIVE, ANULL};
class Mob : public Character{
private:
  std::map<item, float> lootTable;
  Agressivity mobAgr;
  stats mobStats;
public:
  Mob() : Character(), lootTable(), mobAgr(ANULL), mobStats(){}
  Mob(const Character& refCharacter, const std::map<item, float>& refLootTable, Agressivity refAgr, const stats& refStats) : Character(refCharacter), lootTable(refLootTable), mobAgr(refAgr), mobStats(refStats) {}
  Mob(const Mob& ref) : Character(ref.getLevel(), ref.getListSkill(), ref.getPosition(), ref.getModel(), ref.getFac(), ref.getName()), lootTable(ref.getLootTable()), mobAgr(ref.getAgr()), mobStats(ref.getMobStats()){}
  std::map<item, float> getLootTable()const{return lootTable;}
  Agressivity getAgr()const{return mobAgr;}
  stats getMobStats()const{return mobStats;}
  void setLootTable(std::map<item, float> ref){lootTable = ref;}
  void setAgressivity(Agressivity ref){mobAgr = ref;}
  void setMobStats(stats ref){mobStats = ref;}
};
