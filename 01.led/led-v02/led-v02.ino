void setup() {
  // put your setup code here, to run once:
  for (int i=2;i<=7;i++)
  pinMode(i,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  style_1();
  //flash();
}

void style_1(void)
{
  unsigned char j;
  for(j=2;j<=7;j=j+1)
  {digitalWrite(j,HIGH);
  delay(200);
  }
  for(j=7;j>=2;j=j-1)
  {
    digitalWrite(j,LOW);
    delay(200);
  }
}

void flash(void)
{
  unsigned j,k;
  for(k=0;k<=1;k++)
  {
    for(j=2;j<=7;j++)
      digitalWrite(j,HIGH);
      delay(500);
      for (j=2;j<=7;j++)
      digitalWrite(j,LOW);
      delay(500);
    
  }
}