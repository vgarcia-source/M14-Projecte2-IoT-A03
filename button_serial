
#define BUTTON_PIN 14
#define DEBOUNCE_TIME 50

// Variables per controlar el debounce
int lastSteadyState = HIGH;
int lastFlickerableState = HIGH;
int currentState;

unsigned long lastDebounceTime = 0;

// Comptador de pulsacions
int comptador = 0;

void setup() {
  Serial.begin(9600);

  // Configurar D23 com a sortida LOW
  pinMode(23, OUTPUT);
  digitalWrite(23, LOW);

  // Configurar el boto
  pinMode(BUTTON_PIN, INPUT_PULLUP);

  Serial.println("Comptador de pulsacions iniciat");
}

// Funcio per detectar una pulsacio del boto
bool button() {

  currentState = digitalRead(BUTTON_PIN);

  if (currentState != lastFlickerableState) {
    lastDebounceTime = millis();
    lastFlickerableState = currentState;
  }

  if (millis() - lastDebounceTime > DEBOUNCE_TIME) {

    if (lastSteadyState == HIGH && currentState == LOW) {
      lastSteadyState = currentState;
      return true;
    }

    lastSteadyState = currentState;
  }

  return false;
}

void loop() {

  if (button()) {
    comptador++;

    Serial.print("Nombre de pulsacions: ");
    Serial.println(comptador);
  }
}
