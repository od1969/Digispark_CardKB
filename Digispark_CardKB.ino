#include "DigiKeyboard.h"
#include "TinyWireM.h"

#define CARDKB_ADDR 0x5F

void setup() {
    TinyWireM.begin();
}

void loop() {
  TinyWireM.requestFrom(CARDKB_ADDR, 1);
  while (TinyWireM.available())
  {
    char c = TinyWireM.read();
    if (c != 0)
    {
      DigiKeyboard.print(c);
    }
  }
}
