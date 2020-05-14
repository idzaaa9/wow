#pragma once

#include <iostream>
#include "..\character.hpp"
#include "race.hpp"
#include "class.hpp"
#include "..\..\itemTypes\armor.hpp"
#include "..\..\itemTypes\weapon.hpp"
#include "..\..\list.hpp"
#include "..\..\itemTypes\container.hpp"
#include "..\..\dinstring.hpp"
#include "profession.hpp"

struct Inventory{
  List<itemContainer> Bags;
  static const int ISize = 5;
  Inventory() : Bags(){}
  Inventory(const List<itemContainer>& ref) : Bags(ref){}
};

class PC: public Character{
private:
  PCClass Class;
  PCRace Race;
  Inventory PCInventory;
  guild PCGuild;
  List<armor> equipArmor;
  List<weapon> equipWeapon;
public:
  PC() : Character(), Class(), Race(), PCInventory(), PCGuild(), equipArmor(), equipWeapon() {}
  PC(const Character& refChar, const PCClass& refClass, const PCRace& refRace, const Inventory& refInventory, const guild& refGuild,
     const List<armor>& refEquipArmor, const List<weapon>& refEquipWeapon) :
	  Character(refChar), Class(refClass), Race(refRace), PCInventory(refInventory), PCGuild(refGuild), equipArmor(refEquipArmor),
	  equipWeapon(refEquipWeapon) {}
  PC(const PC& ref) :
	  Character(ref.getLevel(), ref.getListSkill(), ref.getPosition(), ref.getModel(), ref.getFac(), ref.getName()), Class(ref.getClass()),
	  Race(ref.getRace()), PCInventory(ref.getInventory()), PCGuild(ref.getGuild()), equipArmor(ref.getEquipArmor()),
	  equipWeapon(ref.getEquipWeapon()){}
  PCClass getClass()const{return Class;}
  PCRace getRace()const{return Race;}
  Inventory getInventory()const{return PCInventory;}
  guild getGuild()const{return PCGuild;}
  List<armor> getEquipArmor()const{return equipArmor;}
  List<weapon> getEquipWeapon()const{return equipWeapon;}
  void setClass(PCClass ref){Class = ref;}
  void setRace(PCRace ref){Race = ref;}
  void setInventory(Inventory ref){PCInventory = ref;}
  void setGuild(guild ref){PCGuild = ref;}
  void setEquipArmor(List<armor> ref){equipArmor = ref;}
  void setEquipWeapon(List<weapon> ref){equipWeapon = ref;}
};
