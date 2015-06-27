#include <Bounce.h>

const int channel = 1;

Bounce button0 = Bounce(0, 5);
Bounce button1 = Bounce(1, 5);
Bounce button2 = Bounce(2, 5);
Bounce button3 = Bounce(3, 5);
Bounce button20 = Bounce(20, 5);
Bounce button21 = Bounce(21, 5);

void setup() {
  pinMode(0, INPUT_PULLUP);
  pinMode(1, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(20, INPUT_PULLUP);
  pinMode(21, INPUT_PULLUP);
}

void loop() {

  button0.update();
  button1.update();
  button2.update();
  button3.update();
  button20.update();
  button21.update();

  if (button0.fallingEdge()) {
    Keyboard.set_key5(KEY_RIGHT);
    Keyboard.send_now();
    delay(100);
  }
  if (button1.fallingEdge()) {
    Keyboard.set_key6(KEY_DOWN);
    Keyboard.send_now();
    delay(100);
  }
  if (button2.fallingEdge()) {
    Keyboard.set_key3(KEY_LEFT);
    Keyboard.send_now();
    delay(100);
  }
  if (button3.fallingEdge()) {
    Keyboard.set_key4(KEY_PAGE_UP);
    Keyboard.send_now();
    delay(100);
  }
  if (button20.fallingEdge()) {
    Keyboard.set_key1(KEY_PAGE_DOWN);
    Keyboard.send_now();
    delay(100);
  }
  if (button21.fallingEdge()) {
    Keyboard.set_key2(KEY_UP);
    Keyboard.send_now();
    delay(100);
  }
  if (button0.risingEdge()) {
        Keyboard.set_key5(0);
    Keyboard.send_now();
  }
  if (button1.risingEdge()) {
    Keyboard.set_key6(0);
    Keyboard.send_now();
  }
  if (button2.risingEdge()) {
    Keyboard.set_key3(0);
    Keyboard.send_now();
  }
  if (button3.risingEdge()) {
    Keyboard.set_key4(0);
    Keyboard.send_now();
  }
  if (button20.risingEdge()) {
    Keyboard.set_key1(0);
    Keyboard.send_now();
  }
  if (button21.risingEdge()) {
    Keyboard.set_key2(0);
    Keyboard.send_now();
  }
}

