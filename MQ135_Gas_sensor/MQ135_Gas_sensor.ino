#define MQ135_PIN A0

void setup() {
  Serial.begin(9600);
}

void loop() {

  int value = analogRead(MQ135_PIN);

  Serial.print("Gas Value: ");
  Serial.println(value);

  if(value < 300){
    Serial.println("Air Quality: GOOD");
  }
  else if(value < 600){
    Serial.println("Air Quality: MODERATE");
  }
  else{
    Serial.println("Air Quality: POOR");
  }

  Serial.println("-------------------");

  delay(2000);
}