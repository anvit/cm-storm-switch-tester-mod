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
    usbMIDI.sendNoteOn(45, 99, channel);  // 60 = C4
  }
  if (button1.fallingEdge()) {
    usbMIDI.sendNoteOn(46, 99, channel);  // 61 = C#4
  }
  if (button2.fallingEdge()) {
    usbMIDI.sendNoteOn(50, 99, channel);  // 62 = D4
  }
  if (button3.fallingEdge()) {
    usbMIDI.sendNoteOn(52, 99, channel);  // 63 = D#4
  }
  if (button20.fallingEdge()) {
    usbMIDI.sendNoteOn(53, 99, channel);  // 64 = E4
  }
  if (button21.fallingEdge()) {
    usbMIDI.sendNoteOn(57, 99, channel);  // 65 = F4
  }

  if (button0.risingEdge()) {
    usbMIDI.sendNoteOff(45, 0, channel);  // 60 = C4
  }
  if (button1.risingEdge()) {
    usbMIDI.sendNoteOff(46, 0, channel);  // 61 = C#4
  }
  if (button2.risingEdge()) {
    usbMIDI.sendNoteOff(50, 0, channel);  // 62 = D4
  }
  if (button3.risingEdge()) {
    usbMIDI.sendNoteOff(52, 0, channel);  // 63 = D#4
  }
  if (button20.risingEdge()) {
    usbMIDI.sendNoteOff(53, 0, channel);  // 64 = E4
  }
  if (button21.risingEdge()) {
    usbMIDI.sendNoteOff(57, 0, channel);  // 65 = F4
  }
  // MIDI Controllers should discard incoming MIDI messages.
  // http://forum.pjrc.com/threads/24179-Teensy-3-Ableton-Analog-CC-causes-midi-crash
  while (usbMIDI.read()) {
    // ignore incoming messages
  }
}

