int bouton = 2;

void setup()
{
  // Bouton poussoir 1
  pinMode(bouton, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop()
{
  // Récuperer valeur de bp1
  int b1 = digitalRead(bouton);
  Serial.print("Bouton 1 : "); Serial.println(b1);

  // Si Appuie BP1
  if (b1 == HIGH) {
    Serial.println("Bouton 1 - ON");
    delay(500);
  
  }

}
