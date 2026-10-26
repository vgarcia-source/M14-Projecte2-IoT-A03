
from machine import ADC, Pin
from time import sleep_ms

pot = ADC(Pin(26))

while True:
    valor = pot.read_u16()
    porcentaje = valor * 100 // 65535
    print("Valor:", valor, "| Porcentaje:", porcentaje, "%")
    sleep_ms(1000)
