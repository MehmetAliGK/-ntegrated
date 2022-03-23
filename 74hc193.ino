/**
    151220192044 Mehmet Ali Gök
**/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int truthtable;                                               // Define the function of outputs .
int x;                                                        // BCD transform to the decimal.
#define clockup 5                                             // Clockup declerad the pin 5.
#define clockdown 4                                           // Clockdown declerad the pin 4. 

void setup() {
  pinMode(13, OUTPUT);                                        // A,B,C,D outputs declerad to 13,12,11,10 pins. 
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);                                                      
  pinMode(9, INPUT);                                          // QA,QB,QC,QD inputs declerad to 9,8,7,6 pins. 
  pinMode(8, INPUT);
  pinMode(7, INPUT);
  pinMode(6, INPUT);                                                          
  Serial.begin(9600); 
}

void loop() {
  truthtable=rand()%16;                                      // It is intended that the truthtable variable take different values ​​by using the rand function.
  switch(truthtable){                                         //Switch-Case function was created to detect different situations.
  case 0:
    digitalWrite(clockup, HIGH); //Clockup activated.
     Serial.print("case0= ");
      digitalWrite(13, LOW); 
       digitalRead(13);
        Serial.print(digitalRead(13));
         digitalWrite(12, LOW);
          digitalRead(12);
           Serial.print(digitalRead(12));
            digitalWrite(11, LOW);
             digitalRead(11);
              Serial.print(digitalRead(11));
               digitalWrite(10, LOW);
                digitalRead(10);
                 Serial.println(digitalRead(10));
                  x = 1*digitalRead(10)+2*digitalRead(11)+4*digitalRead(12)+8*digitalRead(13); //BCD transform to the decimal.
                   Serial.print("case 0 equal to= ");
                    Serial.println(x);
                     digitalWrite(clockdown, HIGH); //clockdown activeted.
                      delay(1000);
   break;
       case 1:
        digitalWrite(clockup, HIGH);
         Serial.print("case1= ");
          digitalWrite(13, LOW);
           digitalRead(13);
            Serial.print(digitalRead(13));
             digitalWrite(12, LOW);
              digitalRead(12);
               Serial.print(digitalRead(12));
                digitalWrite(11, LOW);
                 digitalRead(11);
                  Serial.print(digitalRead(11));
                   digitalWrite(10, HIGH);
                    digitalRead(10);
                     Serial.println(digitalRead(10));
                      x = 1*digitalRead(10)+2*digitalRead(11)+4*digitalRead(12)+8*digitalRead(13);
                       Serial.print("case 1 equal to= ");
                        Serial.println(x);
                         digitalWrite(clockdown, HIGH);
                          delay(1000);
   break;
       case 2:
        digitalWrite(clockup, HIGH);
         Serial.print("case2= ");
          digitalWrite(13, LOW);
           digitalRead(13);
            Serial.print(digitalRead(13));
             digitalWrite(12, LOW);
              digitalRead(12);
               Serial.print(digitalRead(12));
                digitalWrite(11, HIGH);
                 digitalRead(11);
                  Serial.print(digitalRead(11));
                   digitalWrite(10, LOW);
                    digitalRead(10);
                     Serial.println(digitalRead(10));
                      x = 1*digitalRead(10)+2*digitalRead(11)+4*digitalRead(12)+8*digitalRead(13);
                       Serial.print("case 2 equal to= ");
                        Serial.println(x);
                         digitalWrite(clockdown, HIGH);
                          delay(1000);
   break;
       case 3:
        digitalWrite(clockup, HIGH);
         Serial.print("case3= ");
          digitalWrite(13, LOW);
           digitalRead(13);
            Serial.print(digitalRead(13));
             digitalWrite(12, LOW);
              digitalRead(12);
               Serial.print(digitalRead(12));
                digitalWrite(11, HIGH);
                 digitalRead(11);
                  Serial.print(digitalRead(11));
                   digitalWrite(10, HIGH);
                    digitalRead(10);
                     Serial.println(digitalRead(10));
                      x = 1*digitalRead(10)+2*digitalRead(11)+4*digitalRead(12)+8*digitalRead(13);
                       Serial.print("case 3 equal to= ");
                        Serial.println(x);
                         digitalWrite(clockdown, HIGH);
                          delay(1000);
   break;
       case 4:
        digitalWrite(clockup, HIGH);
         Serial.print("case4= ");
          digitalWrite(13, LOW);
           digitalRead(13);
            Serial.print(digitalRead(13));
             digitalWrite(12, HIGH);
              digitalRead(12);
               Serial.print(digitalRead(12));
                digitalWrite(11, LOW);
                 digitalRead(11);
                  Serial.print(digitalRead(11));
                   digitalWrite(10, LOW);
                    digitalRead(10);
                     Serial.println(digitalRead(10));
                      x = 1*digitalRead(10)+2*digitalRead(11)+4*digitalRead(12)+8*digitalRead(13);
                       Serial.print("case 4 equal to= ");
                        Serial.println(x);
                         digitalWrite(clockdown, HIGH);
                          delay(1000);
   break;
       case 5:
        digitalWrite(clockup, HIGH);
         Serial.print("case5= ");
          digitalWrite(13, LOW);
           digitalRead(13);
            Serial.print(digitalRead(13));
             digitalWrite(12, HIGH);
              digitalRead(12);
               Serial.print(digitalRead(12));
                digitalWrite(11, LOW);
                 digitalRead(11);
                  Serial.print(digitalRead(11));
                   digitalWrite(10, HIGH);
                    digitalRead(10);
                     Serial.println(digitalRead(10));
                      x = 1*digitalRead(10)+2*digitalRead(11)+4*digitalRead(12)+8*digitalRead(13);
                       Serial.print("case 5 equal to= ");
                        Serial.println(x);
                         digitalWrite(clockdown, HIGH);
                          delay(1000);
  break;
      case 6:
       digitalWrite(clockup, HIGH);
        Serial.print("case6= ");
         digitalWrite(13, LOW);
          digitalRead(13);
           Serial.print(digitalRead(13));
            digitalWrite(12, HIGH);
             digitalRead(12);
              Serial.print(digitalRead(12));
               digitalWrite(11, HIGH);
                digitalRead(11);
                 Serial.print(digitalRead(11));
                  digitalWrite(10, LOW);
                   digitalRead(10);
                    Serial.println(digitalRead(10));
                     x = 1*digitalRead(10)+2*digitalRead(11)+4*digitalRead(12)+8*digitalRead(13);
                      Serial.print("case 6 equal to= ");
                       Serial.println(x);
                        digitalWrite(clockdown, HIGH);
                        delay(1000);
  break;
      case 7:
       digitalWrite(clockup, HIGH);
        Serial.print("case7= ");
         digitalWrite(13, LOW);
          digitalRead(13);
           Serial.print(digitalRead(13));
            digitalWrite(12, HIGH);
             digitalRead(12);
              Serial.print(digitalRead(12));
               digitalWrite(11, HIGH);
                digitalRead(11);
                 Serial.print(digitalRead(11));
                  digitalWrite(10, HIGH);
                   digitalRead(10);
                    Serial.println(digitalRead(10));
                     x = 1*digitalRead(10)+2*digitalRead(11)+4*digitalRead(12)+8*digitalRead(13);
                      Serial.print("case 7 equal to= ");
                       Serial.println(x);
                       digitalWrite(clockdown, HIGH);
                        delay(1000);
  break;
      case 8:
       digitalWrite(clockup, HIGH);
        Serial.print("case8= ");
         digitalWrite(13, HIGH);
          digitalRead(13);
           Serial.print(digitalRead(13));
            digitalWrite(12, LOW);
             digitalRead(12);
              Serial.print(digitalRead(12));
               digitalWrite(11, LOW);
                digitalRead(11);
                 Serial.print(digitalRead(11));
                  digitalWrite(10, LOW);
                    digitalRead(10);
                     Serial.println(digitalRead(10));
                      x = 1*digitalRead(10)+2*digitalRead(11)+4*digitalRead(12)+8*digitalRead(13);
                       Serial.print("case 8 equal to= ");
                        Serial.println(x);
                         digitalWrite(clockdown, HIGH);
                          delay(1000);
  break;
      case 9:
       digitalWrite(clockup, HIGH);
        Serial.print("case9= ");
         digitalWrite(13, HIGH);
          digitalRead(13);
           Serial.print(digitalRead(13));
            digitalWrite(12, LOW);
             digitalRead(12);
              Serial.print(digitalRead(12));
               digitalWrite(11, LOW);
                digitalRead(11);
                 Serial.print(digitalRead(11));
                  digitalWrite(10, HIGH);
                   digitalRead(10);
                    Serial.println(digitalRead(10));
                     x = 1*digitalRead(10)+2*digitalRead(11)+4*digitalRead(12)+8*digitalRead(13);
                      Serial.print("case 9 equal to= ");
                       Serial.println(x);
                        digitalWrite(clockdown, HIGH);
                         delay(1000);
  break;
      case 10:
       digitalWrite(clockup, HIGH);
        Serial.print("case10= ");
         digitalWrite(13, HIGH);
          digitalRead(13);
           Serial.print(digitalRead(13));
            digitalWrite(12, LOW);
             digitalRead(12);
              Serial.print(digitalRead(12));
               digitalWrite(11, HIGH);
                digitalRead(11);
                 Serial.print(digitalRead(11));
                  digitalWrite(10, LOW);
                   digitalRead(10);
                    Serial.println(digitalRead(10));
                     x = 1*digitalRead(10)+2*digitalRead(11)+4*digitalRead(12)+8*digitalRead(13);
                      Serial.print("case 10 equal to= ");
                       Serial.println(x);
                        digitalWrite(clockdown, HIGH);
                         delay(1000);
  break;
      case 11:
       digitalWrite(clockup, HIGH);
        Serial.print("case11= ");
         digitalWrite(13, HIGH);
          digitalRead(13);
           Serial.print(digitalRead(13));
            digitalWrite(12, LOW);
             digitalRead(12);
              Serial.print(digitalRead(12));
               digitalWrite(11, HIGH);
                digitalRead(11);
                 Serial.print(digitalRead(11));
                  digitalWrite(10, HIGH);
                   digitalRead(10);
                    Serial.println(digitalRead(10));
                     x = 1*digitalRead(10)+2*digitalRead(11)+4*digitalRead(12)+8*digitalRead(13);
                      Serial.print("case 11 equal to= ");
                       Serial.println(x);
                        digitalWrite(clockdown, HIGH);
                         delay(1000);
  break;
      case 12:
       digitalWrite(clockup, HIGH);
        Serial.print("case12= ");
         digitalWrite(13, HIGH);
          digitalRead(13);
           Serial.print(digitalRead(13));
            digitalWrite(12, HIGH);
             digitalRead(12);
              Serial.print(digitalRead(12));
               digitalWrite(11, LOW);
                digitalRead(11);
                 Serial.print(digitalRead(11));
                  digitalWrite(10, LOW);
                   digitalRead(10);
                    Serial.println(digitalRead(10));
                     x = 1*digitalRead(10)+2*digitalRead(11)+4*digitalRead(12)+8*digitalRead(13);
                      Serial.print("case 12 equal to= ");
                       Serial.println(x);
                        digitalWrite(clockdown, HIGH);
                         delay(1000);
   break;
       case 13:
        digitalWrite(clockup, HIGH);
         Serial.print("case13= ");
          digitalWrite(13, HIGH);
           digitalRead(13);
            Serial.print(digitalRead(13));
             digitalWrite(12, HIGH);
              digitalRead(12);
               Serial.print(digitalRead(12));
                digitalWrite(11, LOW);
                 digitalRead(11);
                  Serial.print(digitalRead(11));
                   digitalWrite(10, HIGH);
                    digitalRead(10);
                     Serial.println(digitalRead(10));
                      x = 1*digitalRead(10)+2*digitalRead(11)+4*digitalRead(12)+8*digitalRead(13);
                       Serial.print("case 13 equal to= ");
                        Serial.println(x);
                         digitalWrite(clockdown, HIGH);
                          delay(1000);
   break;
       case 14:
        digitalWrite(clockup, HIGH);
         Serial.print("case14= ");
          digitalWrite(13, HIGH);
           digitalRead(13);
            Serial.print(digitalRead(13));
             digitalWrite(12, HIGH);
              digitalRead(12);
               Serial.print(digitalRead(12));
                digitalWrite(11, HIGH);
                 digitalRead(11);
                  Serial.print(digitalRead(11));
                   digitalWrite(10, LOW);
                    digitalRead(10);
                     Serial.println(digitalRead(10));
                      x = 1*digitalRead(10)+2*digitalRead(11)+4*digitalRead(12)+8*digitalRead(13);
                       Serial.print("case 14 equal to= ");
                        Serial.println(x);
                         digitalWrite(clockdown, HIGH);
                          delay(1000);
   break;
       case 15:
        digitalWrite(clockup, HIGH);
         Serial.print("case15= ");
          digitalWrite(13, HIGH);
           digitalRead(13);
            Serial.print(digitalRead(13));
             digitalWrite(12, HIGH);
              digitalRead(12);
               Serial.print(digitalRead(12));
                digitalWrite(11, HIGH);
                 digitalRead(11);
                  Serial.print(digitalRead(11));
                    digitalWrite(10, HIGH);
                     digitalRead(10);
                      Serial.println(digitalRead(10));
                       x = 1*digitalRead(10)+2*digitalRead(11)+4*digitalRead(12)+8*digitalRead(13);
                        Serial.print("case 15 equal to= ");
                         Serial.println(x);
                          digitalWrite(clockdown, HIGH);
                           delay(1000);
    break;
    default: 
    break;
  }
}
