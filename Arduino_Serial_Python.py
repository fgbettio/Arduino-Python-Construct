# -*- coding: utf-8 -*-
"""
Created on Sat Aug 26 17:24:25 2023

@author: USUARIO
"""

import serial
import time
import pyautogui

# Configuração da porta serial
print("Inciando Python")
serial_port = "COM13"  # Substitua pela porta serial correta
baud_rate = 9600

# Inicializa a comunicação serial
ser = serial.Serial(serial_port, baud_rate)

try:
    while True:
        # Lê os dados da porta serial
        data = ser.readline().decode().strip()
        print(data)
    
        # Siaamula o pressionamento da tecla 'a'
        pyautogui.press(data)
     
        time.sleep(1)

except KeyboardInterrupt:
    # Fecha a porta serial e o documento do Word ao pressionar Ctrl+C
    ser.close()