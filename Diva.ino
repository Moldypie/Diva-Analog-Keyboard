#include <Keyboard.h>
byte ButtonPins[] = {A0,A1,A2,A3};

void setup() {
  Serial.begin(9600) ;
  Keyboard.begin();
}

void loop() {
  if(analogRead(ButtonPins[0]) > 0){
    Keyboard.press(0x27);
  }else{
    Keyboard.release(0x27);
  }
  if(analogRead(ButtonPins[1]) > 0){
    Keyboard.press(0x28);
  }else{
    Keyboard.release(0x28);
  }
  if(analogRead(ButtonPins[2]) > 0){
    Keyboard.press(0x25);
  }else{
    Keyboard.release(0x25);
  }
  if(analogRead(ButtonPins[3]) > 0){
    Keyboard.press(0x26);
  }else{
    Keyboard.release(0x26);
  }
}
