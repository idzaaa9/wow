#pragma once

#include <iostream>
#include "..\..\skill.hpp"
#include "..\..\list.hpp"
#include "..\..\stats.hpp"

class PCClass{
private:
  List<skill> listSkill;
  stats classBaseStats;
public:
  PCClass() : listSkill(), classBaseStats() {}
  PCClass(const List<skill> &refListSkill, const stats& refClassBaseStats) : listSkill(refListSkill), classBaseStats(refClassBaseStats) {}
  PCClass(const PCClass& ref) : listSkill(ref.getListSkill()), classBaseStats(ref.getClassBaseStats()){}
  List<skill> getListSkill()const{return listSkill;}
  stats getClassBaseStats()const{return classBaseStats;}
  void setListSkill(List<skill> ref){listSkill = ref;}
  void setClassBaseStats(stats ref){classBaseStats = ref;}
};
