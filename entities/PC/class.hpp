#pragma once

#include <iostream>
#include "..\..\spell.hpp"
#include "..\..\list.hpp"
#include "..\..\stats.hpp"

class PCClass{
private:
  List<spell> listSpell;
  stats classBaseStats;
public:
  PCClass() : listSpell(), classBaseStats() {}
  PCClass(const List<spell> &refListSpell, const stats& refClassBaseStats) : listSpell(refListSpell), classBaseStats(refClassBaseStats) {}
  PCClass(const PCClass& ref) : listSpell(ref.getListSpell()), classBaseStats(ref.getClassBaseStats()){}
  List<spell> getListSpell()const{return listSpell;}
  stats getClassBaseStats()const{return classBaseStats;}
  void setListSpell(List<spell> ref){listSpell = ref;}
  void setClassBaseStats(stats ref){classBaseStats = ref;}
};
