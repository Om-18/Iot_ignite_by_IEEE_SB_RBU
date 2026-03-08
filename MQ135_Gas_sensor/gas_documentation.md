# Gas Sensor Module

## Overview

This module demonstrates how to interface a **gas sensor (MQ series)** with a microcontroller to detect the presence of gases such as LPG, methane, smoke, or other harmful gases.

---

## Components Required

* ESP32 / ESP8266 / Arduino
* MQ Gas Sensor Module
* Breadboard
* Jumper Wires

---

## Pin Connections

| Gas Sensor | Microcontroller   |
| ---------- | ----------------- |
| VCC        | 5V                |
| GND        | GND               |
| DO / AO    | GPIO / Analog Pin |

---

## Working Principle

The MQ gas sensor contains a **sensitive material (SnO₂)** that changes its resistance in the presence of certain gases.
When gas concentration increases, the sensor's resistance changes, producing a voltage variation that can be detected by the microcontroller.

---

## Expected Output

* **Gas detected → Sensor output changes**
* **No gas → Normal baseline output**

---

## Applications

* Gas leakage detection systems
* Fire safety monitoring
* Industrial safety systems
* Smart home safety devices

---

## Code

Refer to the file:

```
gas_code.ino
```

inside this module folder.

---

## Interfacing Diagram

See the wiring diagram:

```
gas_wiring.png
```
