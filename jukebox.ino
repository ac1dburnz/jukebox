#include "pitches.h"

int melody1[] = {NOTE_C5, NOTE_F5, NOTE_C5, NOTE_F4, NOTE_A4, NOTE_C5, NOTE_F5, NOTE_C5,
                 NOTE_C5, NOTE_F5, NOTE_C5, NOTE_F5,
                 NOTE_A5, NOTE_G5, NOTE_F5, NOTE_E5, NOTE_D5, NOTE_CS5,
                 NOTE_C5, NOTE_F5, NOTE_C5, NOTE_F4, NOTE_A4, NOTE_C5, NOTE_F5, NOTE_C5,
                 NOTE_F5, NOTE_D5, NOTE_C5, NOTE_AS4,
                 NOTE_A4, NOTE_G4, NOTE_F4, NOTE_C5, NOTE_F5, NOTE_C5, NOTE_F4, NOTE_A4, NOTE_C5, NOTE_F5, NOTE_C5,
                 NOTE_C5, NOTE_F5, NOTE_C5, NOTE_F5,
                 NOTE_A5, NOTE_G5, NOTE_F5, NOTE_E5, NOTE_D5, NOTE_CS5,
                 NOTE_C5, NOTE_F5, NOTE_C5, NOTE_F4, NOTE_A4, NOTE_C5, NOTE_F5, NOTE_C5,
                 NOTE_F5, NOTE_D5, NOTE_C5, NOTE_AS4,
                 NOTE_A4, NOTE_G4, NOTE_F4,
                }; 
int noteDuration1[] = { 4, 4, 4, 8, 8, 4, 4, 2,
                        4, 4, 4, 4,
                        3, 8, 8, 8, 8, 8,
                        4, 4, 4, 8, 8, 4, 4, 2,
                        3, 8, 4, 4,
                        4, 4, 2 , 4, 4, 4, 8, 8, 4, 4, 2,
                        4, 4, 4, 4,
                        3, 8, 8, 8, 8, 8,
                        4, 4, 4, 8, 8, 4, 4, 2,
                        3, 8, 4, 4,
                        4, 4, 2
                      };

int melody2[] = {NOTE_G4, NOTE_G4, NOTE_G4, NOTE_G4, NOTE_G4, NOTE_G4, NOTE_G4, NOTE_G4, NOTE_G4,
                 NOTE_B3, NOTE_G3, NOTE_C4, NOTE_G3, NOTE_CS4, NOTE_G3, NOTE_C4, NOTE_G3, NOTE_B3, NOTE_G3, NOTE_C4, NOTE_G3, NOTE_CS4, NOTE_G3, NOTE_C4, NOTE_G3,
                 NOTE_E4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_E4,
                 NOTE_E4, NOTE_G4, NOTE_G4, NOTE_G4, NOTE_G4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_E4,
                 NOTE_E4, NOTE_G4, NOTE_G4, NOTE_G4, NOTE_G4, NOTE_E4, NOTE_E4, NOTE_E4,
                 NOTE_E4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_E4,
                 NOTE_E4, NOTE_G4, NOTE_G4, NOTE_G4, NOTE_G4, NOTE_E4, NOTE_E4, NOTE_E4,
                 NOTE_DS5, NOTE_D5, NOTE_B4, NOTE_A4, NOTE_B4,
                 NOTE_E4, NOTE_G4, NOTE_DS5, NOTE_D5, NOTE_G4, NOTE_B4,
                 NOTE_B4, NOTE_FS5, NOTE_F5, NOTE_B4, NOTE_D5, NOTE_AS5,
                 NOTE_A5, NOTE_F5, NOTE_A5, NOTE_DS6, NOTE_D6
                };
int noteDuration2[] = {8, 8, 2, 8, 8, 2, 16, 8, 16, 8, 8,
                       2, 4, 2, 4, 2, 4, 2, 4, 2, 4, 2, 4, 2, 4, 2, 4,
                       8, 16, 16, 8, 4, 8, 8, 8,
                       8, 16, 16, 8, 4, 8, 8, 8, 8,
                       16, 16, 8, 4, 8, 8, 8,
                       8, 16, 16, 8, 4, 8, 8, 8,
                       8, 16, 16, 8, 4, 8, 8, 8,
                       8, 16, 16, 8, 4, 8, 8, 8,
                       8, 2, 8, 8, 1,
                       8, 4, 8, 4, 8, 8,
                       8, 8, 4, 8, 4, 8,
                       4, 8, 4, 8, 3
                      };

