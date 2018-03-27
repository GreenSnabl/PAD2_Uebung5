/* 
 * File:   main.cpp
 * Author: Michael Roth
 *
 * Created on 3. September 2014, 07:52
 */

#include <cstdlib>
#include <iostream>
#include "Bitmap.h"

#include <fstream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char** argv)
{
	


	RgbImage rgb(13,13);
	rgb.fill(RgbPixel(200,200,200));
	rgb.setPixel(0,0,COLOR::Black);
	rgb.setPixel(1,1,COLOR::Darkgrey);
	rgb.setPixel(2,2,COLOR::Grey);
	rgb.setPixel(3,3,COLOR::Lightgrey);
  rgb.setPixel(4,4,COLOR::White);
  rgb.setPixel(5,5,COLOR::Red);
  rgb.setPixel(6,6,COLOR::Green);
  rgb.setPixel(7,7,COLOR::Blue);
	
	rgb.store("test.bmp");
	
	
	GreyImage g1(13,13);
  g1.fill(COLOR::Black);
  g1.setPixel(0,0,COLOR::Black);
  g1.setPixel(1,1,COLOR::Darkgrey);
  g1.setPixel(2,2,COLOR::Grey);
  g1.setPixel(3,3,COLOR::Lightgrey);
  g1.setPixel(4,4,COLOR::White);
	
	g1.store("lut1.bmp");
	
	GreyImage g2("lut1.bmp");
	g2.store("lut2.bmp");
	
	return 0;
}

