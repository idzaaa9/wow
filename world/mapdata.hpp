#pragma once

#include <iostream>
#include "..\list.hpp"
#include "..\dinstring.hpp"
#include "..\xyz.hpp"

struct mapTri{
  Point xyz;
  DinString tex;
  mapTri() :  tex("NULL") {}
  mapTri(const double refXYZ[3], const DinString& refTex) : tex(refTex), xyz(refXYZ) {}
  mapTri(mapTri& ref) : tex(ref.tex), xyz(ref.xyz) {}
};

class mapData{
private:
  List<mapTri> dataList;
public:
  mapData(const List<mapTri>& ref) : dataList(ref) {}
  mapData(const mapData& ref) : dataList(ref.getData()) {}
  List<mapTri>& getData() {return dataList;}
  const List<mapTri>& getData() const {return dataList;}
};
  
  
