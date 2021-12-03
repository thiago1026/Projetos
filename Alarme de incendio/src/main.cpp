#include <Arduino.h>
int Sensor = 4; // declaração da pinagem do sensor de chamafogo//
int Buzzer = 16;// declaração da pinagem do buzzer//
int pinoLed = 15;//declaração da pinagem do led//
int Var;// declara a varivel do sensor//
 
void setup() 
{ 
 pinMode(Buzzer, OUTPUT);// declaro que o pino do buzzer é de saída//
 pinMode(Sensor, INPUT);//declaro que o pino do sensor é de entrada//
 pinMode(pinoLed, OUTPUT); // declaro que o pino do led é de saída//
 Serial.begin(9600);// inicia a porta serial, configura a taxa de dados para 9600 bps//
} 
 
void loop() 
{ 
 Var=digitalRead(Sensor);// leitura do pino digital do sensor//
 if(Var<1) // se a leitura do sensor for menor que 1 ele roda a sequência//
 {
 digitalWrite(Buzzer, HIGH);// liga o pino digital do buzzer em alto//
 digitalWrite(pinoLed, HIGH);// liga o led//
 delay(1000);// espera por um 1 segundos
 digitalWrite(Buzzer, LOW);// desliga o buzzer//
 digitalWrite(pinoLed, LOW);//desliga o led//
 } 
 