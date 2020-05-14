#pragma once

#include <iostream>
#include "../list.hpp"
#include "../spell/spell.hpp"
#include "..\dinstring.hpp"
#include "..\xyz.hpp"
#include "../faction.hpp"

class Character{
private:
  short unsigned level;
  List<spell> listSpell;
  Point position;
  DinString model;
  Faction fac;
  DinString name;
public:
  Character() : level(0), listSpell(), position(), model(), fac(FNULL), name(){}
  Character(const unsigned short& refLevel, const List<spell>& refListSpell, Point refPosition, const DinString& refModel, Faction refFac, const DinString& refName) : level(refLevel), listSpell(refListSpell), position(refPosition), model(refModel), fac(refFac), name(refName) {}
  Character(const Character& ref) : position(ref.getPosition()), model(ref.getModel()), fac(ref.getFac()), level(ref.getLevel()), listSpell(ref.getListSpell()), name(ref.getName()){}
  short unsigned getLevel()const{return level;}
  List<spell> getListSpell()const{return listSpell;}
  void setLevel(short unsigned ref){level = ref;}
  void setListSpell(List<spell> ref){listSpell = ref;}
  Point getPosition()const{return position;}
  DinString getModel()const{return model;}
  Faction getFac()const{return fac;}
  void setPosition(Point ref){position = ref;}
  void setModel(DinString ref){model = ref;}
  void setFac(Faction ref){fac = ref;}
  DinString getName()const{return name;}
  void setName(DinString ref){name = ref;}
};
