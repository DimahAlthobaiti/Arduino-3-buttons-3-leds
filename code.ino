const int buttons[3] = {2, 3, 4};  
const int leds[3] = {8, 9, 10};    

void setup() {
  for (int i = 0; i < 3; i++) {
    pinMode(buttons[i], INPUT_PULLUP); 
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 3; i++) {
    int state = digitalRead(buttons[i]);
    digitalWrite(leds[i], state == LOW ? HIGH : LOW);  
  }
}