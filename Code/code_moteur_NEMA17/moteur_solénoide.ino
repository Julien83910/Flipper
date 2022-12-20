

const int moteurGauche = 13;
const int moteurDroite = 12;


  

void setup() {
 pinMode(moteurGauche, OUTPUT);
 pinMode(moteurDroite, OUTPUT);
} 

void loop() {
  digitalWrite(moteurGauche, HIGH); 
  delay(1000); 
  digitalWrite(moteurGauche, LOW); 
  delay(1000);
} 
  
