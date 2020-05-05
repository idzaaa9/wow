#pragma once

#include <iostream>
#include "item.hpp"

class misc : public item{
public:
  misc() : item(MISC){}
  misc(itemQuality refQuality, const int& refSS, const int& refValue, bool refSoulbound, const DinString& refItemName) : item(MISC, refQuality, refSS, refValue, refSoulbound, refItemName) {}
  misc(const misc& ref) : item(MISC, ref.getQuality(), ref.getStackSize(), ref.getValue(), ref.getSoulbound(), ref.getName()) {}
};
