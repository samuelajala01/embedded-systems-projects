
   
int light = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);

  pinMode(3, OUTPUT);
}

void loop()
{
  light = analogRead(A0);
  Serial.println(light);
  if (light < 400) {
    digitalWrite(3, HIGH);
  } else {
    digitalWrite(3, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
