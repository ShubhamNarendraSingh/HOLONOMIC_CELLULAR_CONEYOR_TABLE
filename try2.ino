int IN1_M1 = 26 , IN2_M1 = 27 , IN3_M1 = 24 , IN4_M1 = 25;
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
int ang = 90;
int t1, t2, t3, t4, t5, t6, t7;

void setup() {
//  for(int i=1;i<=10;i++){
//    pinMode(IN1_M1,OUTPUT);
//    pinMode(IN2_M2,OUTPUT);
//  }
//    for(int i=1;i<=11;i++){
//    pinMode(IN3_M3,OUTPUT);
//    pinMode(IN4_M4,OUTPUT);
//  }
//  
  
  pinMode(IN1_M1, OUTPUT);
  pinMode(IN2_M1, OUTPUT);
  pinMode(IN3_M1, OUTPUT);
  pinMode(IN4_M1, OUTPUT);
  pinMode(IN3_M2, OUTPUT);
  pinMode(IN4_M2, OUTPUT);

  pinMode(IN1_M3, OUTPUT);
  pinMode(IN2_M3, OUTPUT);
  pinMode(IN3_M3, OUTPUT);
  pinMode(IN4_M3, OUTPUT);

  //Motor Driver 4 and two motors

  pinMode(IN1_M4, OUTPUT);
  pinMode(IN2_M4, OUTPUT);
  pinMode(IN3_M4, OUTPUT);
  pinMode(IN4_M4, OUTPUT);
  //Motor Driver 5 and two motors

  pinMode(IN1_M5, OUTPUT);
  pinMode(IN2_M5, OUTPUT);
  pinMode(IN3_M5, OUTPUT);
  pinMode(IN4_M5, OUTPUT);
  //Motor Driver 6 and two motors

  pinMode(IN1_M6, OUTPUT);
  pinMode(IN2_M6, OUTPUT);
  pinMode(IN3_M6, OUTPUT);
  pinMode(IN4_M6, OUTPUT);
  //Motor Driver 7 and two motors

  pinMode(IN1_M7, OUTPUT);
  pinMode(IN2_M7, OUTPUT);
  pinMode(IN3_M7, OUTPUT);
  pinMode(IN4_M7, OUTPUT);
  //Motor Driver 8 and two motors

  pinMode(IN1_M8, OUTPUT);
  pinMode(IN2_M8, OUTPUT);
  pinMode(IN3_M8, OUTPUT);
  pinMode(IN4_M8, OUTPUT);
    //Motor Driver 9 and two motors

  pinMode(IN1_M9, OUTPUT);
  pinMode(IN2_M9, OUTPUT);
  pinMode(IN3_M9, OUTPUT);
  pinMode(IN4_M9, OUTPUT);
    //Motor Driver 10 and two motors

  pinMode(IN1_M10, OUTPUT);
  pinMode(IN2_M10, OUTPUT);
  pinMode(IN3_M10, OUTPUT);
  pinMode(IN4_M10, OUTPUT);
    //Motor Driver 11 and two motors

  pinMode(IN3_M11, OUTPUT);
  pinMode(IN4_M11, OUTPUT);

  //Enable Pin Setup
  pinMode(enA_1, OUTPUT);
  pinMode(enA_2, OUTPUT);
  pinMode(enA_3, OUTPUT);
  pinMode(enA_4, OUTPUT);
  pinMode(enA_5, OUTPUT);
  pinMode(enA_6, OUTPUT);
  pinMode(enA_7, OUTPUT);
  pinMode(enA_8, OUTPUT);
  pinMode(enA_9, OUTPUT);
  pinMode(enA_10, OUTPUT);

  pinMode(enB_1, OUTPUT);
  pinMode(enB_2, OUTPUT);
  pinMode(enB_3, OUTPUT);
  pinMode(enB_4, OUTPUT);
  pinMode(enB_5, OUTPUT);
  pinMode(enB_6, OUTPUT);
  pinMode(enB_7, OUTPUT);
  pinMode(enB_8, OUTPUT);
  pinMode(enB_9, OUTPUT);
  pinMode(enB_10, OUTPUT);
  pinMode(enB_11, OUTPUT);
}

