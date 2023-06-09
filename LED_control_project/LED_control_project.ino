void setup()  //程序初始化
{
  pinMode(1,OUTPUT);//设置LED为输出模式
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  Serial.begin(9600);//设置波特率9600
}
 
void loop()//程序主体循环
{
  Serial.print("一口： ");  //串口输出"Intensity = "
  Serial.println(analogRead(A0));     //串口输出Intensity变量的值，并换行
  Serial.print("二口："); 
  Serial.println(analogRead(A1)); 
  Serial.print("三口："); 
  Serial.println(analogRead(A2)); 
  Serial.print("四口："); 
  Serial.println(analogRead(A3)); 
  Serial.print("五口："); 
  Serial.println(analogRead(A4)); 
  delay(1000);     //延时1000ms
  if (HIGH == analogRead(A0)){
    digitalWrite(1,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
  }
    else
    digitalWrite(1,LOW);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    
}
