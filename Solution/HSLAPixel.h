/**
 * @file HSLAPixel.h
 *
 * @author University of Illinois CS 225 Course Staff
 * @version 2018r1-lab1 - Updated for CS 400
 */

#pragma once

#include <iostream>
#include <sstream>

namespace uiuc 
{
  class HSLAPixel
  {
  public:
    double h;     // store the hue, angle value 0-360 degree
    double s;     // store the saturation [0, 1.0]
    double l;     // store the luminance [0, 1.0]
    double a;     // store the alpha channel (blending opacity) [0, 1.0]
  };
}
