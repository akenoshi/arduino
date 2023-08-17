void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int n = analogRead(A0);

  float V = n*(5.0/1023*100);

  Serial.println(V);

  delay(2000);
}
