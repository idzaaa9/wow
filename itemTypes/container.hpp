#pragma once

#include <iostream>
#include "item.hpp"

class itemContainer : public item{
private:
  int bagSlot;
public:
  itemContainer() : item(CONTAINER), bagSlot(-1){}
  itemContainer(itemQuality refQuality, const int& refValue, bool refSoulbound, const DinString& refItemName,  const int& refBagSlot) : item(CONTAINER, refQuality, 1, refValue, refSoulbound, refItemName), bagSlot(refBagSlot) {}
  itemContainer(const itemContainer& ref) : item(CONTAINER, ref.getQuality(), 1, ref.getValue(), ref.getSoulbound(), ref.getName()), bagSlot(ref.getBagSlot()) {}
  int getBagSlot()const{return bagSlot;}
  void setBagSlot(int ref){bagSlot = ref;}
};
