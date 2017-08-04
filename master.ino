#include <SoftwareSerial.h>
#define BT_SERIAL_RX 1
#define BT_SERIAL_TX 0
SoftwareSerial BluetoothSerial(BT_SERIAL_RX, BT_SERIAL_TX);

void setup() {
    Serial.begin(9600);
    BluetoothSerial.begin(9600);
}

void loop() {

  BluetoothSerial.write("test");
  BluetoothSerial.println("test"); 
  Serial.println("test"); 
  delay(100); // prepare next data
}
