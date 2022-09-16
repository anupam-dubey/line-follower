void setup() {
  // put your setup code here, to run once:
 pinMode(3,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(6,OUTPUT);
 pinMode(7,OUTPUT);
 pinMode(8,INPUT_PULLUP);
 pinMode(9,INPUT_PULLUP);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
 if(digitalRead(8)==LOW && digitalRead(9)==LOW)
 {
  digitalWrite(3,LOW);
 digitalWrite(4,HIGH);
 digitalWrite(6,LOW);
 digitalWrite(7,HIGH);
 }
 else if(digitalRead(8)==HIGH && digitalRead(9)==LOW)
 {
  digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(6,LOW);
 digitalWrite(7,HIGH);
 }
 else if(digitalRead(8)==LOW && digitalRead(9)==HIGH)
 {
  digitalWrite(3,LOW);
 digitalWrite(4,HIGH);
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 }
 else
 {
  digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(6,LOW);
 digitalWrite(7,LOW); 
 }
}
