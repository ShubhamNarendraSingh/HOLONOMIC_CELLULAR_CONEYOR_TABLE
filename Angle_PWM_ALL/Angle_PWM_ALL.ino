int IN1_M1 = 27 , IN2_M1 = 26 , IN3_M1 = 25 , IN4_M1 = 24;
int IN1_M2 = A4 , IN2_M2 = A5 , IN3_M2 = A6 , IN4_M2 = A7;
int IN1_M3 = A8 , IN2_M3 = A9 , IN3_M3 = A10 , IN4_M3 = A11;
int IN1_M4 = A12 , IN2_M4 = A13 , IN3_M4 = A14 , IN4_M4 = A15;
int IN1_M5 = 53 , IN2_M5 = 52 , IN3_M5 = 51 , IN4_M5 = 50;
int IN1_M6 = 49 , IN2_M6 = 48 , IN3_M6 = 47 , IN4_M6 = 46;
int IN1_M7 = 45 , IN2_M7 = 44 , IN3_M7 = 43 , IN4_M7 = 42;
int IN1_M8 = 41 , IN2_M8 = 40 , IN3_M8 = 39 , IN4_M8 = 38;
int IN1_M9 = 37 , IN2_M9 = 36 , IN3_M9 = 35 , IN4_M9 = 34;
int IN1_M10 = 33 , IN2_M10 = 32 , IN3_M10 = 31 , IN4_M10 = 30;
int IN3_M11 = 29 , IN4_M11 = 28;

int enA_1 = 0, enA_2 = 2, enA_3 = 4, enA_4 = 6, enA_5 = 8, enA_6 = 10, enA_7 = 12, enA_8 = 15, enA_9 = 17, enA_10 = 19;
int enB_1 = 1, enB_2 = 3, enB_3 = 5, enB_4 = 7, enB_5 = 9, enB_6 = 11, enB_7 = 14, enB_8 = 16, enB_9 = 18, enB_10 = 20, enB_11 = 21;

int v =  255;
float pi = 3.142;
int ang1 = 90;
int ang2 = 90;
int ang3 = 135;
int ang4 = 90;
int ang5 = 0;
int ang6 = 0;
int ang7 = 180;

void setup() {
  pinMode(IN1_M1, OUTPUT), pinMode(IN2_M1, OUTPUT), pinMode(IN3_M1, OUTPUT),  pinMode(IN4_M1, OUTPUT);
  pinMode(IN1_M2, OUTPUT), pinMode(IN2_M2, OUTPUT), pinMode(IN3_M2, OUTPUT),  pinMode(IN4_M2, OUTPUT);
  pinMode(IN1_M3, OUTPUT), pinMode(IN2_M3, OUTPUT), pinMode(IN3_M3, OUTPUT),  pinMode(IN4_M3, OUTPUT);
  pinMode(IN1_M4, OUTPUT),  pinMode(IN2_M4, OUTPUT),  pinMode(IN3_M4, OUTPUT), pinMode(IN4_M4, OUTPUT);
  pinMode(IN1_M5, OUTPUT),  pinMode(IN2_M5, OUTPUT),  pinMode(IN3_M5, OUTPUT),  pinMode(IN4_M5, OUTPUT);
  pinMode(IN1_M6, OUTPUT),  pinMode(IN2_M6, OUTPUT),  pinMode(IN3_M6, OUTPUT),  pinMode(IN4_M6, OUTPUT);
  pinMode(IN1_M7, OUTPUT),  pinMode(IN2_M7, OUTPUT),  pinMode(IN3_M7, OUTPUT),  pinMode(IN4_M7, OUTPUT);
  pinMode(IN1_M8, OUTPUT),  pinMode(IN2_M8, OUTPUT),  pinMode(IN3_M8, OUTPUT),  pinMode(IN4_M8, OUTPUT);
  pinMode(IN1_M9, OUTPUT),  pinMode(IN2_M9, OUTPUT),  pinMode(IN3_M9, OUTPUT),  pinMode(IN4_M9, OUTPUT);
  pinMode(IN1_M10, OUTPUT),  pinMode(IN2_M10, OUTPUT),  pinMode(IN3_M10, OUTPUT),  pinMode(IN4_M10, OUTPUT);
  pinMode(IN3_M11, OUTPUT),  pinMode(IN4_M11, OUTPUT),

          //Enable Pin Setup
          pinMode(enA_1, OUTPUT),  pinMode(enA_2, OUTPUT),  pinMode(enA_3, OUTPUT),  pinMode(enA_4, OUTPUT);
  pinMode(enA_5, OUTPUT),  pinMode(enA_6, OUTPUT),  pinMode(enA_7, OUTPUT),  pinMode(enA_8, OUTPUT);
  pinMode(enA_9, OUTPUT),  pinMode(enA_10, OUTPUT);

  pinMode(enB_1, OUTPUT),  pinMode(enB_2, OUTPUT),  pinMode(enB_3, OUTPUT),  pinMode(enB_4, OUTPUT);
  pinMode(enB_5, OUTPUT),  pinMode(enB_6, OUTPUT),  pinMode(enB_7, OUTPUT),  pinMode(enB_8, OUTPUT);
  pinMode(enB_9, OUTPUT),  pinMode(enB_10, OUTPUT),  pinMode(enB_11, OUTPUT);

  Serial.begin(9600);
}

