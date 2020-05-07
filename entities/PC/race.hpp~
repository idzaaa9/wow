#pragma once

#include <iostream>
#include "..\..\list.hpp"
#include "..\..\skill.hpp"
#include "..\..\stats.hpp"
#include "..\..\dinstring.hpp"

class PCRace{
private:
  List<skill> listSkill;
  stats raceBaseStats;
  DinString MModel, FModel;
public:
  PCRace() : listSkill(), raceBaseStats(), MModel(), FModel() {}
  PCRace(const List<skill> &refListSkill, const stats& refRaceBaseStats, const DinString& refMModel, const DinString& refFModel) : listSkill(refListSkill), raceBaseStats(refRaceBaseStats), MModel(refMModel), FModel(refFModel) {}
  PCRace(const PCRace& ref) : listSkill(ref.getListSkill()), raceBaseStats(ref.getRaceBaseStats()), MModel(ref.getMModel()), FModel(ref.getFModel()){}
  List<skill> getListSkill()const{return listSkill;}
  stats getRaceBaseStats()const{return raceBaseStats;}
  void setListSkill(List<skill> ref){listSkill = ref;}
  void setRaceBaseStats(stats ref){raceBaseStats = ref;}
  DinString getMModel()const{return MModel;}
  DinString getFModel()const{return FModel;}
  void setMModel(DinString ref){MModel = ref;}
  void setFModel(DinString ref){FModel = ref;}
};
