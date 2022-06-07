#include<math.h>

int IN1_M1=A0 ,IN2_M1=A1 ,IN3_M1=A2 ,IN4_M1=A3, ;
int IN1_M2=A4 ,IN2_M2=A5 ,IN3_M2=A6 ,IN4_M2=A7;
int IN1_M3=A8 ,IN2_M3=A9 ,IN3_M3=A10 ,IN4_M3=A11;
int IN1_M4=A12 ,IN2_M4=A13 ,IN3_M4=A14 ,IN4_M4=A15;
int IN1_M5=53 ,IN2_M5=52 ,IN3_M5=51 ,IN4_M5=50, ENA_M1=2, ENA_M2=3;
int IN1_M6=49 ,IN2_M6=48 ,IN3_M6=47 ,IN4_M6=46, ENA_M1=4, ENA_M2=5;
int IN1_M7=45 ,IN2_M7=44 ,IN3_M7=43 ,IN4_M7=42, ENA_M1=6, ENA_M2=7;
int IN1_M8=41 ,IN2_M8=40 ,IN3_M8=39 ,IN4_M8=38, ENA_M1=8, ENA_M2=9;
int IN1_M9=37 ,IN2_M9=36 ,IN3_M9=35 ,IN4_M9=34, ENA_M1=10, ENA_M2=11;
int IN1_M10=33 ,IN2_M10=32 ,IN3_M10=31 ,IN4_M10=30;
int IN1_M11=29 ,IN2_M11=28;

void setup() {
  
  
 //Motor Driver 1 and two motors
  
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
  pinMode(IN4M8, OUTPUT);
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
 
  pinMode(IN1_M11, OUTPUT);
  pinMode(IN2_M11 OUTPUT);
}

void loop() 
{
  
      //FORWARD MOTION
      
      forward();

      //Right Turn

      Right_turn();

      //Left turn

      Left_turn();

      
      
    
   
    

}

void forward()
{
  
      //CELL UNIT 1    
      digitalWrite(IN1_M1, HIGH);
      digitalWrite(IN2_M1, LOW);
     
      digitalWrite(IN3_M1, LOW);
      digitalWrite(IN4_M1, HIGH);
      
      //CELL UNIT 3 
      digitalWrite(IN1_M7, HIGH);
      digitalWrite(IN2_M7, LOW);
      
      digitalWrite(IN3_M7, LOW);
      digitalWrite(IN4_M7, HIGH);
      
      //CELL UNIT 6
      digitalWrite(IN1_M10, HIGH);
      digitalWrite(IN2_M10, LOW);
      
      digitalWrite(IN3_M10, LOW);
      digitalWrite(IN4_M10, HIGH);
      delay(8000);

      //STOP
      digitalWrite(IN1_M1, LOW);
      digitalWrite(IN2_M1, LOW);
      
      digitalWrite(IN3_M1, LOW);
      digitalWrite(IN4_M1, LOW);
      
      digitalWrite(IN1_M7, LOW);
      digitalWrite(IN2_M7, LOW);
      
      digitalWrite(IN3_M7, LOW);
      digitalWrite(IN4_M7, LOW);
      
      digitalWrite(IN1_M10, LOW);
      digitalWrite(IN2_M10, LOW);
      
      digitalWrite(IN3_M10, LOW);
      digitalWrite(IN4_M10, LOW);
      delay(8000);
 }

 void Right_turn()
 {
  //CELL UNIT 1    
      digitalWrite(IN1_M1, HIGH);
      digitalWrite(IN2_M1, LOW);
     
      digitalWrite(IN3_M1, LOW);
      digitalWrite(IN4_M1, HIGH);
      
      //CELL UNIT 3 
      digitalWrite(IN1_M7, HIGH);
      digitalWrite(IN2_M7, LOW);
      analogWrite(ENA_M7, (255*0.7))
      
      digitalWrite(IN3_M7, LOW);
      digitalWrite(IN4_M7, HIGH);
      analogWrite(ENA_M7, (255*0.96))
      
      digitalWrite(IN1_M8, HIGH);
      digitalWrite(IN2_M8, LOW);
      analogWrite(ENA_M7, (255*0.25))
      
      
      //CELL UNIT 6
      digitalWrite(IN1_M9, HIGH);
      digitalWrite(IN2_M9, LOW);
      analogWrite(ENA_M9, (255*0.7))
      
      digitalWrite(IN3_M9, LOW);
      digitalWrite(IN4_M9, HIGH);
      analogWrite(ENA_M9, (255*0.96))
      
      digitalWrite(IN3_M8, HIGH);
      digitalWrite(IN4_M8, LOW);
      analogWrite(ENB_M8, (255*0.25))
      delay(8000);
      

      //STOP
      digitalWrite(IN1_M1, LOW);
      digitalWrite(IN2_M1, LOW);
      
      digitalWrite(IN3_M1, LOW);
      digitalWrite(IN4_M1, LOW);
      
      digitalWrite(IN1_M7, LOW);
      digitalWrite(IN2_M7, LOW);
      
      digitalWrite(IN3_M7, LOW);
      digitalWrite(IN4_M7, LOW);
      
      digitalWrite(IN1_M10, LOW);
      digitalWrite(IN2_M10, LOW);
      
      digitalWrite(IN3_M10, LOW);
      digitalWrite(IN4_M10, LOW);
      delay(8000);
 
 
 }
