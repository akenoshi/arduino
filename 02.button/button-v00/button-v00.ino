const int buttonPin=13;
const int ledPin=2;

int buttonState=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(buttonPin);
  if (buttonState==HIGH)
  {
    digitalWrite(ledPin,HIGH);
  }
  else
  {
    digitalWrite(ledPin,LOW);
  }
}

