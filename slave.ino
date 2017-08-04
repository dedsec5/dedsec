#include<SoftwareSerial.h>
#define BT_SERIAL_RX 1
#define BT_SERIAL_TX 0
SoftwareSerial BTSerial(BT_SERIAL_RX, BT_SERIAL_TX);
char inputString;
void setup() {
  Serial.begin(9600);
  BTSerial.begin(9600);
  pinMode(13, OUTPUT);

}

void loop() {
 if (!BTSerial.available()) {

    Serial.println("break");
    delay(10000);
   
 }
 else if (BTSerial.available()){
  //Serial.println("a");
   inputString=char(BTSerial.read());
    Serial.println(inputString);
    digitalWrite(13, HIGH);
 }
}
  


