#pragma once

#include <iostream>
#include "..\list.hpp"
#include "..\dinstring.hpp"
#include "..\xyz.hpp"

struct mapTri{
	Point xyz;
	int tex;
	mapTri() : point(), tex(0xF) {}
	mapTri(const double refXYZ[3], const int refTex) : tex(refTex), xyz(refXYZ) {}
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
  
  
