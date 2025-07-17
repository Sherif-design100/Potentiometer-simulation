const int potPin=2;
void setup() {
  Serial.begin(115200);
  // put your setup code here, to run once:

}

void loop() {
  int potValue=analogRead(potPin);
  Serial.print("Potentiometer Value: ");
  Serial.println(potValue);
  delay(1000);
  // put your main code here, to run repeatedly:

}