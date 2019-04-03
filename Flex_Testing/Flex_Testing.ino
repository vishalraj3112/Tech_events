
#define flex1 33
#define flex2 26
#define flex3 25
void setup() {
  pinMode(flex1,INPUT);
    pinMode(flex2,INPUT);
      pinMode(flex3,INPUT);

  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  Serial.print("flex 1:");
  Serial.println(analogRead(flex1),DEC);
   Serial.print("flex 2:");
   Serial.println(analogRead(flex2),DEC);
    Serial.print("flex 3:");
    Serial.println(analogRead(flex3),DEC);
  delay(1000);
  if(analogRead(flex2)>700){
    //Serial.println("Threshold_1");
  }
  
  // put your main code here, to run repeatedly:

}
