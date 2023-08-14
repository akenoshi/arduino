const int bPin=13;
 
int bState = 0;

void setup() {
  // put your setup code here, to run once:
  for ( int i=2;i<=7;i++)
  pinMode(i,OUTPUT);
  pinMode(bPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  bState=digitalRead(bPin);
  
  if (bState== LOW)
  {
    style01();
  }
  else

  {
    style02();
  }

}


void style01(void)
{
  unsigned m,n;
  for (m=2;m<=4;m++)
  {
    for (n=1;n<=3;n++)
    {
      digitalWrite(m,HIGH);
      digitalWrite(m+n,HIGH);
      delay(500);
      digitalWrite(m,LOW);
      digitalWrite(m+n,LOW);
      delay(500);
    }
  }
}

void style02(void)
{
  unsigned char k;
  for (k=2;k<=7;k++)
  digitalWrite(k,LOW);
  delay(500);
}