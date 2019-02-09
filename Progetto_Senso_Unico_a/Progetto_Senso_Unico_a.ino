
void setup() {
  pinMode (9, OUTPUT);
  pinMode (10, OUTPUT);
  pinMode (11, OUTPUT);
  pinMode (2, OUTPUT);
  pinMode (3, OUTPUT);
  pinMode (4, OUTPUT);
}

void loop() {
  
 digitalWrite (9, HIGH);
 digitalWrite (10, LOW);
 digitalWrite (11, LOW);
 delay (1000);
  
  digitalWrite (9, HIGH);
  digitalWrite (10, HIGH);
  digitalWrite (11, LOW);
  delay (1000);
  
  
 
 
   digitalWrite (9, LOW);
  digitalWrite (10, LOW);
  digitalWrite (11, HIGH);
   delay (2000);

   return blinkLED;
}


void blinkLED(){
  digitalWrite (11, HIGH);
  delay(100);
  digitalWrite (11, LOW);
  delay(100);
}



