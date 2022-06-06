int buzzer = 2;

void setup()
{
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
  
}

void loop()
{
  int gasRead = analogRead(A0);
  
  
  if(gasRead > 101){
    tone(buzzer, 1000, 1500);
    delay(1000);
    noTone(buzzer);
    delay(1000);
  }
    
    else{
      noTone(buzzer);
    }
  
  Serial.println(gasRead);
  delay(1000);
}