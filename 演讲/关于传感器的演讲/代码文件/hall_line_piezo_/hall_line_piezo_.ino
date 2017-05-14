/*
name: hall sensor and piezo
Description: it sounds great! 
IDE version:  1.6
Author:  Lin <linyuxuanlin.github.io>
Date:    2017-3-9
*/
void setup() {
  pinMode (A0, INPUT) ; 
  Serial.begin(9600);  
}
 
void loop() {
    
  int sensorReading = analogRead(A0);// 从A0口读模拟传感器的值 
  Serial.println(sensorReading);//串口输出独到的传感器的值 
 
  int thisPitch = map(sensorReading, 350, 550, 300, 988);
//输入的模拟值范围以一比例转换到适合值 (此为400—1000）
// 音律范围为 (120 - 1500Hz) 
  tone(6, thisPitch);// 播放音频  接arduino9号端口，thispitch为播放频率，10为维持时间
  delay(50); 
}
   