void loop()
{

}

void Forward() {
  UNIT1();
  UNIT2();
  UNIT3();
  UNIT4();
  UNIT5();
  UNIT6();
  UNIT7();
}

void Left() {
  UNIT1();
  // UNIT2();
  UNIT3();
  UNIT4();
  // UNIT5();
  // UNIT6();
  UNIT7();
}

void Right() {
  UNIT1();
  UNIT2();
  UNIT3();
  UNIT4();
  // UNIT5();
  // UNIT6();
  UNIT7();
}

void UNIT1() {
  int Vx = v * cos((pi / 180) * ang1);
  int Vy = v * sin((pi / 180) * ang1);

  int VA = Vx;
  int VB = -(Vx * sinf(0.5231)) + (Vy * cosf(0.5231));
  int VC = (Vx * sinf(0.5231)) + (Vy * cosf(0.5231));

  //  Serial.print("Wheel 1 rpm(UNIT 1) : ");
  //  Serial.println(VA);
  //  Serial.print("Wheel 2 rpm(UNIT 1) : ");
  //  Serial.println(VB);
  //  Serial.print("Wheel 3 rpm(UNIT 1) : ");
  //  Serial.println(VC);

  //M2(1) is considered as head given VA, M1(2)->VB and M1(1)->VC.
  if (VC < 0) {
    digitalWrite(IN1_M1, HIGH);
    digitalWrite(IN2_M1, LOW);
    analogWrite(enA_1, (abs(VC)));
  }
  else {
    digitalWrite(IN1_M1, LOW);
    digitalWrite(IN2_M1, HIGH);
    analogWrite(enA_1, VC);
  }

  if (VB < 0) {
    digitalWrite(IN3_M1, LOW);
    digitalWrite(IN4_M1, HIGH);
    analogWrite(enB_1, (abs(VB)));
  }
  else {
    digitalWrite(IN3_M1, HIGH);
    digitalWrite(IN4_M1, LOW);
    analogWrite(enB_1, VB);
  }

  if (VA < 0) {
    digitalWrite(IN1_M2, LOW);
    digitalWrite(IN2_M2, HIGH);
    analogWrite(enA_2, abs(VA));
  }
  else {
    digitalWrite(IN1_M2, HIGH);
    digitalWrite(IN2_M2, LOW);
    analogWrite(enA_2, VA); //128 pwm is starting value of motor start
  }

}

void UNIT2() {
  int Vx = v * cos((pi / 180) * ang2);
  int Vy = v * sin((pi / 180) * ang2);

  int VA = Vx;
  int VB = -(Vx * sinf(0.5231)) + (Vy * cosf(0.5231));
  int VC = (Vx * sinf(0.5231)) + (Vy * cosf(0.5231));

  Serial.print("Wheel 1 rpm(UNIT 1) : ");
  Serial.println(VA);
  Serial.print("Wheel 2 rpm(UNIT 1) : ");
  Serial.println(VB);
  Serial.print("Wheel 3 rpm(UNIT 1) : ");
  Serial.println(VC);

  //M5(1) is considered as head given VA, M4(2)->VB and M4(1)->VC.
  if (VC < 0) {
    digitalWrite(IN1_M4, HIGH);
    digitalWrite(IN2_M4, LOW);
    analogWrite(enA_4, (abs(VC)) + 30);
  }
  else {
    digitalWrite(IN1_M4, LOW);
    digitalWrite(IN2_M4, HIGH);
    analogWrite(enA_4, VC + 30);
  }

  if (VB < 0) {
    digitalWrite(IN3_M4, LOW);
    digitalWrite(IN4_M4, HIGH);
    analogWrite(enB_4, (abs(VB)) + 30);
  }
  else {
    digitalWrite(IN3_M4, HIGH);
    digitalWrite(IN4_M4, LOW);
    analogWrite(enB_4, VB + 30);
  }

  if (VA < 0) {
    digitalWrite(IN1_M5, LOW);
    digitalWrite(IN2_M5, HIGH);
    analogWrite(enA_5, (abs(VA)));
  }
  else {
    digitalWrite(IN1_M5, HIGH);
    digitalWrite(IN2_M5, LOW);
    analogWrite(enA_5, VA); //128 pwm is starting value of motor start
  }

}

