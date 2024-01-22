#include "DigiKeyboardPtBr.h"
#include "DigiKeyboard.h"


void setup() {

    pinMode(0, OUTPUT);
    pinMode(1, OUTPUT);
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.delay(1000);
   
    DigiKeyboard.sendKeyStroke(KEY_T,MOD_CONTROL_LEFT | MOD_ALT_LEFT);
    DigiKeyboard.delay(500);

    
    DigiKeyboardPtBr.println("firefox https://youtu.be/dQw4w9WgXcQ?t=43s");
    DigiKeyboard.sendKeyStroke(KEY_ENTER,0);
    DigiKeyboard.delay(1000);


    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.delay(1000);
   
    DigiKeyboard.sendKeyStroke(KEY_T,MOD_CONTROL_LEFT | MOD_ALT_LEFT);
    DigiKeyboard.delay(500);

    
    DigiKeyboardPtBr.println("firefox https://fakeupdate.net/wnc/");
    DigiKeyboard.sendKeyStroke(KEY_ENTER,0);
    DigiKeyboard.delay(1000);
    //DigiKeyboardPtBr.print("f");
    DigiKeyboard.sendKeyStroke(KEY_F11,0);


}
void loop() {
    digitalWrite(0, HIGH);   // Turn the LED on
    digitalWrite(1, HIGH);
    delay(100);             // Wait for a second
    digitalWrite(0, LOW);    // Turn the LED off
    digitalWrite(1, LOW); 
    delay(1000);             // Wait for a second
}
