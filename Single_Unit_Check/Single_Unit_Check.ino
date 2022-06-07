int IN1_1 = 2;
int IN2_1 = 3;
int IN1_2 = 4;
int IN2_2 = 5;
int IN3_3 = 9;
int IN4_3 = 10;
int enA_1 = A7;
int enA_2 = A6;
int enB_3 = A5;
void setup() {
  // put your setup code here, to run once:
  pinMode(IN1_1, OUTPUT);
  pinMode(IN2_1, OUTPUT);
  pinMode(IN1_2, OUTPUT);
  pinMode(IN2_2, OUTPUT);
  pinMode(IN3_3, OUTPUT);
  pinMode(IN4_3, OUTPUT);

  pinMode(enA_1, INPUT);
  pinMode(enA_2, INPUT);
  pinMode(enB_3, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(IN1_1, LOW);
  digitalWrite(IN2_1, HIGH);
  analogWrite(enA_1, 150);
  delay(1000);

  digitalWrite(IN1_2, HIGH);
  digitalWrite(IN2_2, LOW);
  analogWrite(enA_2, 150);
  delay(1000);

  digitalWrite(IN3_3, HIGH);
  digitalWrite(IN4_3, LOW);
  analogWrite(enB_3, 150);
  delay(1000);
}
