
void setup() {
pinMode(2,INPUT_PULLUP); //left
pinMode(3,INPUT_PULLUP);//right
pinMode(4,INPUT_PULLUP);//down
pinMode(6,INPUT_PULLUP);//up
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);

Serial.begin(9600);

}

  //digitalWrite(10,HIGH);
void loop() {

  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(13,HIGH);
    if(digitalRead(2)==LOW){
    Serial.println("l"); }
    //digitalWrite(10,LOW);
  
   if(digitalRead(3)==LOW){
    Serial.println("r");
    //digitalWrite(11,LOW);
  }
   else if(digitalRead(4)==LOW){
    Serial.println("d");
    //digitalWrite(12,LOW);
  }
   else if(digitalRead(6)==LOW){
    Serial.println("u");
    //digitalWrite(13,LOW);  
  } 
    else
    {Serial.println(" ");}
 
 
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
    
  delay(30);
  // put your main code here, to run repeatedly:

}