void loop()
{
  if (ang == 90) {
    t1 = 90, t2 = 90, t3 = 90, t4 = 90, t5 = 90, t6 = 90, t7 = 90;
  }
  if (ang == 180) {
    t1 = 90, t2 = 135, t3 = -90, t4 = -90, t5 = -135, t6 = -135, t7 = -90;
  }
  if (ang == 0) {
    t1 = 45, t2 = -90, t3 = -215, t4 = 45, t5 = -215, t6 = -135, t7 = -215;
  }
  Forward();
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

void UNIT1() {
  int Vx = v * cos((pi / 180) * t1);
  int Vy = v * sin((pi / 180) * t1);

  int VA = Vx;
  int VB = -(Vx * sinf(0.5231)) + (Vy * cosf(0.5231));
  int VC = (Vx * sinf(0.5231)) + (Vy * cosf(0.5231));

  //M2(1) is considered as head given VA, M1(2)->VB and M1(1)->VC.
  if (VC < 0) {
    digitalWrite(IN1_M1, HIGH);
    digitalWrite(IN2_M1, LOW);
    analogWrite(enA_1, abs(VC));
  }
  else {
    digitalWrite(IN1_M1, LOW);
    digitalWrite(IN2_M1, HIGH);
    analogWrite(enA_1, VC);
  }

  if (VB < 0) {
    digitalWrite(IN3_M1, LOW);
    digitalWrite(IN4_M1, HIGH);
    analogWrite(enB_1, abs(VB));
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
  int Vx = v * cos((pi / 180) * t2);
  int Vy = v * sin((pi / 180) * t2);

  int VA = Vx;
  int VB = -(Vx * sinf(0.5231)) + (Vy * cosf(0.5231));
  int VC = (Vx * sinf(0.5231)) + (Vy * cosf(0.5231));

  //M5(1) is considered as head given VA, M4(2)->VB and M4(1)->VC.
  if (VC < 0) {
    digitalWrite(IN1_M4, HIGH);
    digitalWrite(IN2_M4, LOW);
    analogWrite(enA_4, abs(VC));
  }
  else {
    digitalWrite(IN1_M4, LOW);
    digitalWrite(IN2_M4, HIGH);
    analogWrite(enA_4, VC);
  }

  if (VB < 0) {
    digitalWrite(IN3_M4, LOW);
    digitalWrite(IN4_M4, HIGH);
    analogWrite(enB_4, abs(VB));
  }
  else {
    digitalWrite(IN3_M4, HIGH);
    digitalWrite(IN4_M4, LOW);
    analogWrite(enB_4, VB);
  }

  if (VA < 0) {
    digitalWrite(IN1_M5, LOW);
    digitalWrite(IN2_M5, HIGH);
    analogWrite(enA_5, abs(VA));
  }
  else {
    digitalWrite(IN1_M5, HIGH);
    digitalWrite(IN2_M5, LOW);
    analogWrite(enA_5, VA); //128 pwm is starting value of motor start
  }

}

void UNIT3() {
  double Vx = v * cos((pi / 180) * t3);
  double Vy = v * sin((pi / 180) * t3);

  double VA = Vx;
  double VB = (-(Vx * sinf(0.5231)) + (Vy * cosf(0.5231))) + 90;
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
    analogWrite(enB_7, abs(VB));
  }
  else {
    digitalWrite(IN3_M7, HIGH);
    digitalWrite(IN4_M7, LOW);
    analogWrite(enB_7, VB);
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
  int Vx = v * cos((pi / 180) * t4);
  int Vy = v * sin((pi / 180) * t4);

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
  double Vx = v * cos((pi / 180) * t5);
  double Vy = v * sin((pi / 180) * t5);

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
  int Vx = v * cos((pi / 180) * t6);
  int Vy = v * sin((pi / 180) * t6);

  int VA = Vx;
  int VB = (-(Vx * sinf(0.5231)) + (Vy * cosf(0.5231))) + 90;
  int VC = (Vx * sinf(0.5231)) + (Vy * cosf(0.5231));

  //M2(1) is considered as head given VA, M1(2)->VB and M1(1)->VC.
  if (VC < 0) {
    digitalWrite(IN1_M10, HIGH);
    digitalWrite(IN2_M10, LOW);
    analogWrite(enA_10, abs(VC));
  }
  else {
    digitalWrite(IN1_M10, LOW);
    digitalWrite(IN2_M10, HIGH);
    analogWrite(enA_10, VC);
  }

  if (VB < 0) {
    digitalWrite(IN3_M10, LOW);
    digitalWrite(IN4_M10, HIGH);
    analogWrite(enB_10, abs(VB));
  }
  else {
    digitalWrite(IN3_M10, HIGH);
    digitalWrite(IN4_M10, LOW);
    analogWrite(enB_10, VB);
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
  int Vx = v * cos((pi / 180) * t7);
  int Vy = v * sin((pi / 180) * t7);

  int VA = Vx;
  int VB = (-(Vx * sinf(0.5231)) + (Vy * cosf(0.5231))) + 90;
  int VC = (Vx * sinf(0.5231)) + (Vy * cosf(0.5231));

  //M2(1) is considered as head given VA, M1(2)->VB and M1(1)->VC.
  if (VC < 0) {
    digitalWrite(IN3_M8, HIGH);
    digitalWrite(IN4_M8, LOW);
    analogWrite(enB_8, abs(VC));
  }
  else {
    digitalWrite(IN3_M8, LOW);
    digitalWrite(IN4_M8, HIGH);
    analogWrite(enB_8, VC);
  }

  if (VB < 0) {
    digitalWrite(IN3_M9, LOW);
    digitalWrite(IN4_M9, HIGH);
    analogWrite(enB_9, abs(VB));
  }
  else {
    digitalWrite(IN3_M9, HIGH);
    digitalWrite(IN4_M9, LOW);
    analogWrite(enB_9, VB);
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
