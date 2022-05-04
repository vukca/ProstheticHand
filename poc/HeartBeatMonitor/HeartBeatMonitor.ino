/******************************************************************************
Heart_Rate_Display.ino
Publisher: https://www.circuitschools.com
Example from: https://www.circuitschools.com/ecg-monitoring-system-using-ad8232-with-arduino-or-esp32-iot-based/

ESP & sensor wiring:
  Sensor        ESP
   GND           GND
   3.3v          3.3v
   out           34  (analog)
   LO-           25
   LO+           26
   SDN           not conn.

Body wiring:
  Red: RA (right arm or right side of chest)
  Yellow: LA (left arm or left side of chest)
  Green: RL (right leg)

******************************************************************************/

#define ANALOG_INPUT_PIN 34
#define LO_NEG_PIN 25
#define LO_POS_PIN 26

const int analogInputPin = 34;
const int loNegPin = 34;
const int loPosPin = 34;

void setup() {
  // Initialize the serial communication
  Serial.begin(9600);
  
  pinMode(LO_NEG_PIN, INPUT); // Setup for leads off detection LO +
  pinMode(LO_POS_PIN, INPUT); // Setup for leads off detection LO -
}
 
void loop() {
  // If leads are not connected
  if((digitalRead(LO_NEG_PIN) == 1)||(digitalRead(LO_POS_PIN) == 1)){
    Serial.println('!');
  }
  else{
    // Send the value of analog input
    Serial.println(analogRead(ANALOG_INPUT_PIN));
  }
  
  // Wait for a bit to keep serial data from saturating
  delay(1);
}
