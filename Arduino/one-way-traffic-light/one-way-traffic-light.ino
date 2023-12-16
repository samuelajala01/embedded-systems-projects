void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);

}

void loop() {
  // TO CONTROL RED LIGHT:
  digitalWrite(8, HIGH);
  delay(3000);
  digitalWrite(8, LOW);
  delay(300);
  digitalWrite(8, HIGH);
  delay(300);
  digitalWrite(8, LOW);
  delay(300);
  digitalWrite(8, HIGH);
  delay(300);
  digitalWrite(8, LOW);
  delay(300);
  digitalWrite(8, HIGH);
   delay(300);
  digitalWrite(8, LOW);
  // TO CONTROL YELLOW LIGHT
  digitalWrite(9, HIGH);
  delay(3000);
  digitalWrite(9, LOW);
  delay(300);
  digitalWrite(9, HIGH);
  delay(300);
  digitalWrite(9, LOW);
  delay(300);
  digitalWrite(9, HIGH);
  delay(300);
  digitalWrite(9, LOW);
  delay(300);
  digitalWrite(9, HIGH);
   delay(300);
  digitalWrite(9, LOW);
  // TO CONTROL GREEN LIGHT
  digitalWrite(10, HIGH);
  delay(3000);
  digitalWrite(10, LOW);
  delay(300);
  digitalWrite(10, HIGH);
  delay(300);
  digitalWrite(10, LOW);
  delay(300);
  digitalWrite(10, HIGH);
  delay(300);
  digitalWrite(10, LOW);
  delay(300);
  digitalWrite(10, HIGH);
  delay(300);
  digitalWrite(10, LOW);
}
