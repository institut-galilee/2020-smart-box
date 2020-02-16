byte buzzPin = 8;

void setup() {
  // put your setup code here, to run once:
    pinMode(buzzPin,OUTPUT);
    Serial.begin(9600);
}

void loop() {
  while (Serial.available() > 0) {
    int i  = Serial.parseInt();
    byte val  = Serial.read();
    Serial.println(val);
    tone(buzzPin,val);
    delay(100);
  }

}
