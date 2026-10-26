
import dht
from machine import Pin
from time import sleep

sensor = dht.DHT22(Pin(15))

while True:
    try:
        sensor.measure()
        temperatura = sensor.temperature()
        humedad = sensor.humidity()
        print("Temperatura:", temperatura, "C")
        print("Humedad:", humedad, "%")
    except OSError:
        print("Error al leer el sensor")
    sleep(5)
