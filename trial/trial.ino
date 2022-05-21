#include "Cellulo.h"

void setup(){
  setupPins();
  Serial.begin(9600);
}
void loop() {
  // Give parameter to each unit as Angle and PWM values.
  UNIT1(90,255);
  UNIT2(180,255);
  UNIT3(0,255);
  UNIT4(45,255);
  UNIT5(270,255);
  UNIT6(135,255);
  UNIT7(315,255);
}