int melody3[] = {NOTE_E7, NOTE_E7, 0, NOTE_E7,
                 0, NOTE_C7, NOTE_E7, 0,
                 NOTE_G7, 0, 0, 0,
                 NOTE_G6, 0, 0, 0,
                 NOTE_C7, 0, 0, NOTE_G6,
                 0, 0, NOTE_E6, 0,
                 0, NOTE_A6, 0, NOTE_B6,
                 0, NOTE_AS6, NOTE_A6, 0,
                 NOTE_G6, NOTE_E7, NOTE_G7,
                 NOTE_A7, 0, NOTE_F7, NOTE_G7,
                 0, NOTE_E7, 0, NOTE_C7,
                 NOTE_D7, NOTE_B6, 0, 0,
                 NOTE_C7, 0, 0, NOTE_G6,
                 0, 0, NOTE_E6, 0,
                 0, NOTE_A6, 0, NOTE_B6,
                 0, NOTE_AS6, NOTE_A6, 0,
                 NOTE_G6, NOTE_E7, NOTE_G7,
                 NOTE_A7, 0, NOTE_F7, NOTE_G7,
                 0, NOTE_E7, 0, NOTE_C7,
                 NOTE_D7, NOTE_B6, 0, 0,
                 NOTE_E7, NOTE_E7, 0, NOTE_E7,
                 0, NOTE_C7, NOTE_E7, 0,
                 NOTE_G7, 0, 0, 0,
                 NOTE_G6, 0, 0, 0, NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4,
                 NOTE_AS3, NOTE_AS4, 0,
                 0,
                 NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4,
                 NOTE_AS3, NOTE_AS4, 0,
                 0,
                 NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4,
                 NOTE_DS3, NOTE_DS4, 0,
                 0,
                 NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4,
                 NOTE_DS3, NOTE_DS4, 0,
                 0, NOTE_DS4, NOTE_CS4, NOTE_D4,
                 NOTE_CS4, NOTE_DS4,
                 NOTE_DS4, NOTE_GS3,
                 NOTE_G3, NOTE_CS4,
                 NOTE_C4, NOTE_FS4, NOTE_F4, NOTE_E3, NOTE_AS4, NOTE_A4,
                 NOTE_GS4, NOTE_DS4, NOTE_B3,
                 NOTE_AS3, NOTE_A3, NOTE_GS3,
                 0, 0, 0};
int noteDuration3[] = {  12, 12, 12, 12,
                         12, 12, 12, 12,
                         12, 12, 12, 12,
                         12, 12, 12, 12,
                         12, 12, 12, 12,
                         12, 12, 12, 12,
                         12, 12, 12, 12,
                         12, 12, 12, 12,
                         9, 9, 9,
                         12, 12, 12, 12,
                         12, 12, 12, 12,
                         12, 12, 12, 12,
                         12, 12, 12, 12,
                         12, 12, 12, 12,
                         12, 12, 12, 12,
                         12, 12, 12, 12,
                         9, 9, 9,
                         12, 12, 12, 12,
                         12, 12, 12, 12,
                         12, 12, 12, 12,
                         12, 12, 12, 12,
                         12, 12, 12, 12,
                         12, 12, 12, 12,
                         12, 12, 12, 12,
                         12, 12, 12, 12,
                         12, 12, 6,
                         3,
                         12, 12, 12, 12,
                         12, 12, 6,
                         3,
                         12, 12, 12, 12, 12, 12, 6, 3, 12, 12, 12, 12, 12, 12, 6, 6, 18, 18, 18, 6, 6, 6, 6, 6, 6, 18, 18, 18, 18, 18, 18, 10, 10, 10, 10, 10, 10, 3, 3, 3};
                         
byte button1 = 1; // or whatever pins are being used
byte button2 = 2;
byte button3 = 3;
void setup() {
pinMode (button1, INPUT_PULLUP);  // button with internal pullup, switch presses connects to Gnd
pinMode (button2, INPUT_PULLUP);
pinMode (button3, INPUT_PULLUP);
}
void loop(){
if (digitalRead(button1) == LOW)
  for (int thisNote = 0; thisNote < 100; thisNote++) {
    int noteDuration = 1000 / noteDuration1[thisNote];
    tone(13, melody1[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.40;
    delay(pauseBetweenNotes);
    noTone(13);
  }
if (digitalRead(button2) == LOW)
  for (int thisNote = 2; thisNote < 110; thisNote++) {
    int noteDuration = 1000 / noteDuration2[thisNote];
    tone(13, melody2[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.10;
    delay(pauseBetweenNotes);
    noTone(13);
  }
if (digitalRead(button3) == LOW)
  for (int thisNote = 3; thisNote < 150; thisNote++) {
    int noteDuration = 1000 / noteDuration3[thisNote];
    tone(13, melody3[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.40;
    delay(pauseBetweenNotes);
    noTone(13);
  }
}


