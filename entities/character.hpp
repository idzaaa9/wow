#pragma once

#include <iostream>
#include "../list.hpp"
#include "..\skill.hpp"
#include "..\dinstring.hpp"
#include "..\xyz.hpp"
#include "../faction.hpp"

class Character{
private:
  short unsigned level;
  List<skill> listSkill;
  Point position;
  DinString model;
  Faction fac;
  DinString name;
public:
  Character() : level(0), listSkill(), position(), model(), fac(FNULL), name(){}
  Character(const unsigned short& refLevel, const List<skill>& refListSkill, Point refPosition, const DinString& refModel, Faction refFac, const DinString& refName) : level(refLevel), listSkill(refListSkill), position(refPosition), model(refModel), fac(refFac), name(refName) {}
  Character(const Character& ref) : position(ref.getPosition()), model(ref.getModel()), fac(ref.getFac()), level(ref.getLevel()), listSkill(ref.getListSkill()), name(ref.getName()){}
  short unsigned getLevel()const{return level;}
  List<skill> getListSkill()const{return listSkill;}
  void setLevel(short unsigned ref){level = ref;}
  void setListSkill(List<skill> ref){listSkill = ref;}
  Point getPosition()const{return position;}
  DinString getModel()const{return model;}
  Faction getFac()const{return fac;}
  void setPosition(Point ref){position = ref;}
  void setModel(DinString ref){model = ref;}
  void setFac(Faction ref){fac = ref;}
  DinString getName()const{return name;}
  void setName(DinString ref){name = ref;}
};