/*#pragma once

#include <iostream>
#include "xyz.hpp"
#include "dinstring.hpp"

enum Faction{ALLIANCE, HORDE, NEUTRAL, FNULL};
class Entity{
private:
  Point position;
  DinString model;
  Faction fac;
public:
  Entity() : position(), model(), fac(FNULL){}
  Entity(Point refPosition, const DinString& refModel, Faction refFac) : position(refPosition), model(refModel), fac(refFac){}
  Entity(const Entity& ref) : position(ref.getPosition()), model(ref.getModel()), fac(ref.getFac()){}
  Point getPosition()const{return position;}
  DinString getModel()const{return model;}
  Faction getFac()const{return fac;}
  void setPosition(Point ref){position = ref;}
  void setModel(DinString ref){model = ref;}
  void setFac(Faction ref){fac = ref;}
};
*/
