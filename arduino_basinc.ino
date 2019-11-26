int basinc;
void setup() {
   Serial.begin(9600);
  
  pinMode(arduLed1, OUTPUT);
  pinMode(arduLed2, OUTPUT);
  pinMode(arduLed3, OUTPUT);
  pinMode(arduLed4, OUTPUT);
  pinMode(buzzer, OUTPUT);
  
 }
void loop() {
  basinc = analogRead(0);
  Serial.println(basinc);


  if(basinc > 200){
    digitalWrite(arduLed1, HIGH);
    digitalWrite(buzzer, HIGH);
    int nota[]  = {a};
    int beats[] = {8};
    
  }
  else{
    digitalWrite(arduLed1, LOW);
    digitalWrite(buzzer, LOW);
  }
   if(basinc > 300){
    digitalWrite(arduLed1, HIGH);
    digitalWrite(arduLed2, HIGH);
    digitalWrite(buzzer, HIGH);
    int nota[]  = {a};
    int beats[] = {16};
  }
  else{
    digitalWrite(arduLed1, LOW);
    digitalWrite(arduLed2, LOW);
    digitalWrite(buzzer, LOW);
 }

  if(basinc > 400){
    digitalWrite(arduLed1, HIGH);
    digitalWrite(arduLed2, HIGH);
    digitalWrite(arduLed3, HIGH);
    digitalWrite(buzzer, HIGH);
    int nota[]  = {a};
    int beats[] = {32};
  }
  else{
    digitalWrite(arduLed1, LOW);
    digitalWrite(arduLed2, LOW);
    digitalWrite(arduLed3, LOW);
    digitalWrite(buzzer, LOW);
  }
  
  
  if(basinc > 500){
    digitalWrite(arduLed1, HIGH);
    digitalWrite(arduLed2, HIGH);
    digitalWrite(arduLed3, HIGH);
    digitalWrite(arduLed4, HIGH);
    digitalWrite(buzzer, HIGH);
    int nota[]  = {a};
    int beats[] = {64};
  }
  else{
    digitalWrite(arduLed1, LOW);
    digitalWrite(arduLed2, LOW);
    digitalWrite(arduLed3, LOW);
    digitalWrite(arduLed4, LOW);
    digitalWrite(buzzer, LOW);
  }
}

long tempo = 50000;


