const int swPin = 3; //3:ConnectorA 4:ConnectorB
const int motorPin =4;

bool swState;//bool=true or false

void setup() {
  Serial.begin(115200);
  pinMode(swPin,INPUT);
  pinMode(motorPin,OUTPUT);

}

void loop() {
  if(digitalRead(swPin) == HIGH){
  swState=!swState;
  }

  if(swState == 1){
  digitalWrite(motorPin,HIGH);//ON
  Serial.println("ON");
  delay(300);

  }else{
  digitalWrite(motorPin,LOW);//OFF
  Serial.println("OFF");
  delay(300);
  }

}
