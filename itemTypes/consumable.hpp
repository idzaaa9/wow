#pragma once

#include <iostream>
#include "..\item.hpp"
#include "..\list.hpp"
#include "..\skill.hpp"

class consumable : public item{
private:
  List<skill> listSkill;
  int CD;
public:
  consumable() : item(CONSUMABLE), listSkill(), CD(-1){}
  consumable(itemQuality refQuality, const unsigned short& refSS, const int& refValue, bool refSoulbound, const DinString& refItemName, const List<skill>& refListSkill, const int& refCD) : item(CONSUMABLE, refQuality, refSS, refValue, refSoulbound, refItemName), listSkill(refListSkill), CD(refCD) {}
  consumable(const consumable& ref) : item(CONSUMABLE, ref.getQuality(), ref.getStackSize(), ref.getValue(), ref.getSoulbound(), ref.getName()), listSkill(ref.getListSkill()), CD(ref.getCD()) {}
  List<skill> getListSkill()const{return listSkill;}
  int getCD()const{return CD;}
  void setListSkill(List<skill> ref){listSkill = ref;}
  void setCD(int ref){CD = ref;}
};
