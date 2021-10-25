
#include <Servo.h>
int button = 12;

Servo myservo_i;  // create servo object to control a servo
// twelve servo objects can be created on most boards
Servo myservo_j;
Servo myservo_k;
Servo myservo_t;
Servo myservo_g;
Servo myservo_h;
int pos_i = 0; 
int pos_j = 0;
int pos_k = 0;
int pos_t = 0;
int pos_g = 0;
int pos_h = 0;
void setup(){
    myservo_i.attach(11);  // attaches the servo on pin 9 to the servo object
  myservo_j.attach(10);
  myservo_k.attach(9);
  myservo_t.attach(6);
  myservo_g.attach(5);
  myservo_h.attach(3);
  pinMode(button,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  int data = digitalRead(button);
  Serial.println(data);
  if(data == HIGH){
   for (pos_j = 0; pos_j <= 130; pos_j += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo_i.write(pos_j);
    if(pos_j== 30)
      break; 
    // tell servo to go to position in variable 'pos'
   delay(25);                     // waits 15ms for the servo to reach the position
  }
  delay(1000);
  
    for (pos_i = 45; pos_i <= 130; pos_i += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo_j.write(pos_i);
    if(pos_i== 120)
      break; 
    // tell servo to go to position in variable 'pos'
   delay(25);                     // waits 15ms for the servo to reach the position
  }
  delay(1000);
   for (pos_k = 0; pos_k <= 130; pos_k += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo_k.write(pos_k);
    if(pos_k == 90)
      break; 
    // tell servo to go to position in variable 'pos'
   delay(25);                     // waits 15ms for the servo to reach the position
  }
  delay(1000);
      for (pos_t = 0; pos_t <= 130; pos_t += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo_t.write(pos_t);
    if(pos_t == 30)
      break; 
    // tell servo to go to position in variable 'pos'
   delay(25);                     // waits 15ms for the servo to reach the position
  }
    delay(1000);
      for (pos_g = 0; pos_g <= 130; pos_g += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo_g.write(pos_g);
    if(pos_g == 30)
      break; 
    // tell servo to go to position in variable 'pos'
   delay(25);                     // waits 15ms for the servo to reach the position
  }
  delay(1000);
       for (pos_t = 30; pos_t <= 130; pos_t += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo_t.write(pos_t);
    if(pos_t == 50)
      break; 
    // tell servo to go to position in variable 'pos'
   delay(25);                     // waits 15ms for the servo to reach the position
  }
   delay(1000);
   for (pos_k = 90; pos_k <= 130; pos_k += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo_k.write(pos_k);
    if(pos_k == 100)
      break; 
    // tell servo to go to position in variable 'pos'
   delay(25);                     // waits 15ms for the servo to reach the position
  }
  delay(1000);
    for (pos_h = 0; pos_h <= 180; pos_h += 1) { // goes from 180 degrees to 0 degrees
    myservo_h.write(pos_h);
    delay(25);// tell servo to go to position in variable 'pos'                       // waits 15ms for the servo to reach the position
    // waits 15ms for the servo to reach the position
  }
delay(1000);
    for (pos_k = 100; pos_k >= 0; pos_k -= 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo_k.write(pos_k);
    if(pos_k == 0)
      break; 
    // tell servo to go to position in variable 'pos'
   delay(25);                     // waits 15ms for the servo to reach the position
  }
  delay(1000);
    for (pos_t = 50; pos_t <= 180; pos_t += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo_t.write(pos_t);
    if(pos_t == 120)
      break; 
    // tell servo to go to position in variable 'pos'
   delay(25);                     // waits 15ms for the servo to reach the position
  }
  delay(1000);
    for (pos_j = 30; pos_j <= 180; pos_j += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo_i.write(pos_j);
    if(pos_j== 120)
      break; 
    // tell servo to go to position in variable 'pos'
   delay(25);// waits 15ms for the servo to reach the position
  }
  delay(1000);
    for (pos_t = 120; pos_t >= 0; pos_t -= 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo_t.write(pos_t);
    if(pos_t == 30)
      break; 
    // tell servo to go to position in variable 'pos'
   delay(25);                     // waits 15ms for the servo to reach the position
  }
  delay(1000);
     for (pos_k = 0; pos_k <= 130; pos_k += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo_k.write(pos_k);
    if(pos_k == 90)
      break; 
    // tell servo to go to position in variable 'pos'
   delay(25);                     // waits 15ms for the servo to reach the position
  }
  delay(1000);
    for (pos_g = 30; pos_g <= 130; pos_g += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo_g.write(pos_g);
    if(pos_g == 90)
      break; 
    // tell servo to go to position in variable 'pos'
   delay(25);                     // waits 15ms for the servo to reach the position
  }
  delay(1000);
    for (pos_h = 180; pos_h >= 0; pos_h -= 1) { // goes from 180 degrees to 0 degrees
    myservo_h.write(pos_h); 
    // tell servo to go to position in variable 'pos'
   delay(25);// tell servo to go to position in variable 'pos'                 // waits 15ms for the servo to reach the position
  }
  delay(1000);
     for (pos_g = 90; pos_g >=0; pos_g -= 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo_g.write(pos_g);
    if(pos_g == 30)
      break; 
    // tell servo to go to position in variable 'pos'
   delay(25);                     // waits 15ms for the servo to reach the position
  }
  delay(1000);
      for (pos_t = 30; pos_t <= 180; pos_t += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo_t.write(pos_t);
    if(pos_t == 60)
      break; 
    // tell servo to go to position in variable 'pos'
   delay(25);                     // waits 15ms for the servo to reach the position
  }
  delay(1000);
       for (pos_k = 90; pos_k >= 0; pos_k -= 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo_k.write(pos_k);
    if(pos_k == 0)
      break; 
    // tell servo to go to position in variable 'pos'
   delay(25);                     // waits 15ms for the servo to reach the position
  }
    delay(1000);
  for (pos_i = 120; pos_i >= 45; pos_i -= 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo_j.write(pos_i);
    if(pos_i== 75)
      break; 
    // tell servo to go to position in variable 'pos'
   delay(25);
  }
   delay(1000);
    for (pos_j = 120; pos_j >= 0; pos_j -= 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo_i.write(pos_j);
    if(pos_j== 30)
      break; 
    // tell servo to go to position in variable 'pos'
   delay(25);                     // waits 15ms for the servo to reach the position                     // waits 15ms for the servo to reach the position
  }
  delay(10000);
    Serial.println("Auto mode");
  }
  else{
    int data = analogRead(A0);
  if (data > 5 && data <50){
    myservo_i.write(30);
   delay(25);                     // waits 15ms for the servo to reach the position
  }
  else if (data > 50 && data <100 ){
    myservo_j.write(120);
   delay(25);                     // waits 15ms for the servo to reach the position
  }
  //delay(1000);
  else if (data > 100 && data <150 ){
    myservo_k.write(90);
   delay(25);                     // waits 15ms for the servo to reach the position
  }
  else if (data > 150 && data <200 ){
    myservo_t.write(30);
   delay(25);                     // waits 15ms for the servo to reach the position
  }
  else if (data > 200 && data <250 ){
    myservo_g.write(30);
   delay(25);                     // waits 15ms for the servo to reach the position
  }
  else if (data > 250 && data <300 ){
    myservo_t.write(50);
   delay(25);                     // waits 15ms for the servo to reach the position
  }
  else if (data > 300 && data <350 ){
    myservo_k.write(100);
   delay(25);                     // waits 15ms for the servo to reach the position
  }
  else if (data > 350 && data <400 ){
    for (pos_h = 0; pos_h <= 180; pos_h += 1) { // goes from 180 degrees to 0 degrees
    myservo_h.write(pos_h);
    delay(25);// tell servo to go to position in variable 'pos'                       // waits 15ms for the servo to reach the position
    // waits 15ms for the servo to reach the position
  }
  }
  else if (data > 400 && data <450 ){
    myservo_k.write(0);
   delay(25);                     // waits 15ms for the servo to reach the position
  }
  else if (data > 450 && data <500 ){
    myservo_t.write(120);
   delay(25);                     // waits 15ms for the servo to reach the position
  }
  else if (data > 500 && data <550 ){
    myservo_i.write(120);
   delay(25);// waits 15ms for the servo to reach the position
  }
  else if (data > 550 && data <600 ){
    myservo_t.write(30);
   delay(25);                     // waits 15ms for the servo to reach the position
  }
  else if (data > 600 && data <650 ){
    myservo_k.write(90);
   delay(25);                     // waits 15ms for the servo to reach the position
  }
  else if (data > 650 && data <700 ){
    myservo_g.write(90);
   delay(25);                     // waits 15ms for the servo to reach the position
  }
  else if (data > 700 && data <750 ){
    for (pos_h = 180; pos_h >= 0; pos_h -= 1) { // goes from 180 degrees to 0 degrees
    myservo_h.write(pos_h); 
    // tell servo to go to position in variable 'pos'
   delay(25);// tell servo to go to position in variable 'pos'                 // waits 15ms for the servo to reach the position
  }
  }
  else if (data > 750 && data <800 ){
    myservo_g.write(30);
   delay(25);                     // waits 15ms for the servo to reach the position
  }
  else if (data > 800 && data <850 ){
    myservo_t.write(60);
   delay(25);                     // waits 15ms for the servo to reach the position
  }
  
  else if (data > 850 && data <900 ){
    myservo_k.write(0);
   delay(25);                     // waits 15ms for the servo to reach the position
  }
  
  else if (data > 900 && data <950 ){
    myservo_j.write(90);
   delay(25);
  }
  
  else if (data > 950 && data <1000 ){
    myservo_i.write(30);
   delay(25);                     // waits 15ms for the servo to reach the position                     // waits 15ms for the servo to reach the position
  }
  
  else if(data > 1000){
    myservo_i.write(0);
   delay(25);                     // waits 15ms for the servo to reach the position                     // waits 15ms for the servo to reach the position
  }
    Serial.println("Manual mode");
  }
}
