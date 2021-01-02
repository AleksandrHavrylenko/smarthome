/*
 * This sketch allows using contact shorting as a Home Assistant trigger
 * A0 - 5V should be shorted for some time(less 1 s) to change the state(0/1)
 */

const int WIRE_PIN = 14; // A0
const int LED_PIN = 13;

bool state = false;

void setup() {
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);

}

void loop() {
  if (analogRead(WIRE_PIN) == 1023) {
    state = !state;
    Serial.println(state);
    digitalWrite(LED_PIN, state ? HIGH : LOW);
    delay(1000);
  }

  delay(100);
}
