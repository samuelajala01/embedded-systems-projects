/* How to use the DHT-22 sensor with Arduino uno
   Temperature and humidity sensor
   More info: http://www.ardumotive.com/how-to-use-dht-22-sensor-en.html
   Dev: Michalis Vasilakis // Date: 1/7/2015 // www.ardumotive.com */

#include <LiquidCrystal.h>
#include <dht.h>
dht DHT;
#define DHT22_PIN A0   
	
LiquidCrystal lcd(12, 11, 10, 9, 8, 7);
float hum;  
float temp; 


void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
}

void loop()
{
    int chk = DHT.read22(DHT22_PIN);
    //Read data and store it to variables hum and temp
    hum = DHT.humidity;
    temp= DHT.temperature;
    //Print temp and humidity values to serial monitor
    lcd.setCursor(0, 0);   // Set cursor to column 0, row 0
  lcd.print("Temp: ");
  lcd.print(temp);

  // Print "Hum: 20" on the second line (line 1)
  lcd.setCursor(0, 1);   // Set cursor to column 0, row 1
  lcd.print("Hum: ");
  lcd.print(hum);
    delay(2000); //Delay 2 sec.
    
}

// void loop() {
//   if (Serial.available()) {
//     delay(100);
//     lcd.clear();
//     while (Serial.available() > 0) {
//       lcd.write(Serial.read());
//     }
//   }

// }