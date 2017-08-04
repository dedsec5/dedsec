
#include<SoftwareSerial.h>
String message; //string that stores the incoming message
void setup()
{
  Serial.begin(9600); //set baud rate
  pinMode(0, OUTPUT);
}

void loop()
{
  while(Serial.available())
  {
    message+=char(Serial.read());
  }
  if(!Serial.available())
  {
    if(message != "") // if we received some data, then light up an LED
    {   
      digitalWrite(0, HIGH);    
      Serial.println(message);
          message="1";
    }
  }
  delay(200);
}
