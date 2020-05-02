#pragma once

#include <iostream>
#include "list.hpp"
#include "dinstring.hpp"
#include "xyz.hpp"

struct subZone{
  Point SZBorder[8];
  DinString SZName;
  subZone() : SZName(), SZBorder(){}
  subZone(Point BorderRef[8], DinString NameRed) : SZName(NameRed){
      for(int n = 0; n < 8; ++n){
	SZBorder[n](BorderRef[n]);}
  }
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
