int count=0;
int button=3;


void setup() {
  pinMode(button,INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(button)==0) {
    while(digitalRead(button)==0);
    count++;
    delay(10);
    Serial.print("Count: ");
    Serial.println(count);
  }
}
