int speakerPin = 11;
 
int length = 15; // número de notas
char notes[] = "ccggaagffeeddc "; // espaços representam pausas
int beats[] = { 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 2, 4 };
int tempo = 300;
 
void playTone(int tone, int duration) {
  for (long i = 0; i < duration * 1000L; i += tone * 2) {
    digitalWrite(speakerPin, HIGH);
    delayMicroseconds(tone);
    digitalWrite(speakerPin, LOW);
    delayMicroseconds(tone);
  }
}
 
void playNote(char note, int duration) {
  char names[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C' };
  int tones[] = { 1915, 1700, 1519, 1432, 1275, 1136, 1014, 956 };
 
  // toque o tom correspondente ao nome da nota
  for (int i = 0; i < 8; i++) {
    if (names[i] == note) {
      playTone(tones[i], duration);
    }
  }
}
 
void setup() {
  pinMode(speakerPin, OUTPUT);
}
 
void loop() {
  for (int i = 0; i < length; i++) {
    if (notes[i] == ' ') {
      delay(beats[i] * tempo); // rest
    } else {
      playNote(notes[i], beats[i] * tempo);
    }
 
    // pausa entre notas
    delay(tempo / 2);
  }
}
#include "pitches.h"
 
// Indica a duraÃ§Ã£o das notas, ex: colcheia -> tr = 4, ...
#define se 6
#define tr 4
#define co 3
// Define a velocidade de reproduÃ§Ã£o, quanto menor mais rÃ¡pido...
#define SMbpm 150
 
// As notas...
int tonesA[] = {NOTE_E5, NOTE_E5,0,NOTE_E5,0, NOTE_C5, NOTE_E5,0, NOTE_G5,0,0, NOTE_G4,0,0};
int tonesB[] = {NOTE_C5,0,0, NOTE_G4,0,NOTE_E4,0,0,NOTE_A4,0, NOTE_B4,0,NOTE_AS4, NOTE_A4,0,NOTE_G4,NOTE_E5,NOTE_G5,NOTE_A5,0,NOTE_F5,NOTE_G5,0,NOTE_E5,0,NOTE_C5,NOTE_D5,NOTE_B4,0};
int tonesC[] = {NOTE_C3,0,NOTE_G5,NOTE_FS5,NOTE_F5,NOTE_DS5,NOTE_C4,NOTE_E5,NOTE_F3,NOTE_GS4,NOTE_A4,NOTE_C5,NOTE_C4,NOTE_A4,NOTE_C5,NOTE_D5};
int tonesD[] = {NOTE_C3,0,NOTE_G5,NOTE_FS5,NOTE_F5,NOTE_DS5,NOTE_G3,NOTE_E5,0,NOTE_C6,0,NOTE_C6,NOTE_C6,0,NOTE_G3,0};
int tonesE[] = {NOTE_C3,0,NOTE_DS5,0,0,NOTE_D5,0,NOTE_C5,0,0,NOTE_G3,NOTE_G3,0,NOTE_C3,0};
int tonesF[] = {NOTE_C5,NOTE_C5,0,NOTE_C5,0,NOTE_C5,NOTE_D5,0,NOTE_E5,NOTE_C5,0,NOTE_A4,NOTE_G4,0,NOTE_G2,0};
int tonesG[] = {NOTE_C5,NOTE_C5,0,NOTE_C5,0,NOTE_C5,NOTE_D5,NOTE_E5,NOTE_F3,0,0,NOTE_C3,0,NOTE_G2,0};
int tonesH[] = {NOTE_E5,NOTE_E5,0,NOTE_E5,0,NOTE_C5,NOTE_E5,0,NOTE_G5,0,0,NOTE_G4,0,0};
int tonesI[] = {NOTE_E5,NOTE_C5,0,NOTE_G4,NOTE_G3,0,NOTE_GS4,0,NOTE_A4,NOTE_F5,NOTE_F3,NOTE_F5,NOTE_A4,NOTE_C4,NOTE_F3,0};
int tonesJ[] = {NOTE_B4,NOTE_A5,NOTE_A5,NOTE_A5,NOTE_G5,NOTE_F5,NOTE_E5,NOTE_C5,NOTE_G3,NOTE_A4,NOTE_G4,NOTE_C4,NOTE_G3,0};
int tonesK[] = {NOTE_B4,NOTE_F5,0,NOTE_F5,NOTE_F5,NOTE_E5,NOTE_D5,NOTE_C5,NOTE_E4,NOTE_G3,NOTE_E4,NOTE_C4,0,0};
 
// ... e respectivas duraÃ§Ãµes
int durationA[] = {co,co,co,co,co,co,co,co,co,co,se,co,co,se};
int durationB[] = {co,co,co,co,se,co,co,co,co,co,co,co,co,co,co,tr,tr,tr,co,co,co,co,co,co,co,co,co,co,se};
int durationC[] = {co,co,co,co,co,co,co,co,co,co,co,co,co,co,co,co};
int durationD[] = {co,co,co,co,co,co,co,co,co,co,co,co,co,co,co,co};
int durationE[] = {co,co,co,co,co,co,se,co,co,co,co,co,co,co,co};
int durationF[] = {co,co,co,co,co,co,co,co,co,co,co,co,co,co,co,co};
int durationG[] = {co,co,co,co,co,co,co,co,co,co,co,co,se,co,co};
int durationH[] = {co,co,co,co,co,co,co,co,co,co,se,co,co,se};
int durationI[] = {co,co,co,co,co,co,co,co,co,co,co,co,co,co,co,co};
int durationJ[] = {tr,tr,tr,tr,tr,tr,co,co,co,co,co,co,co,co};
int durationK[] = {co,co,co,co,tr,tr,tr,co,co,co,co,co,co,se};
 
char melody[] = "abbcdcecdcefgfhbbijikijikfgfhijik";
 
// NÃºmero de notas
int numberA = 14;
int numberB = 29;
int numberC = 16;
int numberD = 16;
int numberE = 15;
int numberF = 16;
int numberG = 15;
int numberH = 14;
int numberI = 16;
int numberJ = 14;
int numberK = 14;
int melodynum = 33;
 
// Define o pin para ligar o piezo
int piezopin = 11;
 
// FunÃ§Ã£o que recebe uma faixa (notas e duraÃ§Ãµes) e o nÃºmero de notas
void play(int tones[], int duration[], int number, int bpm){
  int i;
 
  for (i = 0; i < number; i++) {
 
    int lenght = bpm*duration[i];
    tone(piezopin, tones[i],lenght);
 
    // Pausas para que as notas nÃ£o fiquem coladas umas Ã s outras
    if(duration[i]==se)
      delay(bpm/0.5);
    if(duration[i]==tr)
      delay(bpm/.75);
    if(duration[i]==co)
      delay(bpm);
 
    // PÃ¡ra de tocar a nota
    noTone(piezopin);
   }
}
 
// FunÃ§Ã£o que recebe uma string que contÃ©m as faixas para criar uma mÃºsica (e o seu tamanho)
void playall(char melody[], int num){
 
  int i;
 
  for(i=0;i
    if(melody[i]=='a')
      play(tonesA, durationA, numberA, SMbpm);
    if(melody[i]=='b')
      play(tonesB, durationB, numberB, SMbpm);
    if(melody[i]=='c')
      play(tonesC, durationC, numberC, SMbpm);
    if(melody[i]=='d')
      play(tonesD, durationD, numberD, SMbpm);
    if(melody[i]=='e')
      play(tonesE, durationE, numberE, SMbpm);
    if(melody[i]=='f')
      play(tonesF, durationF, numberF, SMbpm);
    if(melody[i]=='g')
      play(tonesG, durationG, numberG, SMbpm);
    if(melody[i]=='h')
      play(tonesH, durationH, numberH, SMbpm);
    if(melody[i]=='i')
      play(tonesI, durationI, numberI, SMbpm);
    if(melody[i]=='j')
      play(tonesJ, durationJ, numberJ, SMbpm);
    if(melody[i]=='k')
      play(tonesK, durationK, numberK, SMbpm);
    }
}
 
void setup() {
  playall(melody,melodynum);
}
 

