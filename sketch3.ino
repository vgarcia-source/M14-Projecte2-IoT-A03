#define potPin 34  // Analog pin connected to the potentiometer (can be adjusted)


int potValue = 0;  // Variable to store the potentiometer reading


void setup() {
  Serial.begin(115200);  // Initialize serial communication
}


void loop() {
  potValue = analogRead(potPin);  // Read analog value from potentiometer


  Serial.print("Potentiometer value: ");
  Serial.println(potValue);  // Print the sensor value


  // Optional: add a delay to slow down the output
  delay(500);
}
