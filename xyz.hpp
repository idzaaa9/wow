#pragma once

#include <iostream>

union Point{
  double xyz[3];
  struct{
    double x,y,z;
  };
  Point(){x = 0; y = 0; z = 0;}
  Point(const double refXYZ[3]) {x = refXYZ[0]; y = refXYZ[1]; z = refXYZ[2];}
  Point(Point& ref) {x = ref.getX(); y = ref.getY(); z = ref.getZ();}
  double getX()const{return x;}
  double getY()const{return y;}
  double getZ()const{return z;}
};
