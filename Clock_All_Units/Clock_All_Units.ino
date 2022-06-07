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

int pwm = 255;
void setup() {
  //Motor DriverU 1 and two motors

  pinMode(IN1_M1, OUTPUT);
  pinMode(IN2_M1, OUTPUT);
  pinMode(IN3_M1, OUTPUT);
  pinMode(IN4_M1, OUTPUT);
  //Motor Driver 2 and two motors

  pinMode(IN1_M2, OUTPUT);
  pinMode(IN2_M2, OUTPUT);
  pinMode(IN3_M2, OUTPUT);
  pinMode(IN4_M2, OUTPUT);
  //Motor Driver 3 and two motors

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
  //Motor Driver 11 and one motor

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
  Forward();
}


void Forward() {
  //CELL UNIT 1
  digitalWrite(IN1_M1, HIGH);
  digitalWrite(IN2_M1, LOW);
  analogWrite(enA_1, pwm);
  digitalWrite(IN3_M1, HIGH);
  digitalWrite(IN4_M1, LOW);
  analogWrite(enB_1, pwm);
  digitalWrite(IN1_M2, HIGH);
  digitalWrite(IN2_M2, LOW);
  analogWrite(enA_2, pwm);


  //CELL UNIT 2
  digitalWrite(IN1_M4, HIGH); 
  digitalWrite(IN2_M4, LOW);
  analogWrite(enA_4, pwm);
  digitalWrite(IN3_M4, HIGH);
  digitalWrite(IN4_M4, LOW);
  analogWrite(enB_4, pwm);
  digitalWrite(IN1_M5, HIGH);
  digitalWrite(IN2_M5, LOW);
  analogWrite(enA_5, pwm);

  //CELL UNIT 3
  digitalWrite(IN1_M7, HIGH);
  digitalWrite(IN2_M7, LOW);
  analogWrite(enA_7, pwm);
  digitalWrite(IN3_M7, HIGH);
  digitalWrite(IN4_M7, LOW);
  analogWrite(enB_7, pwm);
  digitalWrite(IN1_M8, HIGH);
  digitalWrite(IN2_M8, LOW);
  analogWrite(enA_8, pwm);

  //CELL UNIT 4
  digitalWrite(IN1_M3, HIGH);
  digitalWrite(IN2_M3, LOW);
  analogWrite(enA_3, pwm);
  digitalWrite(IN3_M3, HIGH);
  digitalWrite(IN4_M3, LOW);
  analogWrite(enB_3, pwm);
  digitalWrite(IN3_M2, HIGH);
  digitalWrite(IN4_M2, LOW);
  analogWrite(enB_2, pwm);


  //CELL UNIT 5
  digitalWrite(IN1_M6, HIGH);
  digitalWrite(IN2_M6, LOW);
  analogWrite(enA_6, pwm);
  digitalWrite(IN3_M6, HIGH);
  digitalWrite(IN4_M6, LOW);
  analogWrite(enB_6, pwm);
  digitalWrite(IN3_M5, HIGH);
  digitalWrite(IN4_M5, LOW);
  analogWrite(enB_5, pwm);

  //CELL UNIT 6
  digitalWrite(IN1_M10, HIGH);
  digitalWrite(IN2_M10, LOW);
  analogWrite(enA_10, pwm);
  digitalWrite(IN3_M10, HIGH);
  digitalWrite(IN4_M10, LOW);
  analogWrite(enB_10, pwm);
  digitalWrite(IN3_M11, HIGH);
  digitalWrite(IN4_M11, LOW);
  analogWrite(enB_11, pwm);

  //CELL UNIT 7
  digitalWrite(IN1_M9, HIGH);
  digitalWrite(IN2_M9, LOW);
  analogWrite(enA_9, pwm);
  digitalWrite(IN3_M9, HIGH);
  digitalWrite(IN4_M9, LOW);
  analogWrite(enB_9, pwm);
  digitalWrite(IN3_M8, HIGH);
  digitalWrite(IN4_M8, LOW);
  analogWrite(enB_8, pwm);


}
