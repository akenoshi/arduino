void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //串口用来观察电位器的电位值大小
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorReading = analogRead(A0); //读取电位器的模拟量
  Serial.println(sensorReading); //通过串口来显示电位器的模拟量数值

  int thisPitch = map(sensorReading,400,1000,120,1500); //用来提取蜂鸣器的发生频率
  tone(9,thisPitch,1000); //1000为声音播放时间，9为驱动蜂鸣器的端口
  delay(4000); //延迟时间，间隔时间
}