void UNIT3() {
  double Vx = v * cos((pi / 180) * ang3);
  double Vy = v * sin((pi / 180) * ang3);

  double VA = Vx;
  double VB = -(Vx * sinf(0.5231)) + (Vy * cosf(0.5231));
  double VC = (Vx * sinf(0.5231)) + (Vy * cosf(0.5231));

  //M8(1) Considered as head given VA, VB->M7(2) and VC->M7(1)
  if (VC < 0) {
    digitalWrite(IN1_M7, HIGH);
    digitalWrite(IN2_M7, LOW);
    analogWrite(enA_7, abs(VC));
  }
  else {
    digitalWrite(IN1_M7, LOW);
    digitalWrite(IN2_M7, HIGH);
    analogWrite(enA_7, VC);
  }

  if (VB < 0) {
    digitalWrite(IN3_M7, LOW);
    digitalWrite(IN4_M7, HIGH);
    analogWrite(enB_7, (abs(VB)) + 60);
  }
  else {
    digitalWrite(IN3_M7, HIGH);
    digitalWrite(IN4_M7, LOW);
    analogWrite(enB_7, VB + 60);
  }

  if (VA < 0) {
    digitalWrite(IN1_M8, LOW);
    digitalWrite(IN2_M8, HIGH);
    analogWrite(enA_8, abs(VA));
  }
  else {
    digitalWrite(IN1_M8, HIGH);
    digitalWrite(IN2_M8, LOW);
    analogWrite(enA_8, VA); //128 pwm is starting value of motor start
  }

}

void UNIT4() {
  int Vx = v * cos((pi / 180) * ang4);
  int Vy = v * sin((pi / 180) * ang4);

  int VA = Vx;
  int VB = -(Vx * sinf(0.5231)) + (Vy * cosf(0.5231));
  int VC = (Vx * sinf(0.5231)) + (Vy * cosf(0.5231));

  //M3(2) is considered as head given VA, M3(1)->VB and M2(2)->VC.
  if (VC < 0) {
    digitalWrite(IN3_M2, HIGH);
    digitalWrite(IN4_M2, LOW);
    analogWrite(enB_2, abs(VC));
  }
  else {
    digitalWrite(IN3_M2, LOW);
    digitalWrite(IN4_M2, HIGH);
    analogWrite(enB_2, VC);
  }

  if (VB < 0) {
    digitalWrite(IN1_M3, LOW);
    digitalWrite(IN2_M3, HIGH);
    analogWrite(enA_3, abs(VB));
  }
  else {
    digitalWrite(IN1_M3, HIGH);
    digitalWrite(IN2_M3, LOW);
    analogWrite(enA_3, VB);
  }

  if (VA < 0) {
    digitalWrite(IN3_M3, LOW);
    digitalWrite(IN4_M3, HIGH);
    analogWrite(enB_3, abs(VA));
  }
  else {
    digitalWrite(IN3_M3, HIGH);
    digitalWrite(IN4_M3, LOW);
    analogWrite(enB_3, VA); //128 pwm is starting value of motor start
  }

}

void UNIT5() {
  double Vx = v * cos((pi / 180) * ang5);
  double Vy = v * sin((pi / 180) * ang5);

  double VA = Vx;
  double VB = -(Vx * sinf(0.5231)) + (Vy * cosf(0.5231));
  double VC = (Vx * sinf(0.5231)) + (Vy * cosf(0.5231));

  //M6(2) Considered as head given VA, VB->M6(1) and VC->M5(2)
  if (VC < 0) {
    digitalWrite(IN3_M5, HIGH);
    digitalWrite(IN4_M5, LOW);
    analogWrite(enB_5, abs(VC));
  }
  else {
    digitalWrite(IN3_M5, LOW);
    digitalWrite(IN4_M5, HIGH);
    analogWrite(enB_5, VC);
  }

  if (VB < 0) {
    digitalWrite(IN1_M6, LOW);
    digitalWrite(IN2_M6, HIGH);
    analogWrite(enA_6, abs(VB));
  }
  else {
    digitalWrite(IN1_M6, HIGH);
    digitalWrite(IN2_M6, LOW);
    analogWrite(enA_6, VB);
  }

  if (VA < 0) {
    digitalWrite(IN3_M6, LOW);
    digitalWrite(IN4_M6, HIGH);
    analogWrite(enB_6, abs(VA));
  }
  else {
    digitalWrite(IN3_M6, HIGH);
    digitalWrite(IN4_M6, LOW);
    analogWrite(enB_6, VA); //128 pwm is starting value of motor start
  }

}

