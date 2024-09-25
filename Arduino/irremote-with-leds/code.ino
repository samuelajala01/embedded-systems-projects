#include <IRremote.hpp>
#define IR_RECEIVE_PIN 3

void initializeReceiver() {
  // set up the receiver to receive input the NEW way- it changed from earlier versions)
  IrReceiver.begin(IR_RECEIVE_PIN);
}

int redPin = 5;
int greenPin = 6;
int bluePin = 7;

void setup() {
  
  pinMode(redPin, INPUT);
  pinMode(greenPin, INPUT);
  pinMode(bluePin, INPUT);

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

void translateIR() {
  // Takes command based on IR code received
  switch (IrReceiver.decodedIRData.command) {
   
    case 48:
      Serial.println("num: 1");
      digitalWrite(redPin, HIGH);
      delay(2000);
      digitalWrite(redPin, LOW);
      break;
    case 24:
      Serial.println("num: 2");
      digitalWrite(greenPin, HIGH);
      delay(2000);
      digitalWrite(greenPin, LOW);
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