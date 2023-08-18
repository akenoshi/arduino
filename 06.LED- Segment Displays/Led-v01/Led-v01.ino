void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  for (int n=2;n<=9;n++)
    {
      pinMode(n,OUTPUT);
    }
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,1);

  int n0[8]={0,0,0,0,0,0,1,1}; //采用数码管中的八个led等的亮起来控制其显示数值
  int z=0;
  for(int x=2;x<=9;x++)
  {
    digitalWrite(x,n0[z]);
    z++;
    if(z>=9)
    {
      z=0;
    }
    delay(1000);
  }
  
  int n1[8]={1,0,0,1,1,1,1,1};
   z=0;
  for(int x=2;x<=9;x++)
  {
    digitalWrite(x,n0[z]);
    z++;
    if(z>=9)
    {
      z=0;
    }
    delay(1000);
  }

  int n2[8]={0,0,1,0,0,1,0,1};
  z=0;
  for(int x=2;x<=9;x++)
  {
    digitalWrite(x,n0[z]);
    z++;
    if(z>=9)
    {
      z=0;
    }
    delay(1000);
  }
}
