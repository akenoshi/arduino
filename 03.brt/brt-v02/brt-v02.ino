int ledPin = 9;
int pot=A0;

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int fadeValue=0;fadeValue<=255;fadeValue+=5) // fadeVaule set as the voltage of ledpin.
    {
      analogWrite(ledPin,fadeValue);
      int time=analogRead(pot)/5; //read the vaule of voltage divider, set the vaule of votage divider to delay.
      delay(time);
    }
}
