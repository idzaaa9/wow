#pragma once

#include <iostream>
#include "dinstring.hpp"

class skill{
private:
  DinString name, skillinfo;
public:
  skill() : name(), skillinfo() {}
  skill(const DinString& refName, const DinString& refSkillinfo) : name(refName), skillinfo(refSkillinfo){}
  skill(const skill& ref) : name(ref.getName()), skillinfo(ref.getSkillinfo()){}
  DinString getName()const{return name;}
  DinString getSkillinfo()const{return skillinfo;}
  void setName(DinString ref){name = ref;}
  void setSkillinfo(DinString ref){skillinfo = ref;}
};//placeholder
