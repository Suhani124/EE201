void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(5) == HIGH) { // connected to 5V pin
    Serial.println("Hello World!");
  }
  if (digitalRead(5) == LOW) { // connected to GND pin
    Serial.println("It's 2023");
  }
  delay(1000);
}
