int listeElecMot[] = {A0,A1,A2,A3};
int listeElecMotVal[] = {0,0,0,0};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  elecMot();
}

void elecMot() {
  for(int i=0; i<4; i++){
    int val = analogRead(listeElecMot[i]);
    Serial.println(val);
    Serial.println(listeElecMotVal[i]);
    if((val<400) || (700<val)){
      if(listeElecMotVal[i]==1){
        Serial.println("non");
        listeElecMotVal[i]=0;}
      else{
        Serial.println("oui");
        listeElecMotVal[i]=1;}
      delay(300);}
  }
  delay(500);
  int bilan = 0;
  for(int i=0; i<4; i++){
    if(listeElecMotVal[i]==1){
      bilan++;}
    if(bilan==4){
      Serial.println("gangé");
      for(int i=0; i<4; i++){
        listeElecMotVal[i]=0;}
    }
  }
}
