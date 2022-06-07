int IN1_M10 = 33 , IN2_M10 = 32, IN3_M10 = 31, IN4_M10 = 30;
int IN3_M4 = A14 , IN4_M4 = A15;
int enA_10 = 19, enB_10 = 20, enB_4 = 7;
int pwm = 240;
void setup() {
  // put your setup code here, to run once:
  pinMode(IN1_M10, OUTPUT);
  pinMode(IN2_M10, OUTPUT);
  pinMode(IN3_M10, OUTPUT);
  pinMode(IN4_M10, OUTPUT);
  pinMode(IN3_M4, OUTPUT);
  pinMode(IN4_M4, OUTPUT);

  pinMode(enA_10, OUTPUT);
  pinMode(enB_10, OUTPUT);
  pinMode(enB_4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(IN1_M10, LOW);
  digitalWrite(IN2_M10, HIGH);
  analogWrite(enA_10, pwm);
  digitalWrite(IN3_M10, LOW);
  digitalWrite(IN4_M10, HIGH);
  analogWrite(enB_10, pwm);
  digitalWrite(IN3_M4, LOW);
  digitalWrite(IN4_M4, HIGH);
  analogWrite(enB_4, pwm);
}
