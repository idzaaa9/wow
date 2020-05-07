#include <iostream>

#include "entities/character.hpp"
#include "entities/mob.hpp"
#include "entities/npc.hpp"
#include "entities/PC/class.hpp"
#include "entities/PC/PPC.hpp"
#include "entities/PC/race.hpp"
#include "itemTypes/armor.hpp"
#include "itemTypes/consumable.hpp"
#include "itemTypes/container.hpp"
#include "itemTypes/misc.hpp"
#include "itemTypes/weapon.hpp"
#include "world/kontinent.hpp"
#include "world/mapdata.hpp"
#include "world/planet.hpp"
#include "world/zone.hpp"
#include "dinstring.hpp"
#include "item.hpp"
#include "list.hpp"
#include "quest.hpp"
#include "skill.hpp"
#include "stats.hpp"
#include "test.hpp"
#include "xyz.hpp"
#include "faction.hpp"

#define defcpyctors(c, n)		    \
    c _##c##1;                      \
    c _##c##2(n##1);


int main(){
  double abc[3] = {0, 0, 0};
  Point refPoint(abc);
  List<Point> placeholder;

  subZone StromgardeKeep(placeholder, "Stromgarde Keep");
  City Hammerfall(StromgardeKeep, HORDE);
  List<subZone> SZList;
  SZList.add(1, StromgardeKeep);
  SZList.add(2, Hammerfall);
  Zone ArathiHighlands(placeholder, SZList, "Arathi Highlands", 33, 45);
  List<Zone> ZList;
  ZList.add(1, ArathiHighlands);
  Continent EasternKingdoms(ZList, "Eastern Kingdoms");
  List<Continent> CList;
  CList.add(1, EasternKingdoms);
  Planet Kalimdor(CList, "Azeroth");

  skill someskill("name", "sth");
  List<skill> skillplaceholder;
  skillplaceholder.add(1, someskill);
  
  stats refStats;
  refStats.armor = 85;
  refStats.STprim.agi = 10;
  refStats.STprim.spi = 9;
  armor SpiritHunterHeaddress(7250, UNCOMMON, true, "Spirit Hunter Headdress", HEAD, refStats, 37);
  List<armor> somelistarmor;
  somelistarmor.add(1, SpiritHunterHeaddress);
  
  consumable MoonHarvestPumpkin(COMMON, 20, 200, false, "Moon Harvest Pumpkin", skillplaceholder, 5);

  itemContainer LargeBlueSack(COMMON, 5000, true, "Large Blue Sack", 10);

  misc LargeSpiderFang(POOR, 20, 150, 0, "Large Spider Fang");

  weapon VanquisherSword(150000, RARE, true, "Vanquisher's Sword", BOTH, refStats, 39, 27.5, 1.7, SWORD1H);
  List<weapon> somewpnlist;
  somewpnlist.add(1, VanquisherSword);
  
  Character CharPlaceholder(60, skillplaceholder, refPoint, "somemodel", NEUTRAL, "somechar");

  std::map<item, float> refLT;
  refLT[MoonHarvestPumpkin] = 54;

  Mob myMob(CharPlaceholder, refLT, PASSIVE, refStats);

  Quest someQuest();
  List<Quest> listQuest;
  NPC myNPC(CharPlaceholder, listQuest, "sometitle");

  PCClass someClass(skillplaceholder, refStats);
  PCRace someRace(skillplaceholder, refStats, "somemode", "somemodel");
  Inventory someinv;
  PC mychar(CharPlaceholder, someClass, someRace, someinv, "Method", somelistarmor, somewpnlist);

  subZone subZone123;
  subZone subZone1234(subZone123);

  City City123;
  City City1234(City123);
  Zone Zone123;
  Zone Zone1234(Zone123);
  Continent Continent123;
  Continent Continent1234(Continent123);
  skill skill123;
  skill skill1234(skill123);
  Quest quest123;
  Quest quest1234(quest123);
  armor armor123;
  armor armor1234(armor123);
  weapon weapon123;
  weapon weapon1234(weapon123);
  itemContainer itemContainer123;
  itemContainer itemContainer1234(itemContainer123);
  consumable consumable123;
  consumable consumable1234(consumable123);
  misc misc123;
  misc misc1234(misc123);
  Mob Mob123;
  Mob Mob1234(Mob123);
  NPC NPC123;
  NPC NPC1234(NPC123);
  PC PC123;
  PC PC1234(PC123);
  return 0;
}
