#pragma once

#include <iostream>
#include "dinstring.hpp"


enum itemType{ARMOR, CONSUMABLE, CONTAINER, MISC, REAGENT, RECIPE, PROJECTILE, WEAPON, TNULL};
enum itemQuality{POOR, COMMON, UNCOMMON, RARE, EPIC, LEGENDARY, ARTIFACT, QNULL};
class item{
private:
  const itemType Type;
  itemQuality Quality;
  unsigned short stackSize;
  int Value;
  bool Soulbound;
  DinString ItemName;
public:
  item() : stackSize(0), Value(-1), Soulbound(NULL), ItemName(), Type(TNULL), Quality(QNULL){}
  item(itemType T) : stackSize(0), Value(-1), Soulbound(NULL), ItemName(), Type(T), Quality(QNULL){}
  item( itemType itemTypeRef,  itemQuality itemQualityRef,  unsigned short stackSizeRef,  int valueRef,  bool soulboundRef,const DinString& NameRef) : stackSize(stackSizeRef), Value(valueRef), Soulbound(soulboundRef), ItemName(NameRef), Type(itemTypeRef), Quality(itemQualityRef) {}
  item(const item& ref) : stackSize(ref.getStackSize()), Value(ref.getValue()), Soulbound(ref.getSoulbound()), ItemName(ref.getName()), Type(ref.getType()), Quality(ref.getQuality()) {}
  itemType getType()const{return Type;}
  itemQuality getQuality()const{return Quality;}
  unsigned short getStackSize()const{return stackSize;}
  int getValue()const{return Value;}
  bool getSoulbound()const{return Soulbound;}
  DinString getName()const{return ItemName;}
  void setQuality(itemQuality ref){Quality = ref;}
  void setStackSize(unsigned short ref){stackSize = ref;}
  void setValue(int ref){Value = ref;}
  void setSoulbound(bool ref){Soulbound = ref;}
  void setName(DinString ref){ItemName = ref;}
};
