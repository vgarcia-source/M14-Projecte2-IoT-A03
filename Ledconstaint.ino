/*
  Projecte: LED Blink ESP32
  Descripció: Fa parpellejar un LED connectat al pin GPIO 23.
*/

// Constant que indica el pin del LED
const int LED_PIN = 23;

// Variables per configurar els temps
unsigned long tempsEnces = 2000;
unsigned long tempsApagat = 3000;

void setup() {
  // Configurem el pin del LED com a sortida
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Encendre el LED
  digitalWrite(LED_PIN, HIGH);
  delay(tempsEnces);

  // Apagar el LED
  digitalWrite(LED_PIN, LOW);
  delay(tempsApagat);
}
