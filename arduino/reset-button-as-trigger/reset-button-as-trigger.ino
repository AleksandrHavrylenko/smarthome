/*
 * This scatch genarates a random int number 0...32767
 * and sends the value via serial port
 * 
 * It allows to use the arduino reset button as an Home Assistant trigger
 */
void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
  long longRandomNumber = random(32767);
  Serial.println(longRandomNumber);
}

void loop() {
  // nothing
}
