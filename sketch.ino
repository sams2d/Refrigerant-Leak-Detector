#define MQ A0
#define RSig 4

void setup() {
  pinMode(2, OUTPUT);pinMode(3, OUTPUT);
  pinMode(RSig, OUTPUT);pinMode(MQ, INPUT);
}

int checkStatus() {
  int sensorValue = analogRead(MQ);
  return (sensorValue > 700) ? 1 : 0; 
}

void loop() {
  if(checkStatus()){
    digitalWrite(3, HIGH);
    digitalWrite(2,LOW);
  }else{
    digitalWrite(3, LOW);
    digitalWrite(2,HIGH);
  }
  delay(5000);
}