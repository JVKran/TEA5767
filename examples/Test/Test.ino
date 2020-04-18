#include <Wire.h>
#include <TEA5767.h>

TEA5767 radio = TEA5767(Wire);

void setup() {
	Wire.begin();
	Serial.begin(9600);
	radio.begin();
	radio.setFrequency(100.7);
}

void loop() {
	Serial.println(radio.signalStrength());
	delay(1000);
}