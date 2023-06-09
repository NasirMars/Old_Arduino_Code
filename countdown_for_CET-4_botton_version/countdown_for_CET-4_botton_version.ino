int buttonstate = 0;
void setup() {
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);//control pin
  pinMode(9,OUTPUT);//control pin
  pinMode(10,OUTPUT);//VCC
  pinMode(buttonstate,INPUT);//state
  pinMode(12,OUTPUT);//GND
}
void loop() {
for(int x =0;x<12600000;x++)
{
 digitalWrite(1,HIGH);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(6,LOW);
 digitalWrite(7,LOW); 
 digitalWrite(10,HIGH);
 digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//4
 digitalWrite(1,LOW);  
 digitalWrite(2,HIGH);
 digitalWrite(3,LOW);  
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);  
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
  buttonstate = digitalRead(11);
  if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//6
  }
for(int x =0;x<21600000;x++)
{
 digitalWrite(1,HIGH);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
  buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//4
 digitalWrite(1,LOW);
 digitalWrite(2,HIGH);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,HIGH);
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//5
  }
for(int x =0;x<21600000;x++)
{
 digitalWrite(1,HIGH);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//4
 digitalWrite(1,HIGH);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//4
  }
for(int x =0;x<21600000;x++)
{
 digitalWrite(1,HIGH);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//4
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//3
  }
for(int x =0;x<21600000;x++)
{
 digitalWrite(1,HIGH);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//4
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,HIGH);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,HIGH);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//2
  }
for(int x =0;x<21600000;x++)
{
 digitalWrite(1,HIGH);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//4
 digitalWrite(1,HIGH);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(7,HIGH);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//1
  }
for(int x =0;x<21600000;x++)
{
 digitalWrite(1,HIGH);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//4
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
 digitalWrite(7,HIGH);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//0
  }
for(int x =0;x<21600000;x++)
{
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//3
 digitalWrite(1,LOW);  
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);  
 digitalWrite(4,LOW);
 digitalWrite(5,HIGH);  
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//9
  }
for(int x =0;x<21600000;x++)
{
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//3
 digitalWrite(1,LOW);  
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);  
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);  
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//8
  }
for(int x =0;x<21600000;x++)
{
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//3
 digitalWrite(1,LOW);  
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);  
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);  
 digitalWrite(6,HIGH);
 digitalWrite(7,HIGH);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//7
  }
for(int x =0;x<21600000;x++)
{
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//3
 digitalWrite(1,LOW);  
 digitalWrite(2,HIGH);
 digitalWrite(3,LOW);  
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);  
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//6
  }
for(int x =0;x<21600000;x++)
{
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//3
 digitalWrite(1,LOW);
 digitalWrite(2,HIGH);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,HIGH);
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//5
  }
for(int x =0;x<21600000;x++)
{
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//3
 digitalWrite(1,HIGH);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//4
  }
for(int x =0;x<21600000;x++)
{
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//3
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//3
  }
for(int x =0;x<21600000;x++)
{
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//3
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,HIGH);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,HIGH);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//2
  }
for(int x =0;x<21600000;x++)
{
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//3
 digitalWrite(1,HIGH);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(7,HIGH);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//1
  }
for(int x =0;x<21600000;x++)
{
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//3
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
 digitalWrite(7,HIGH);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//0
  }
for(int x =0;x<21600000;x++)
  {
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,HIGH);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,HIGH);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//2
 digitalWrite(1,LOW);  
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);  
 digitalWrite(4,LOW);
 digitalWrite(5,HIGH);  
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//9
  }
