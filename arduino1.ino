
void setup() {
 
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(7,OUTPUT);
  


}

void loop() {
 int a=analogRead(A0);
 Serial.println(a);
  delay(100);
  if(a>60) { 
  
   digitalWrite(7,HIGH);
   delay(1000);
   

    
  }
  else{
 digitalWrite(7,LOW);
    }
  
}

 

   
