/*
Arcade Macro Keyboard

Install this on an Arduino Nano.
Wire up some Arcade buttons (or any buttons), and pushing one will run a multi-key keyboard shortcut.
Acts like a standard USB Keyboard in Windows.

@ObsoleteNerd
*/

#include <Arduino.h>
#include <Keyboard.h>

// Modifiers for key combos (https://www.arduino.cc/reference/en/language/functions/usb/keyboard/keyboardmodifiers)
char ctrlKey = KEY_LEFT_CTRL;
char altKey = KEY_LEFT_ALT;
char shiftKey = KEY_LEFT_SHIFT;

#define buttonAmount 7 // How many buttons do you have total

int buttonPins[] = { 2, 3, 4, 5, 6, 7, 8 }; // Pins the buttons are connected to
int keyCodes[] = { 49, 50, 51, 52, 53, 54, 55 }; // ASCII codes for each of the above buttons (http://www.asciitable.com/) In this case it's the numbers 1-7
int buttonState[buttonAmount];

void setup() {
  for (int i = 0; i < buttonAmount; i++) {
    pinMode(buttonPins[i], INPUT_PULLUP); // Make all the buttons inputs and turn on the pullup resistor
  }
  Keyboard.begin(); // Initialise keyboard control
}

void loop() {
  for (int i = 0; i < buttonAmount; i++) {
    buttonState[i] = digitalRead(buttonPins[i]);
    if (buttonState[i] == LOW){ // Check if a button has been pressed, and if so, perform the combo + the initialised button's associated ASCII code
      Keyboard.press(KEY_LEFT_CTRL);
      Keyboard.press(KEY_LEFT_ALT);
      Keyboard.press(KEY_LEFT_SHIFT);
      Keyboard.press(keyCodes[i]);
      delay(100);
      Keyboard.releaseAll();
      delay(1000); // Ghetto-debouncer
    }
  }
}