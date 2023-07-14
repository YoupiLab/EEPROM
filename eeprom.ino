#include <EEPROM.h>

int notre_adresse = 0; // Adresse de stockage dans la mémoire EEPROM

void setup() {
  Serial.begin(9600); // Initialise la communication série
}

void loop() {
  // Lecture de la valeur actuelle dans la mémoire EEPROM
  int value = EEPROM.read(notre_adresse);

  // Affichage de la valeur lue sur le moniteur série
  Serial.print("Valeur actuelle : ");
  Serial.println(value);

  // Attente de 2 secondes
  delay(2000);

  // Augmentation de la valeur de 1
  value++;

  // Enregistrement de la nouvelle valeur dans la mémoire EEPROM
  EEPROM.write(notre_adresse, value);

  // Affichage de la valeur mise à jour sur le moniteur série
  Serial.print("Valeur mise à jour : ");
  Serial.println(value);

  // Attente de 2 secondes avant de boucler
  delay(2000);
}
