/*
# This Sample code is for testing the UV Sensor .
#Connection:
    VCC-5V
    GND-GND
    OUT-Analog pin 0
*/
 
void setup() 
{
  Serial.begin(9600);// open serial port, set the baud rate to 9600 bps
}
void loop() 
{
  int sensorValue;
  sensorValue = analogRead(0);//connect UV sensors to Analog 0
  Serial.print    ("Nilai dari UV adalah : ");    
  Serial.println(sensorValue);//print the value to serial  
  delay(1000);      
}
