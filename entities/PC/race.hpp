#pragma once

#include <iostream>
#include "..\..\list.hpp"
#include "..\..\spell/spell.hpp"
#include "..\..\stats.hpp"
#include "..\..\dinstring.hpp"

class PCRace{
private:
  List<spell> listSpell;
  stats raceBaseStats;
  DinString MModel, FModel;
public:
  PCRace() : listSpell(), raceBaseStats(), MModel(), FModel() {}
  PCRace(const List<spell> &refListSpell, const stats& refRaceBaseStats, const DinString& refMModel, const DinString& refFModel) : listSpell(refListSpell), raceBaseStats(refRaceBaseStats), MModel(refMModel), FModel(refFModel) {}
  PCRace(const PCRace& ref) : listSpell(ref.getListSpell()), raceBaseStats(ref.getRaceBaseStats()), MModel(ref.getMModel()), FModel(ref.getFModel()){}
  List<spell> getListSpell()const{return listSpell;}
  stats getRaceBaseStats()const{return raceBaseStats;}
  void setListSpell(List<spell> ref){listSpell = ref;}
  void setRaceBaseStats(stats ref){raceBaseStats = ref;}
  DinString getMModel()const{return MModel;}
  DinString getFModel()const{return FModel;}
  void setMModel(DinString ref){MModel = ref;}
  void setFModel(DinString ref){FModel = ref;}
};
