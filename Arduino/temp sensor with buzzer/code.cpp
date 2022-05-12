// C++ code

void setup()
{
  Serial.begin(9600); // Setup Serial Monitor
  pinMode(6, OUTPUT); // Setup for LED
  pinMode(5, OUTPUT); // Setup for Buzzer(Piezo)
}

void loop()
{
  int tempRead = analogRead(A1); // To store read values
  
  if(tempRead >= 28){
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
      delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(5, LOW);
      delay(1000); // Wait for 1000 millisecond(s)
  }
  else{
    digitalWrite(6, LOW);
  }
  
  Serial.print("Temperature: ");
  Serial.print(tempRead);
  Serial.println("C");  //print the temperature status
  delay(1000);  
}
