// Define stepper motor connections:
#include <Servo.h>

#define dirPin 8
#define stepPin 5
int sen_data = 7;
Servo myservo_i;  // create servo object to control a servo
// twelve servo objects can be created on most boards
Servo myservo_j;
Servo myservo_k;
Servo myservo_t;
Servo myservo_g;
#define servo_a 3
#define servo_b 4
int pos_i = 0; 
int pos_j = 0;
int pos_k = 0;
int pos_t = 0;
int pos_h = 250;
void setup() {
    myservo_i.attach(11);  // attaches the servo on pin 9 to the servo object
  myservo_j.attach(10);
  myservo_k.attach(9);
  myservo_t.attach(6);
  myservo_g.attach(5);
  pinMode(sen_data,INPUT);
  // Declare pins as output:
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  // Set the spinning direction CW/CCW:
  digitalWrite(dirPin, LOW);
}
void loop() {
  int input = digitalRead(sen_data);
  if(input == HIGH){
  // These four lines result in 1 step:
  digitalWrite(stepPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(stepPin, LOW);
  delayMicroseconds(10);
  digitalWrite(servo_a, LOW);
  digitalWrite(servo_b,LOW);
  
}
else if (input == LOW){
  digitalWrite(stepPin, LOW);
  delayMicroseconds(50);
  digitalWrite(stepPin, LOW);
  delayMicroseconds(50);
  delay(1000);
  myservo_i.write(pos_i+15);                      // waits 15ms for the servo to reach the position
  delay(1000);
    myservo_j.write(pos_j+120);                     // waits 15ms for the servo to reach the position
  delay(1000);
  myservo_k.write(pos_k+65);
  delay(1000);
  myservo_t.write(pos_t+30);
  delay(1000);
  digitalWrite(servo_a, LOW);
  digitalWrite(servo_b,HIGH);
  delay(pos_h);
  digitalWrite(servo_a, LOW);
  digitalWrite(servo_b,LOW);
  delay(1000);
  myservo_j.write(pos_j+75);
  delay(1000);
  digitalWrite(servo_a,HIGH );
  digitalWrite(servo_b,LOW);
  delay(pos_h);
  digitalWrite(servo_a, LOW);
  digitalWrite(servo_b,LOW);
  delay(1000);
  myservo_j.write(pos_j+120);
  delay(1000);
  myservo_i.write(pos_i+90);
  delay(1000);
  myservo_j.write(pos_j+75);
    delay(1000);
  digitalWrite(servo_a, LOW);
  digitalWrite(servo_b,HIGH);
  delay(pos_h);
  digitalWrite(servo_a,HIGH );
  digitalWrite(servo_b,LOW);
  delay(pos_h);
  digitalWrite(servo_a, LOW);
  digitalWrite(servo_b,LOW);
  delay(1000);
  myservo_j.write(pos_j+120);
}
}