for(int x =0;x<21600000;x++)
  {
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,HIGH);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,HIGH);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//2
 digitalWrite(1,LOW);  
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);  
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);  
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//8
  }
 for(int x =0;x<21600000;x++)
  {
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,HIGH);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,HIGH);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//2
 digitalWrite(1,LOW);  
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);  
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);  
 digitalWrite(6,HIGH);
 digitalWrite(7,HIGH);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//7
  }
 for(int x =0;x<21600000;x++)
  {
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,HIGH);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,HIGH);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//2
 digitalWrite(1,LOW);  
 digitalWrite(2,HIGH);
 digitalWrite(3,LOW);  
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);  
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//6
  }
 for(int x =0;x<21600000;x++)
  {
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,HIGH);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,HIGH);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//2
 digitalWrite(1,LOW);
 digitalWrite(2,HIGH);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,HIGH);
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//(5)
  }
 for(int x =0;x<21600000;x++)
  {
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,HIGH);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,HIGH);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//2
 digitalWrite(1,HIGH);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//4
  }
 for(int x =0;x<21600000;x++)
  {
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,HIGH);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,HIGH);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//2
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//3
  }
 for(int x =0;x<21600000;x++)
  {
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,HIGH);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,HIGH);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//2
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,HIGH);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,HIGH);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//2
  }
 for(int x =0;x<21600000;x++)
  {
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,HIGH);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,HIGH);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//2
 digitalWrite(1,HIGH);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(7,HIGH);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//1
  }
  for(int x =0;x<21600000;x++)
  {
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,HIGH);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,HIGH);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//2
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
 digitalWrite(7,HIGH);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//0
  }
  for(int x =0;x<21600000;x++)
  {
 digitalWrite(1,HIGH);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(7,HIGH);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//1
 digitalWrite(1,LOW);  
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);  
 digitalWrite(4,LOW);
 digitalWrite(5,HIGH);  
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//9
  }
  for(int x =0;x<21600000;x++)
  {
 digitalWrite(1,HIGH);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(7,HIGH);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//1
 digitalWrite(1,LOW);  
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);  
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);  
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//8
  }
  for(int x =0;x<21600000;x++)
  {
 digitalWrite(1,HIGH);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(7,HIGH);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//1
 digitalWrite(1,LOW);  
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);  
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);  
 digitalWrite(6,HIGH);
 digitalWrite(7,HIGH);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
 digitalWrite(8,HIGH);
 digitalWrite(9,LOW);
 }else{
 digitalWrite(8,LOW);
 digitalWrite(9,LOW);
 }
 delay(2);//7
  }
  for(int x =0;x<21600000;x++)
  {
 digitalWrite(1,HIGH);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(7,HIGH);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//1
 digitalWrite(1,LOW);  
 digitalWrite(2,HIGH);
 digitalWrite(3,LOW);  
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);  
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//6
  }
   for(int x =0;x<21600000;x++)
  {
 digitalWrite(1,HIGH);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(7,HIGH);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//1
 digitalWrite(1,LOW);
 digitalWrite(2,HIGH);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,HIGH);
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//5
  }
  for(int x =0;x<21600000;x++)
  {
 digitalWrite(1,HIGH);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(7,HIGH);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//1
 digitalWrite(1,HIGH);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//4
  }
  for(int x =0;x<21600000;x++)
  {
 digitalWrite(1,HIGH);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(7,HIGH);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//1
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//3
  }
  for(int x =0;x<21600000;x++)
  {
 digitalWrite(1,HIGH);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(7,HIGH);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//1
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,HIGH);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,HIGH);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//2
  }
  for(int x =0;x<21600000;x++)
  {
 digitalWrite(1,HIGH);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(7,HIGH);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//1
 digitalWrite(1,HIGH);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(7,HIGH);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//1
  }
  for(int x =0;x<21600000;x++)
  {
 digitalWrite(1,HIGH);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(7,HIGH);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//1
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
 digitalWrite(7,HIGH);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//0
  }
    for(int x =0;x<21600000;x++)
  {
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
 digitalWrite(7,HIGH);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//0
 digitalWrite(1,LOW);  
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);  
 digitalWrite(4,LOW);
 digitalWrite(5,HIGH);  
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//9
  }
   for(int x =0;x<21600000;x++)
  {
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
 digitalWrite(7,HIGH);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//0
 digitalWrite(1,LOW);  
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);  
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);  
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//8
  }
   for(int x =0;x<21600000;x++)
  {
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
 digitalWrite(7,HIGH);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//0
 digitalWrite(1,LOW);  
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);  
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);  
 digitalWrite(6,HIGH);
 digitalWrite(7,HIGH);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//7
  }
   for(int x =0;x<21600000;x++)
  {
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
 digitalWrite(7,HIGH);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//0
 digitalWrite(1,LOW);  
 digitalWrite(2,HIGH);
 digitalWrite(3,LOW);  
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);  
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//6
  }
  for(int x =0;x<21600000;x++)
  {
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
 digitalWrite(7,HIGH);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//0
 digitalWrite(1,LOW);
 digitalWrite(2,HIGH);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,HIGH);
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//5
  }
  for(int x =0;x<21600000;x++)
  {
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
 digitalWrite(7,HIGH);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//0
 digitalWrite(1,HIGH);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//4
  }
  for(int x =0;x<21600000;x++)
  {
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
 digitalWrite(7,HIGH);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//0
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//3
  }
  for(int x =0;x<21600000;x++)
  {
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
 digitalWrite(7,HIGH);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//0
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,HIGH);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,HIGH);
 digitalWrite(7,LOW);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//2
  }
  for(int x =0;x<21600000;x++)
  {
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
 digitalWrite(7,HIGH);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//0
 digitalWrite(1,HIGH);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(7,HIGH);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//1
  }
  for(int x =0;x<21600000;x++)
  {
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
 digitalWrite(7,HIGH);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//0
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
 digitalWrite(7,HIGH);
 digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
 buttonstate = digitalRead(11);
 if (buttonstate == HIGH){
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
 }else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
 }
 delay(2);//0
  }
}
