const int led_a= 10;
const int led_b= 11;
const int led_c= 12;
void setup() {
  // put your setup code here, to run once:
pinMode(led_a,OUTPUT);
pinMode(led_b,OUTPUT);
pinMode(led_c,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i=10; 13>=i; i++){
digitalWrite(i,HIGH);
delay(500);
digitalWrite(i,LOW);
delay(5
00);
}
}
