#pragma once

#include <iostream>
#include "..\item.hpp"

class itemContainer : public item{
private:
  int itemSlot;
public:
  itemContainer() : item(CONTAINER), itemSlot(-1){}
  itemContainer(itemQuality refQuality, const int& refValue, bool refSoulbound, const DinString& refItemName,  const int& refBagSlot) : item(CONTAINER, refQuality, 1, refValue, refSoulbound, refItemName), itemSlot(refBagSlot) {}
  itemContainer(const itemContainer& ref) : item(CONTAINER, ref.getQuality(), 1, ref.getValue(), ref.getSoulbound(), ref.getName()), itemSlot(ref.getItemSlot()) {}
  int getItemSlot()const{return itemSlot;}
  void setItemSlot(int ref){itemSlot = ref;}
};
