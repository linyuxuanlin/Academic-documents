/*
name: light sensor & led
Description: none 
IDE version:  1.6
Author:  Lin <linyuxuanlin.github.io>
Date:    2017-3-9
*/
int potpin=0;
int ledpin=9;
int val=0;
void setup()
{
pinMode(ledpin,OUTPUT);
Serial.begin(9600);
}
void loop()
{
val=analogRead(potpin);
Serial.println(val);
val = map(val, 30, 1500, 0, 255);//510
analogWrite(ledpin,val);
delay(100);
}
