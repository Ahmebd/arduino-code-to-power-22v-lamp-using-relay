const int buttonPin = 2;
const int relayPin = 8;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); 
  
  pinMode(relayPin, OUTPUT);
  
  digitalWrite(relayPin, LOW); 
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {
    digitalWrite(relayPin, HIGH);
  } 
  else {
    digitalWrite(relayPin, LOW);
  }
}