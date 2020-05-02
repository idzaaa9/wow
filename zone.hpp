#pragma once

#include <iostream>
#include "list.hpp"
#include "dinstring.hpp"
#include "xyz.hpp"

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

enum Faction{ALLIANCE, HORDE, NEUTRAL};
class City : protected subZone{
private:
  Faction CityFac;
public:
  City() : subZone(){CityFac = NEUTRAL;}
  City(const subZone& ref, const Faction& Fref) : subZone(ref) {CityFac = Fref;}
  City(const City& ref) : subZone(ref.getSZ()) {CityFac = ref.getF();}
  subZone getSZ() const {return new subZone(subZone.SZBorder, subZone.SZName);}
  Faction getF() const {return CityFac;}
  void setF(Faction Fref) {CityFac = Fref;}
};

class Zone{
private:
  List<Point> Border;
  List<subZone> subZoneList;
  DinString ZName;
public:
  Zone() : Border(), subZoneList(), ZName() {}
  Zone(const List<Point>& BorderRef, const List<subZone>& subZoneListRef, const DinString& ZNameRef) : Border(BorderRef), subZoneList(subZoneListRef), ZName(ZNameRef) {}
  Zone(const Zone& ref) : Border(ref.getBorder()), subZoneList(ref.getSubZoneList()), ZName(ref.getZName()) {}
  List<Point> getBorder() const {return Border;}
  List<subZone> getSubZoneList() const {return subZoneList;}
  DinString getZName() const {return ZName;}
};
