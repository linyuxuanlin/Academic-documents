/*
name:weigher and dinosaur
Description: NaNaNa :D
IDE version:  1.6
Author:  Lin <linyuxuanlin.github.io>
Date:    2017-3-11
note: 
*/
#include <HX711.h>
#include <Keyboard.h>
// Hx711.DOUT: A1
// Hx711.SCK:  A0
Hx711 scale(A1, A0);

void HX711Init(void)
{

  long offset = scale.getAverageValue(30); //计算偏移量(此时称必须保持水平且称上不能有东西！！！)
  scale.setOffset(offset);
  scale.setScale(440);
  }

void setup()
{
  Keyboard.begin();
  HX711Init();
}

void loop()
{

  int i = (int)scale.getWeight(1);
  if (i > 500) {
    Keyboard.print(" ");
  }
  else{}


} 


