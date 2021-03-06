#pragma once

#include <iostream>
#include "character.hpp"
#include "../quest.hpp"
#include "../list.hpp"
#include "..\dinstring.hpp"

class Quest;

class NPC : public Character{
private:
  List<Quest> listQuest;
  DinString title;
public:
  NPC() : Character(), listQuest(), title(){}
  NPC(const Character& refChar, const List<Quest>& refListQuest, const DinString& refTitle) : Character(refChar), listQuest(refListQuest), title(refTitle){}
  NPC(const NPC& ref) : Character(ref.getLevel(), ref.getListSkill(), ref.getPosition(), ref.getModel(), ref.getFac(), ref.getName()), listQuest(ref.getListQuest()), title(ref.getTitle()){}
  List<Quest> getListQuest()const{return listQuest;}
  DinString getTitle()const{return title;}
  void setListQuest(List<Quest> ref){listQuest = ref;}
  void setTitle(DinString ref){title = ref;}
};
