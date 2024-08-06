#include "pitches.h"
 
// notes in the melody:
int melody[] = {
  NOTE_D5, NOTE_D6, NOTE_A5, NOTE_G5, NOTE_G6, NOTE_A5, NOTE_FS6, NOTE_A5, NOTE_D5, NOTE_D6, NOTE_A5, NOTE_G5, NOTE_G6, NOTE_A5, NOTE_FS6, NOTE_A5, 
  NOTE_E5, NOTE_D6, NOTE_A5, NOTE_G5, NOTE_G6, NOTE_A5, NOTE_FS6, NOTE_A5, NOTE_E5, NOTE_D6, NOTE_A5, NOTE_G5, NOTE_G6, NOTE_A5, NOTE_FS6, NOTE_A5,
  NOTE_G5, NOTE_D6, NOTE_A5, NOTE_G5, NOTE_G6, NOTE_A5, NOTE_FS6, NOTE_A5, NOTE_G5, NOTE_D6, NOTE_A5, NOTE_G5, NOTE_G6, NOTE_A5, NOTE_FS6, NOTE_A5,
  NOTE_D5, NOTE_D6, NOTE_A5, NOTE_G5, NOTE_G6, NOTE_A5, NOTE_FS6, NOTE_A5, NOTE_D5, NOTE_D6, NOTE_A5, NOTE_G5, NOTE_G6, NOTE_A5, NOTE_FS6, NOTE_A5
  };
int duration = 500;  // 500 miliseconds
 
void setup() {
 
}
 
void loop() {  
  for (int thisNote = 0; thisNote < 64; thisNote++) {
    // pin8 output the voice, every scale is 0.5 sencond
    tone(8, melody[thisNote], duration);
     
    // Output the voice after several minutes
    delay(250);
  }
   
  // repeat delay (seconds)
  delay(2000);
}
