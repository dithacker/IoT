int ledPin = 5; // ledPin을 5번으로 정의

void setup() {
  pinMode(ledPin, OUTPUT);    //ledPin을 출력으로 설정
}

void loop() {
  digitalWrite(ledPin, HIGH); //LED ON
  delay(100);                //1초 대기
  digitalWrite(ledPin, LOW);  //LED OFF
  delay(100);                //1초 대기
}


