/* heartbeat
 *
 * print how time elapsed
 *
 */

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  delay(10);
  digitalWrite(13, HIGH); // sets the digital pin 13 on
    delay(10);
  digitalWrite(13, LOW); // sets the digital pin 13 off
  int totaltime = millis();
  Serial.print(totaltime/1000000);
  Serial.println(" time has elapsed");
  
}
