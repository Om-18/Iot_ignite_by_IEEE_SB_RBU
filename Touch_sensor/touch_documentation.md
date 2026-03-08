# Touch Sensor Module

## Overview

This module demonstrates how a **capacitive touch sensor** can be used as a simple input device with a microcontroller. When a user touches the sensor surface, the sensor detects the change in capacitance and outputs a signal.

---

## Components Required

* ESP32 / ESP8266 / Arduino
* Capacitive Touch Sensor Module
* Breadboard
* Jumper Wires

---

## Pin Connections

| Touch Sensor | Microcontroller           |
| ------------ | ------------------------- |
| VCC          | 3.3V / 5V                 |
| GND          | GND                       |
| OUT          | GPIO Pin (example: GPIO4) |

---

## Working Principle

The touch sensor detects a finger touch using **capacitive sensing**.
When a finger comes in contact with the sensor surface, the capacitance changes, causing the sensor to output a digital signal.

---

## Expected Output

* **Touch detected → HIGH signal**
* **No touch → LOW signal**

---

## Applications

* Touch-based switches
* Smart home control systems
* Interactive devices
* IoT input interfaces

---

## Code

Refer to the file:

```
touch_code.ino
```

inside this module folder.

---

## Interfacing Diagram

See the wiring diagram:

```
touch_wiring.png
```
