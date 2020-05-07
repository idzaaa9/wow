#pragma once

#include <iostream>
#include "entities/npc.hpp"
#include "dinstring.hpp"

class NPC;

class Quest{
private:
  DinString Qname;
  const NPC *QStart, *QEnd;
  unsigned short QMinLvl;
public:
  Quest() : Qname(), QStart(), QEnd(), QMinLvl(0){}
  Quest(const DinString& refName, const NPC& refQStart, const NPC& refQEnd, const unsigned short& refQMinLvl) : Qname(refName), QStart(&refQStart), QEnd(&refQEnd), QMinLvl(refQMinLvl){}
  Quest(const Quest& ref) : Qname(ref.getQname()), QStart(ref.getQStart()), QEnd(ref.getQEnd()), QMinLvl(ref.getQMinLvl()){}
  DinString getQname()const{return Qname;}
  const NPC* getQStart()const{return QStart;}
  const NPC* getQEnd()const{return QEnd;}
  unsigned short getQMinLvl()const{return QMinLvl;}
  void setQname(DinString ref){Qname = ref;}
  void setQStart(const NPC &ref){QStart = &ref;}
  void setQEnd(const NPC &ref){QEnd = &ref;}
  void setQMinLvl(unsigned short ref){QMinLvl = ref;}
};
