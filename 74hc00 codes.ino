/**
    151220192044 Mehmet Ali Gök
**/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int truthtable;
void setup() {
  pinMode(13, OUTPUT);                                //Define the function of outputs .
   pinMode(12, OUTPUT);                              
    pinMode(11, INPUT);                               //Define the function of inputs .
     Serial.begin(9600);

}

void loop() {                                                            
  truthtable=rand()%4;                               //It is intended that the truthtable variable take different values ​​by using the rand function.
 switch(truthtable){                                 //Switch-Case function was created to detect different situations.
  case 0:
   digitalWrite(13, LOW);
    digitalWrite(12, LOW);
     digitalRead(11);
      Serial.print("case0= ");
       Serial.print(digitalRead(11));
        if(digitalRead(11)==1){
         Serial.println(" PASS");                  //If the integrated works correctly write PASS if works incorrectly write FAİLED
 }
  else
   Serial.println(" FAİLED");                                                                                              
    break;
 
  case 1:
   digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
     digitalRead(11);
      Serial.print("case1= ");
       Serial.print(digitalRead(11));
        if(digitalRead(11)==1){
         Serial.println(" PASS");
 }
  else
   Serial.println(" FAİLED");
    break;

  case 2:
   digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
     digitalRead(11);
      Serial.print("case2= ");
       Serial.print(digitalRead(11));
        if(digitalRead(11)==1){
         Serial.println(" PASS");
 }
  else
   Serial.println(" FAİLED");
    break;
 
  case 3:
   digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
     digitalRead(11);
      Serial.print("case3= ");
       Serial.print(digitalRead(11));
        if(digitalRead(11)==0){
         Serial.println(" PASS");
 }
  else
   Serial.println(" FAİLED");
   
    break;
     default:
      break;
  
 }

}
