void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=200;i<+800;i++)
  {
    pinMode(4,OUTPUT);
    tone(4,i); //tone 函数为跳声函数，主要用来驱动产生一个占空比为50%的制定频率方波。而noTong（pin）则用停止指定引脚上的方波输出。
    delay(5);
  }
  delay(4000);
  for(int i=800;i>=200;i--)
  {
    pinMode(4,i);
    tone(4,i);
    delay(5);
  }
}
