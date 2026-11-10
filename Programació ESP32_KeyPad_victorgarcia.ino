#include <Keypad.h>

const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {19, 18, 5, 17};
byte colPins[COLS] = {16, 4, 2, 15};

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

String password = "1234";
String entrada = "";

void setup() {
  Serial.begin(115200);
  Serial.println("Introdueix la contrasenya:");
}

void loop() {

  char tecla = keypad.getKey();

  if (tecla) {
    Serial.print(tecla);
    entrada += tecla;

    if (entrada.length() == 4) {

      if (entrada == password) {
        Serial.println("\nAcces correcte");
      } else {
        Serial.println("\nContrasenya incorrecta");
      }

      entrada = "";
    }
  }
}
