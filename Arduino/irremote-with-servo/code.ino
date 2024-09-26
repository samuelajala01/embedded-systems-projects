#include <IRremote.hpp>
#include <Servo.h>

#define IR_RECEIVE_PIN 3
Servo servo_9;

int Position = 0;

void initializeReceiver() {
  // set up the receiver to receive input the NEW way- it changed from earlier versions)
  IrReceiver.begin(IR_RECEIVE_PIN);
}

int redPin = 5;
int greenPin = 6;
int bluePin = 7;

void setup() {
   
  servo_9.attach(9, 500, 6500);
 
  pinMode(redPin, INPUT);
  pinMode(greenPin, INPUT);
  pinMode(bluePin, INPUT);

  digitalWrite(redPin, HIGH);

  initializeReceiver();
  Serial.begin(115200);
}

void loop() {
  // Checks received an IR signal
  if (IrReceiver.decode()) {
    translateIR(); // calls our translate function
    IrReceiver.resume();  // Receive the next value
  }
}

void OpenDoor(){
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);
  for (Position = 90; Position <= 180; Position += 1) {
    servo_9.write(Position);
    delay(10); // Wait for 10 millisecond(s)
  }
}

void CloseDoor(){
  digitalWrite(greenPin, LOW);
  digitalWrite(redPin, HIGH);
  for (Position = 180; Position >= 90; Position -= 1) {
    servo_9.write(Position);
    delay(10); // Wait for 10 millisecond(s)
  }
  
}

void translateIR() {
  // Takes command based on IR code received
  switch (IrReceiver.decodedIRData.command) {
    case 48:
      Serial.println("num 1 pressed: Door Opens");
      OpenDoor();

      break;
    case 24:
      Serial.println("num 2 pressed: Door Closes");
      CloseDoor();
      break;
    case 122:
      Serial.println("num: 3");
      digitalWrite(bluePin, HIGH);
      delay(2000);
      digitalWrite(bluePin, LOW);
      break;
    default:
      Serial.println("another button was pressed");
      
  }
}