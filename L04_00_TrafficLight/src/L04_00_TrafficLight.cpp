/* 
 * Project TrafficLight
 * Description: Learn about classes, objects, and OOP
 * Author: Brian Rashap
 * Date: 13-OCT-2024
 */

#include "Particle.h"

// Declare Constants and Variables
const int GREENLED = D6;
const int YELLOWLED = D5;
const int REDLED = D4;
const int BUTTONPIN = D3;

// Declare Objects


// Turn off WiFi
SYSTEM_MODE(SEMI_AUTOMATIC);

void setup() {
  pinMode(GREENLED,OUTPUT);
  pinMode(YELLOWLED,OUTPUT);
  pinMode(REDLED,OUTPUT);
  pinMode(BUTTONPIN,INPUT);
}

void loop() {
  digitalWrite(GREENLED,HIGH);
  delay(333);
  digitalWrite(YELLOWLED,HIGH);
  delay(333);
  digitalWrite(REDLED,HIGH);
  delay(333);

  if(digitalRead(BUTTONPIN)) {
    digitalWrite(GREENLED,LOW);
    digitalWrite(YELLOWLED,LOW);
    digitalWrite(REDLED,LOW);
    delay(1000);
  }
}
