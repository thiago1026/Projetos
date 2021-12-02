#include <Arduino.h>
int Sensor = 4;
int Buzzer = 16;
int pinoLed = 15;
int Var = 0;
 
void setup() 
{ 
 pinMode(Buzzer, OUTPUT);
 pinMode(Sensor, INPUT);
 pinMode(pinoLed, OUTPUT);
 Serial.begin(9600);
} 
 
void loop() 
{ 
 Var=digitalRead(Sensor);
 Serial.print(Var);
 if(Var<1) 
 {
 digitalWrite(Buzzer, HIGH);
 digitalWrite(pinoLed, HIGH);
 delay(200);
 digitalWrite(Buzzer, LOW);
 digitalWrite(pinoLed, LOW);
 delay(20);
 } 
 
}