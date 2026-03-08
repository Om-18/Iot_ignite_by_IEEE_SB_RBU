#include <ESP32Servo.h>

// Create a servo object
Servo myServo;

// Define the GPIO pin
const int servoPin = 18;

void setup() {
  // Allow allocation of all timers
  ESP32PWM::allocateTimer(0);
  ESP32PWM::allocateTimer(1);
  ESP32PWM::allocateTimer(2);
  ESP32PWM::allocateTimer(3);

  myServo.setPeriodHertz(50);    // Standard 50hz servo
  myServo.attach(servoPin, 500, 2400); // attaches the servo on pin 18
  // Note: 500ms and 2400ms are the pulse widths for 0 and 180 degrees
}

void loop() {
  // Sweep from 0 to 180 degrees
  for (int pos = 0; pos <= 180; pos += 1) {
    myServo.write(pos);
    delay(15); 
  }

  // Sweep from 180 back to 0 degrees
  for (int pos = 180; pos >= 0; pos -= 1) {
    myServo.write(pos);
    delay(15);
  }
}