// Define the IR sensor pin
const int IR_SENSOR_PIN = 14; 
const int LED_PIN = 2; // Internal LED on most ESP32 boards

void setup() {
  // Initialize Serial Monitor
  Serial.begin(115200);
  
  // Set the sensor pin as an input
  pinMode(IR_SENSOR_PIN, INPUT);
  
  // Set the onboard LED as output
  pinMode(LED_PIN, OUTPUT);
  
  Serial.println("IR Sensor Initialized. Waiting for detection...");
}

void loop() {
  // Read the sensor state
  // Logic: LOW usually means object detected, HIGH means clear
  int sensorStatus = digitalRead(IR_SENSOR_PIN);

  if (sensorStatus == LOW) {
    // Object is near
    digitalWrite(LED_PIN, HIGH); 
    Serial.println("Object Detected!");
  } else {
    // Path is clear
    digitalWrite(LED_PIN, LOW);
  }

  // Small delay to stabilize the serial output
  delay(100);
}