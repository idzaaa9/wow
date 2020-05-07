#pragma once

#include <iostream>
#include "zone.hpp"
#include "..\dinstring.hpp"
#include "..\list.hpp"

class Continent{
private:
  List<Zone> listZone;
  DinString CName;
public:
  Continent() : listZone(), CName() {}
  Continent(const List<Zone>& refListZone, const DinString& refCName) : listZone(refListZone), CName(refCName) {}
  Continent(const Continent& ref) : listZone(ref.getListZone()), CName(ref.getCName()) {}
  List<Zone> getListZone() const {return listZone;}
  DinString getCName() const {return CName;}
  void setListZone(List<Zone> ref) {listZone = ref;}
  void setCName(DinString ref) {CName = ref;}
};
