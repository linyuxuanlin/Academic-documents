/*
name: weigher
Description: none 
IDE version:  1.6
Author:  Lin <linyuxuanlin.github.io>
Date:   2017-3-11
*/

#include <HX711.h>

// Hx711.DOUT: A1
// Hx711.SCK:  A0
Hx711 scale(A1, A0);

void HX711Init(void)
{
  Serial.println("System Init,Please Wait...");
  
  long offset= scale.getAverageValue(30);//计算偏移量(此时称必须保持水平且称上不能有东西！！！)
  scale.setOffset(offset);//设置偏移
  scale.setScale(440);//设置比例(此值需要根据不同的重量传感器自己设置！)
}

void setup() 
{
  Serial.begin(9600);
  HX711Init();
}

void loop() 
{
  Serial.print((int)scale.getWeight(1));
  Serial.println("g");
}


