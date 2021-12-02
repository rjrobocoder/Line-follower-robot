void setup() {
  // put your setup code here, to run once:
  pinMode(1,OUTPUT);//M1
  pinMode(2,OUTPUT);
  
  pinMode(3,OUTPUT);//M2
  pinMode(4,OUTPUT);

  pinMode(7,INPUT);//IR1
  pinMode(8,INPUT);//IR2
  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int IR1 = digitalRead(7);
  int IR2 = digitalRead(8);

  if(IR1 == 0 && IR2 == 1){
      /*   LEFT   */
    Serial.println("LEFT");
    digitalWrite(1,LOW);//M1
    digitalWrite(2,HIGH);

    digitalWrite(3,LOW);//M2
    digitalWrite(4,LOW);
    
    }
    else if(IR2 == 0 && IR1 == 1){
      /*     RIGHT    */
    Serial.println("RIGHT");
    digitalWrite(3,HIGH);//M2
    digitalWrite(4,LOW);

    digitalWrite(1,LOW);//M1
    digitalWrite(2,LOW);
      
      }
      else{
        /*   FORWARD   */
    Serial.println("FORWARD");
    digitalWrite(1,LOW);//M1
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);//M2
    digitalWrite(4,LOW);
        
        }

  


    


    
    
}
