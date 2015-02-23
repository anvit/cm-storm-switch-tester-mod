#include <Bounce.h>

Bounce button0 = Bounce(0, 10);
Bounce button1 = Bounce(1, 10);  // 10 = 10 ms debounce time
Bounce button2 = Bounce(2, 10);  // which is appropriate for
Bounce button3 = Bounce(3, 10);  // most mechanical pushbuttons
Bounce button20 = Bounce(20, 10);
Bounce button21 = Bounce(21, 10);

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

  if (button20.risingEdge()) {
    Keyboard.set_modifier(MODIFIERKEY_CTRL | MODIFIERKEY_SHIFT);
    Keyboard.set_key1(KEY_ESC);
    Keyboard.send_now();
    delay(100);
    Keyboard.set_modifier(0);
    Keyboard.set_key1(0);
    Keyboard.send_now();
  }
  if (button21.risingEdge()) {
    Keyboard.set_modifier(MODIFIERKEY_LEFT_GUI);
    Keyboard.set_key2(KEY_R);
    Keyboard.send_now();
    Keyboard.set_modifier(0);
    Keyboard.send_now();
    delay(100);
    Keyboard.print("firefox fb.com");
    delay(100);
    Keyboard.set_key2(KEY_ENTER);
    Keyboard.send_now();
    delay(100);
    Keyboard.set_key2(0);
    Keyboard.send_now();
  }
  if (button2.risingEdge()) {
    Keyboard.set_modifier(MODIFIERKEY_LEFT_GUI);
    Keyboard.set_key3(KEY_R);
    Keyboard.send_now();
    Keyboard.set_modifier(0);
    Keyboard.send_now();
    delay(100);
    Keyboard.print("firefox youtube.com");
    delay(100);
    Keyboard.set_key3(KEY_ENTER);
    Keyboard.send_now();
    delay(100);
    Keyboard.set_key3(0);
    Keyboard.send_now();
  }
  if (button3.risingEdge()) {
    Keyboard.set_modifier(MODIFIERKEY_LEFT_GUI);
    Keyboard.send_now();
    Keyboard.set_modifier(0);
    Keyboard.send_now();
    delay(100);
    Keyboard.print("Spot");
    delay(100);
    Keyboard.set_key4(KEY_ENTER);
    Keyboard.send_now();
    delay(100);
    Keyboard.set_key4(0);
    Keyboard.send_now();
  }
  if (button0.risingEdge()) {
    Keyboard.set_modifier(MODIFIERKEY_LEFT_GUI);
    Keyboard.send_now();
    Keyboard.set_modifier(0);
    Keyboard.send_now();
    delay(100);
    Keyboard.print("Mail");
    delay(100);
    Keyboard.set_key5(KEY_ENTER);
    Keyboard.send_now();
    delay(100);
    Keyboard.set_key5(0);
    Keyboard.send_now();
  }
  if (button1.risingEdge()) {
    Keyboard.set_modifier(MODIFIERKEY_LEFT_GUI);
    Keyboard.send_now();
    Keyboard.set_modifier(0);
    Keyboard.send_now();
    delay(100);
    Keyboard.print("Exec");
    delay(100);
    Keyboard.set_key6(KEY_ENTER);
    Keyboard.send_now();
    delay(100);
    Keyboard.set_key6(0);
    Keyboard.send_now();
  }
}

