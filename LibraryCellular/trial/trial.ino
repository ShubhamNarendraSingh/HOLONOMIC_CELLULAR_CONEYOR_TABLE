#include "Cellulo.h"

void setup(){
  setupPins();
  Serial.begin(9600);
}
void loop() {
  // Give parameter to each unit as Angle and PWM values.
//  UNIT1(0,255);
//  UNIT2(0,255);
//  UNIT3(45,300);
//  UNIT4(90,255);
//  UNIT5(180,255);
//  UNIT6(315,300);
//  UNIT7(45,300);
 Reverse();
}
void Forward() {
  UNIT1(90,255), UNIT2(90,255), UNIT3(90, 255), UNIT4(90, 255), UNIT5(90, 255), UNIT6(90, 255), UNIT7(90, 255);
}

void Left() {
  UNIT1(90, 255), UNIT2(180, 255), UNIT3(60, 255), UNIT4(0, 255), UNIT5(0, 255);
}

void Right() {
  UNIT1(90, 255), UNIT2(180, 255), UNIT3(120, 255), UNIT4(90, 255), UNIT7(180, 255);
}

void Reverse() {
  UNIT1(180, 255), UNIT2(180, 255), UNIT3(180, 255), UNIT4(180, 255), UNIT5(180, 255), UNIT6(180, 255), UNIT7(180, 255);
}
