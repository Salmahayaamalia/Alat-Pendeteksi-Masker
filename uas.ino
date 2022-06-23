int led = 13;
int buzzer = 12;

char result;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);

}

void loop() {
  while (Serial.available() > 0){
    result = Serial.read();
    switch (result) {
      case '1':
          digitalWrite(led,LOW);
          digitalWrite(buzzer,LOW);
          break;
      case '2':
          digitalWrite(led,HIGH);
          digitalWrite(buzzer,HIGH);
          break;
      }
    }
    delay(1000);
}
