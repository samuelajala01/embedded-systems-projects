// C++ code
// By Samuel Ajala 210211059
//code for two way traffic light

void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT); // TO CONTROL RED LIGHT:
  pinMode(9, OUTPUT); // TO CONTROL YELLOW LIGHT:
  pinMode(10, OUTPUT); // TO CONTROL GREEN LIGHT:
  
  pinMode(11, OUTPUT); // TO CONTROL RED LIGHT:
  pinMode(12, OUTPUT); // TO CONTROL YELLOW LIGHT:
  pinMode(13, OUTPUT); // TO CONTROL GREEN LIGHT:

}

void loop() {
  digitalWrite(8, HIGH); // TO CONTROL RED LIGHT:
  digitalWrite(13, HIGH); // TO CONTROL GREEN LIGHT
  delay(3000);
  digitalWrite(8, LOW);
  digitalWrite(13, LOW); // TO CONTROL GREEN LIGHT
 
  digitalWrite(9, HIGH); // TO CONTROL YELLOW LIGHT
  digitalWrite(12, HIGH); // TO CONTROL YELLOW LIGHT
  delay(3000);
  digitalWrite(9, LOW); // TO CONTROL YELLOW LIGHT
  digitalWrite(12, LOW); // TO CONTROL YELLOW LIGHT
  
  digitalWrite(10, HIGH); // TO CONTROL GREEN LIGHT
  digitalWrite(11, HIGH); // TO CONTROL RED LIGHT:
  delay(3000);
  digitalWrite(10, LOW); // TO CONTROL GREEN LIGHT
  digitalWrite(11, LOW);  // TO CONTROL RED LIGHT:
}
