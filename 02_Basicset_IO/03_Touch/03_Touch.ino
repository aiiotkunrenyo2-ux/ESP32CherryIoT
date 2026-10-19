const int touchPin = 3; //3:ConnectorA 4:ConnectorB

void setup() {
  Serial.begin(115200);
  pinMode(touchPin, INPUT);
}

void loop() {
  //Look at the serial monitor
  if {
    Serial.println("Touch!");
    delay(200);
  } else {
    Serial.println("No Touch");
    delay(200);
  }
  delay(500);
}