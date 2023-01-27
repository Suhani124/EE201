void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT);
  pinMode(5, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, HIGH); // LED 1 ON
  delay(1000);
  digitalWrite(2, LOW); // LED 1 OFF
  delay(1000);
  digitalWrite(5, HIGH); // LED 2 ON
  delay(1000);
  digitalWrite(5, LOW); // LED 2 OFF
  delay(1000);
}
