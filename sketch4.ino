// Se realiza la importación de la librería
#include "DHTesp.h"
 
// Se define el pin del Sensor
const int DHT_PIN = 15;


// Se crea un objeto que sirve como instancia que luego se configura para obtener sus mediciones
DHTesp dhtSensor;


// Función principal de Arduino
void setup() {


  // Inicia la comunicacion entre el computador y el puerto serial a 115200 baudios/segundo
  Serial.begin(115200);


  // Configura el sensor DHT que está conectado al pin DHT_PIN y el modelo de sensor es DHT22
  dhtSensor.setup(DHT_PIN, DHTesp::DHT22);
}
 
void loop() {


  // En esta linea obtengo la temperatura y la humedad actual
  TempAndHumidity  data = dhtSensor.getTempAndHumidity();


  // Esta linea imprime la temperatura que obtengo desde data
  Serial.println("Temp: " + String(data.temperature, 2) + "°C");


  // Esta linea imprime la humedad que obtengo desde data
  Serial.println("Humidity: " + String(data.humidity, 1) + "%");


  // Esta linea imprime un Separador de cada registro de temperatura y humedad
  Serial.println("---");


  // Por medio de esta linea le decimos que el programa espere 2 segundos para hacer otra medicion
  delay(3000); // Wait for a new reading from the sensor (DHT22 has ~0.5Hz sample rate)
}



