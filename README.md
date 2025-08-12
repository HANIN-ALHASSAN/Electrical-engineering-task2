# 4-Servo Sweep & Hold Project (Tinkercad + Arduino Uno)

## Overview
This Arduino project controls 4 servo motors using the Servo.h library.  
The servos perform a sweep motion for 2 seconds, then hold at 90° indefinitely.  
The project is designed and simulated in Tinkercad Circuits.

---

## Features
- Control 4 servo motors simultaneously.
- Sweep motion between 0° and 180° for a fixed time (2 seconds).
- After sweeping, all servos stop at exactly 90°.
- Fully compatible with Tinkercad simulation and physical Arduino setup.

---



## Circuit Diagram
| Servo Motor | Signal Pin | VCC  | GND  |
|-------------|-----------|------|------|
| Servo 1     | D9        | 5V   | GND  |
| Servo 2     | D10       | 5V   | GND  |
| Servo 3     | D11       | 5V   | GND  |
| Servo 4     | D6        | 5V   | GND  |

---

## How It Works
 1. Initialization: All four servos are attached to specific pins.
 2. Sweep Phase: Motors rotate from 0° → 180° → 0° in 1° steps, with a 15 ms delay for smooth movement.
 3. Hold Phase: After 2 seconds, the motion stops and all servos stay at 90° forever.
