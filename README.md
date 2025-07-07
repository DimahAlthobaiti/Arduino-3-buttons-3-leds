# Arduino 3 Buttons - 3 LEDs 

This simple Arduino project controls 3 LEDs using 3 buttons.  
Each button turns on or off a specific LED.

# 🔧 Components Used
- 1x Arduino Uno
- 3x Push Buttons
- 3x LEDs 
- 3x Resistors (470Ω for LEDs)
- Breadboard
- Jumper wires

# How It Works
- Each button is connected to a digital input pin (using `INPUT_PULLUP`)
- When a button is **pressed**, its corresponding LED **turns on**
- When released, the LED **turns off**

# Why We Used INPUT_PULLUP Instead of 5V?
Normally, to detect button presses, we connect one side of the button to **5V** and the other to an Arduino pin, with a **pull-down resistor** to GND. But this method needs extra parts and wiring.
Instead, we used:
pinMode(buttonPin, INPUT_PULLUP); 


# Circuit Diagram

![Final](https://github.com/user-attachments/assets/36a1d358-3ac4-4d28-a854-f9f31db2b99a)

# Code

The code is inside `code.ino`. Here's a preview:

```cpp
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
