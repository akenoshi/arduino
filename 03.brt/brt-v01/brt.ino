int brt=0;
int fade=5;


void setup() {
  // put your setup code here, to run once:
 pinMode(9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(9,brt);

brt=brt+fade;
 if(brt==0||brt==255)
  {
    fade=-fade;
  }
  delay(30);
}
