#pragma once

#include <iostream>
#include "..\list.hpp"
#include "..\dinstring.hpp"
#include "..\xyz.hpp"
#include "..\faction.hpp"

class subZone{
protected:
  List<Point> SZBorder;
  DinString SZName;
public:
  subZone() : SZName(), SZBorder(){}
  subZone(List<Point> refBorder, DinString NameRed) : SZName(NameRed), SZBorder(refBorder) {}
  subZone(const subZone& ref) : SZBorder(ref.getSZBorder()), SZName(ref.getSZName()) {}
  List<Point> getSZBorder() const {return SZBorder;}
  DinString getSZName() const {return SZName;}
  void setSZBorder(List<Point> refBorder){SZBorder = refBorder;}
  void setSZName(DinString refName){SZName = refName;}
};

class City : public subZone{
private:
  Faction CityFac;
public:
  City() : subZone(), CityFac(FNULL){}
  City(const subZone& ref, const Faction& Fref) : subZone(ref), CityFac(FNULL) {}
  City(const City& ref) : subZone(ref.getSZBorder(), ref.getSZName()), CityFac(ref.getF()) {}
  Faction getF() const {return CityFac;}
  void setF(Faction Fref) {CityFac = Fref;}
};

class Zone{
private:
  List<Point> Border;
  List<subZone> subZoneList;
  DinString ZName;
  short unsigned minLvl, maxLvl;
public:
  Zone() : Border(), subZoneList(), ZName() {minLvl = 0; maxLvl = 0;}
  Zone(const List<Point>& BorderRef, const List<subZone>& subZoneListRef, const DinString& ZNameRef, short unsigned minLvlRef, short unsigned maxLvlRef) : Border(BorderRef), subZoneList(subZoneListRef), ZName(ZNameRef), minLvl(minLvlRef), maxLvl(maxLvlRef) {}
  Zone(const Zone& ref) : Border(ref.getBorder()), subZoneList(ref.getSubZoneList()), ZName(ref.getZName()), minLvl(ref.getMinLvl()), maxLvl(getMaxLvl()) {}
  List<Point> getBorder() const {return Border;}
  List<subZone> getSubZoneList() const {return subZoneList;}
  DinString getZName() const {return ZName;}
  unsigned short getMinLvl()const{return minLvl;}
  unsigned short getMaxLvl()const{return maxLvl;}
  void setBorder(List<Point> BorderRef){Border = BorderRef;}
  void setSubZoneList(List<subZone> subZoneListRef){subZoneList = subZoneListRef;}
  void setZName(DinString ZNameRef){ZName = ZNameRef;}
  void setMinLvl(unsigned short ref){minLvl = ref;} 
  void setMaxLvl(unsigned short ref){maxLvl = ref;}
};
