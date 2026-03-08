#define TOUCH_PIN 3

void setup() {
  pinMode(TOUCH_PIN, INPUT);
  Serial.begin(9600);
}

void loop() {

  int touchState = digitalRead(TOUCH_PIN);

  if(touchState == HIGH){
    Serial.println("Touch Detected");
  }
  else{
    Serial.println("Not Touched");
  }

  delay(500);
}