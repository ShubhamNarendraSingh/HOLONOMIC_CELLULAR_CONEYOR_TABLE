int IN1_M7 = 45 , IN2_M7 = 44 , IN3_M7 = 43 , IN4_M7 = 42;
int IN1_M8 = 41 , IN2_M8 = 40;
int enA_7 = 12, enB_7 = 14, enA_8 = 15;
int pwm = 255;
void setup() {
  // put your setup code here, to run once:
  pinMode(IN1_M7, OUTPUT), pinMode(IN2_M7, OUTPUT), pinMode(IN3_M7, OUTPUT),  pinMode(IN4_M7, OUTPUT);
  pinMode(IN1_M8, OUTPUT), pinMode(IN2_M8, OUTPUT);
  pinMode(enA_7, OUTPUT),  pinMode(enA_8, OUTPUT);
  pinMode(enB_7, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(IN1_M7, HIGH);
  digitalWrite(IN2_M7, LOW);
  analogWrite(enA_7, pwm);
  digitalWrite(IN3_M7, HIGH);
  digitalWrite(IN4_M7, LOW);
  analogWrite(enB_7, pwm);
  digitalWrite(IN1_M8, HIGH);
  digitalWrite(IN2_M8, LOW);
  analogWrite(enA_8, pwm);
}
