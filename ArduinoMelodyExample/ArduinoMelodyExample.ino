
int melody[] = { 
784, 698, 622, 587, 466, 392, 523, 587, 622, 698, 587, 0, 1047, 784, 622, 587, 523, 523, 587, 622, 523, 466, 523, 392, 1047, 784, 622, 587, 523, 523, 587, 622, 698, 587, 466, 523, 392, 523, 587, 622, 698, 784, 831, 1047, 1047, 784, 622, 587, 523, 523, 587, 622, 523, 466, 523, 392, 1047, 784, 622, 698, 784, 523, 587, 698, 587, 466, 523, 349, 349, 415, 523, 622, 587, 523, 392, 349, 349, 415, 523, 622, 698, 784, 831, 784, 698, 622, 698, 784, 523, 784, 698, 698, 698, 622, 587, 622, 698, 622, 698, 784, 622, 349, 349, 415, 523, 622, 587, 523, 392, 349, 349, 415, 523, 622, 698, 784, 831, 784, 698, 831, 933, 1047, 784, 622, 523, 587, 587, 587, 698, 587, 466, 392, 466, 523, 466, 622, 622, 622, 622, 622, 698, 784, 784, 784, 698, 622, 587, 587, 587, 587, 587, 622, 587, 622, 587, 523, 523, 523, 523, 523, 587, 622, 622, 622, 587, 523, 466, 466, 466, 466, 523, 587, 523, 466, 415, 415, 415, 415, 466, 523, 523, 523, 466, 415, 392, 392, 392, 622, 698, 622, 466, 622, 622, 622, 622, 698, 740, 740, 740, 831, 740, 698, 698, 698, 698, 740, 698, 784, 698, 622, 622, 622, 622, 622, 698, 784, 784, 784, 698, 622, 587, 587, 587, 587, 587, 622, 587, 622, 587, 523, 523, 523, 523, 523, 587, 622, 622, 622, 587, 523, 466, 466, 466, 466, 523, 587, 523, 466, 415, 415, 415, 415, 466, 523, 523, 523, 587, 698, 784, 784, 784, 784, 933, 784, 784, 698, 622, 587, 698, 784, 587, 698, 784, 587, 698, 587, 698, 784, 1047, 988, 523, 587, 622, 698, 0 
};
int noteDurations[] = { 
308, 154, 154, 154, 154, 308, 154, 154, 154, 154, 308, 308, 616, 616, 308, 308, 616, 308, 308, 308, 308, 308, 308, 616, 616, 616, 308, 308, 308, 154, 154, 308, 308, 308, 308, 308, 308, 154, 77, 77, 77, 77, 77, 77, 616, 616, 308, 308, 616, 308, 308, 308, 308, 308, 308, 616, 616, 616, 308, 308, 308, 308, 308, 308, 308, 308, 1232, 308, 308, 308, 308, 308, 308, 308, 308, 308, 308, 308, 308, 308, 308, 616, 462, 154, 308, 154, 154, 308, 308, 616, 231, 77, 154, 154, 308, 154, 154, 308, 308, 308, 308, 308, 308, 308, 308, 308, 308, 308, 308, 308, 308, 308, 308, 308, 308, 616, 462, 154, 308, 154, 154, 308, 308, 308, 308, 231, 77, 154, 154, 154, 154, 154, 154, 924, 308, 154, 77, 77, 154, 77, 77, 154, 77, 77, 154, 154, 154, 77, 77, 154, 77, 77, 462, 77, 77, 154, 77, 77, 154, 77, 77, 154, 77, 77, 154, 154, 154, 77, 77, 154, 154, 462, 77, 77, 154, 77, 77, 154, 154, 154, 77, 77, 154, 154, 154, 77, 77, 154, 154, 308, 308, 154, 77, 77, 231, 77, 154, 77, 77, 154, 154, 154, 77, 77, 154, 154, 462, 77, 77, 154, 77, 77, 154, 77, 77, 154, 77, 77, 154, 154, 154, 77, 77, 154, 77, 77, 462, 77, 77, 154, 77, 77, 154, 77, 77, 154, 77, 77, 154, 154, 154, 77, 77, 154, 154, 462, 77, 77, 154, 77, 77, 154, 154, 154, 77, 77, 154, 154, 154, 77, 77, 154, 154, 154, 154, 154, 154, 154, 154, 154, 154, 154, 154, 154, 154, 154, 154, 154, 154, 308, 77, 77, 77, 77, 0 
};

void setup() {
  
  for (int thisNote = 0; thisNote < sizeof(melody) / sizeof(int); thisNote++)
  {    
    tone(11, melody[thisNote], noteDurations[thisNote] * .7);    
    delay(noteDurations[thisNote]);    
    noTone(11);
  }
}

void loop() {
  // no need to repeat the melody.
}
