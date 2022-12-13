const int Pas = 3;
const int Dir = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(Pas,OUTPUT);
   pinMode(Dir,OUTPUT);
  digitalWrite(Dir,HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(Dir,HIGH);
  for(int x = 0; x < 50; x++) {
    digitalWrite(Pas,HIGH);
    delayMicroseconds(500);
    digitalWrite(Pas,LOW);
    delayMicroseconds(700);
    }
  delay(200);
  
  digitalWrite(Dir,LOW);
  for(int x = 0; x < 50; x++) {
    digitalWrite(Pas,HIGH);
    delayMicroseconds(500);
    digitalWrite(Pas,LOW);
    delayMicroseconds(700);
    }
  delay(500);
  

}
