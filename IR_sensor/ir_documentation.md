# IR Sensor Module

## Overview

This module demonstrates how an **Infrared (IR) sensor** can be used to detect obstacles or nearby objects.

---

## Components Required

* ESP32 / ESP8266 / Arduino
* IR Obstacle Detection Sensor
* Breadboard
* Jumper Wires

---

## Pin Connections

| IR Sensor | Microcontroller |
| --------- | --------------- |
| VCC       | 3.3V / 5V       |
| GND       | GND             |
| OUT       | GPIO Pin        |

---

## Working Principle

The IR sensor works using an **IR transmitter and IR receiver**.

1. The transmitter emits infrared light.
2. If an object is present, the IR light reflects back.
3. The receiver detects the reflected light and produces a digital signal.

---

## Expected Output

* **Object detected → LOW or HIGH depending on module**
* **No object → Opposite state**

---

## Applications

* Obstacle detection
* Line following robots
* Object counters
* Automatic doors

---

## Code

Refer to the file:

```
ir_code.ino
```

inside this module folder.

---

## Interfacing Diagram

See the wiring diagram:

```
ir_wiring.png
```
