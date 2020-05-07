#pragma once

#include <iostream>

union Point{
  double xyz[3];
  struct{
    double x,y,z;
  };
  Point(){x = 0; y = 0; z = 0;}
  Point(const double refXYZ[3]) {x = refXYZ[0]; y = refXYZ[1]; z = refXYZ[2];}
  Point(const Point& ref) {x = ref.x; y = ref.y; z = ref.z;}
};
