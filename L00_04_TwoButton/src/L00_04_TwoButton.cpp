/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/rashap/Documents/IoT/ir42/mod04_neopixel/L00_04_TwoButton/src/L00_04_TwoButton.ino"
/*
 * Project L00_04_TwoButton
 * Description: Starter Code for learning header files
 * Author:
 * Date:
 */

void setup();
void loop();
#line 8 "/Users/rashap/Documents/IoT/ir42/mod04_neopixel/L00_04_TwoButton/src/L00_04_TwoButton.ino"
const int GREENBUTTON = D3;
const int YELLOWBUTTON = D2;
const int GREENLED = D6;
const int YELLOWLED = D5;
int greenState,yellowState;
unsigned int timerStart,currentTime;

SYSTEM_MODE(SEMI_AUTOMATIC);

void setup() {
  pinMode(GREENBUTTON, INPUT);
  pinMode(YELLOWBUTTON, INPUT);
  pinMode(GREENLED, OUTPUT);
  pinMode(YELLOWLED, OUTPUT);
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  greenState = digitalRead(GREENBUTTON);
  yellowState = digitalRead(YELLOWBUTTON);

  if(greenState) {
    digitalWrite(GREENLED,HIGH);
  }
  else {
    digitalWrite(GREENLED,LOW);
  }

  if(yellowState) {
    digitalWrite(YELLOWLED,HIGH);
    timerStart = millis();
  } 

  currentTime = millis();
  if(currentTime - timerStart > 5000) {
    digitalWrite(YELLOWLED,LOW);
  }
}