const int leftpin = 2;
const int rightpin = 3;
const int uppin = 5;
const int downpin = 4;
const int backpin = 6;
//const int startpin = 7;

byte leftButton = LOW;
byte rightButton = LOW;
byte upButton = LOW;
byte downButton = LOW;
byte backButton = LOW;
//byte startButton = LOW;

byte buttonRead = LOW;
void setup() 
{ 
  pinMode(leftpin, INPUT_PULLUP);
  pinMode(rightpin, INPUT);
  pinMode(uppin, INPUT);
  pinMode(downpin, INPUT);
  pinMode(backpin, INPUT);
  //pinMode(startpin, INPUT);
  Serial.begin(115200); 
} 
 
void loop() 
{ 
  buttonRead = digitalRead(leftpin);
  if(buttonRead != leftButton)
  {  
     leftButton = buttonRead;
     Serial.print('l');
  }
  buttonRead = digitalRead(rightpin);
  if(buttonRead != rightButton)
  {  
     rightButton = buttonRead;
     Serial.print('r');
  }
  buttonRead = digitalRead(uppin);
  if(buttonRead != upButton)
  {  
     upButton = buttonRead;
     Serial.print('u');
  }
  buttonRead = digitalRead(downpin);
  if(buttonRead != downButton)
  {  
     downButton = buttonRead;
     Serial.print('d');
  }
 /* buttonRead = digitalRead(startpin);
  if(buttonRead != startButton)
  {  
     startButton = buttonRead;
     Serial.print('s');
  }*/
  buttonRead = digitalRead(backpin);
  if(buttonRead != backButton)
  {  
     backButton = buttonRead;
     Serial.print('b');
  }
  delay(10); // allow some time for the Serial data to be sent 
} 
