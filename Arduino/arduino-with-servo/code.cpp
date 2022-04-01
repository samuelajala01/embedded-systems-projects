
#include <Servo.h>

int Position = 0;



Servo servo_9;

void setup()
{
  servo_9.attach(9, 500, 6500);

  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  Position = 0;
  for (Position = 1; Position <= 180; Position += 1) {
    servo_9.write(Position);
    delay(10); // Wait for 10 millisecond(s)
  }
  for (Position = 180; Position >= 1; Position -= 1) {
    servo_9.write(Position);
    delay(10); // Wait for 10 millisecond(s)
  }

  digitalWrite(LED_BUILTIN, HIGH);
}