void UNIT6() {
  int Vx = v * cos((pi / 180) * ang6);
  int Vy = v * sin((pi / 180) * ang6);

  int VA = Vx;
  int VB = -(Vx * sinf(0.5231)) + (Vy * cosf(0.5231));
  int VC = (Vx * sinf(0.5231)) + (Vy * cosf(0.5231));

  //  Serial.print("Wheel 1 rpm(UNIT 1) : ");
  //  Serial.println(VA);
  //  Serial.print("Wheel 2 rpm(UNIT 1) : ");
  //  Serial.println(VB);
  //  Serial.print("Wheel 3 rpm(UNIT 1) : ");
  //  Serial.println(VC);

  //M2(1) is considered as head given VA, M1(2)->VB and M1(1)->VC.
  if (VC < 0) {
    digitalWrite(IN1_M10, HIGH);
    digitalWrite(IN2_M10, LOW);
    analogWrite(enA_10, (abs(VC)) + 30);
  }
  else {
    digitalWrite(IN1_M10, LOW);
    digitalWrite(IN2_M10, HIGH);
    analogWrite(enA_10, VC + 30);
  }

  if (VB < 0) {
    digitalWrite(IN3_M10, LOW);
    digitalWrite(IN4_M10, HIGH);
    analogWrite(enB_10, (abs(VB)) + 30);
  }
  else {
    digitalWrite(IN3_M10, HIGH);
    digitalWrite(IN4_M10, LOW);
    analogWrite(enB_10, VB + 30);
  }

  if (VA < 0) {
    digitalWrite(IN3_M11, LOW);
    digitalWrite(IN4_M11, HIGH);
    analogWrite(enB_11, abs(VA));
  }
  else {
    digitalWrite(IN3_M11, HIGH);
    digitalWrite(IN4_M11, LOW);
    analogWrite(enB_11, VA); //128 pwm is starting value of motor start
  }

}

void UNIT7() {
  int Vx = v * cos((pi / 180) * ang7);
  int Vy = v * sin((pi / 180) * ang7);

  int VA = Vx;
  int VB = -(Vx * sinf(0.5231)) + (Vy * cosf(0.5231));
  int VC = (Vx * sinf(0.5231)) + (Vy * cosf(0.5231));
  //  Serial.print("Wheel 1 rpm(UNIT 1) : ");
  //  Serial.println(VA);
  //  Serial.print("Wheel 2 rpm(UNIT 1) : ");
  //  Serial.println(VB);
  //  Serial.print("Wheel 3 rpm(UNIT 1) : ");
  //  Serial.println(VC);
  //M2(1) is considered as head given VA, M1(2)->VB and M1(1)->VC.
  if (VC < 0) {
    digitalWrite(IN3_M8, HIGH);
    digitalWrite(IN4_M8, LOW);
    analogWrite(enB_8, (abs(VC)) + 20);
  }
  else {
    digitalWrite(IN3_M8, LOW);
    digitalWrite(IN4_M8, HIGH);
    analogWrite(enB_8, VC + 20);
  }

  if (VB < 0) {
    digitalWrite(IN3_M9, LOW);
    digitalWrite(IN4_M9, HIGH);
    analogWrite(enB_9, abs(VB) + 20);
  }
  else {
    digitalWrite(IN3_M9, HIGH);
    digitalWrite(IN4_M9, LOW);
    analogWrite(enB_9, VB + 20);
  }

  if (VA < 0) {
    digitalWrite(IN1_M9, LOW);
    digitalWrite(IN2_M9, HIGH);
    analogWrite(enA_9, abs(VA));
  }
  else {
    digitalWrite(IN1_M9, HIGH);
    digitalWrite(IN2_M9, LOW);
    analogWrite(enA_9, VA); //128 pwm is starting value of motor start
  }

}
