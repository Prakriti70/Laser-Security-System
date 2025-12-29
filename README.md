# Laser Security System

**Laser Security System** is a beginner-friendly Arduino project that demonstrates a simple laser-based security alarm. 
It uses a **laser module**, **LDR/photodiode sensor**, and **buzzer** to detect intrusions.
When the laser beam is interrupted, the buzzer sounds an alarm.



## Features

- Detects objects or interruptions in a laser beam.
- Activates a buzzer alarm when the beam is broken.
- Useful for learning basic sensors, digital and analog I/O, and simple security systems.



## Components

- Arduino Uno (or compatible board)
- Laser module
- LDR or photodiode
- Buzzer
- Jumper wires
- Breadboard



## Circuit Connections

| Component     | Arduino Pin |
|---------------|------------|
| Laser Module  | 12         |
| LDR / Photodiode | A0      |
| Buzzer        | 8          |
| GND / VCC     | As required|

- **Laser**: connected to digital pin 12  
- **LDR**: connected to analog pin A0  
- **Buzzer**: connected to digital pin 8  
- supply proper power to the components



## Code Usage

1. Open **Laser_Project.ino** in the Arduino IDE.
2. Connect your Arduino board and select the correct port.
3. Upload the code to the board.
4. Interrupt the laser beam to test the buzzer alarm.

```cpp
int threshold = 500; // Adjust threshold for LDR sensitivity


