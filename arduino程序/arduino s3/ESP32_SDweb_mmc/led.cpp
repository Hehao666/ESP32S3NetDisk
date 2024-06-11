#include "led.h"

void ledStart(){
  pinMode(37,OUTPUT);
  pinMode(38,OUTPUT);
}
void ledOn() {
  digitalWrite(37,HIGH);
  digitalWrite(38,HIGH);
}
void staLedOn() {
  digitalWrite(37,HIGH);
  digitalWrite(38,LOW);
}
void apLedOn() {
  digitalWrite(37,LOW);
  digitalWrite(38,HIGH);
}