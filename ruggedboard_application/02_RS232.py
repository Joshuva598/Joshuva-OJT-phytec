import mraa
import time
import sys

port = "/dev/ttyS1"

data = 'Greetings from PHYTEC!'

uart = mraa.Uart(port)

uart.write(bytearray(data, 'utf-8'))
time.sleep(1)

while True:
        if uart.dataAvailable():
                data_byte = uart.readStr(1)
                print(data_byte,end=" ")
        if data_byte == "!":
                print("")
                break


