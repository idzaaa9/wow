#pragma once

#include "kontinent.hpp"
#include "dinstring.hpp"
#include "list.hpp"

class Planet{
private:
  List<Continent> listContinent;
  DinString PName;
public:
  Planet() : listContinent(), PName() {}
  Planet(const List<Continent>& listContinentRef, const DinString& PNameRef) : listContinent(listContinentRef), PName(PNameRef) {}
  Planet(const Planet& ref) : listContinent(ref.getListContinent()), PName(ref.getPName()) {}
  List<Continent> getListContinent()const{return listContinent;}
  DinString getPName()const{return PName;}
  void setListContinent(List<Continent> ref){listContinent = ref;}
  void setPName(DinString ref){PName = ref;}
};
