# Servo Motor Module

## Overview

This module demonstrates how to control a **servo motor** using PWM signals from a microcontroller.

Servo motors can rotate to a specific angle and are widely used in robotics and automation.

---

## Components Required

* ESP32 / ESP8266 / Arduino
* Servo Motor (SG90 or similar)
* Breadboard
* Jumper Wires

---

## Pin Connections

| Servo Motor              | Microcontroller            |
| ------------------------ | -------------------------- |
| Red (VCC)                | 5V                         |
| Brown / Black (GND)      | GND                        |
| Orange / Yellow (Signal) | GPIO Pin (example: GPIO13) |

---

## Working Principle

Servo motors are controlled using **Pulse Width Modulation (PWM)** signals.

The width of the PWM pulse determines the angle of rotation.

Typical range:

* **0°**
* **90°**
* **180°**

---

## Expected Output

The servo motor rotates to different angles based on the PWM signal sent by the microcontroller.

---

## Applications

* Robotic arms
* Pan-tilt camera systems
* Automated mechanisms
* IoT actuators

---

## Code

Refer to the file:

```
servo_code.ino
```

inside this module folder.

---

## Interfacing Diagram

See the wiring diagram:

```
servo_wiring.png
```
