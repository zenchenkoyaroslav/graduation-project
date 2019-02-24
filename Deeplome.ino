int voice = 3;
char input;

struct note {
  long C;  long Cd;  long D;  long Dd;
  long E;  long F;  long Fd;  long G;
  long Gd;  long A;  long Ad;  long H;
};

static note big = 
{
  65, 69, 74, 78,
  82, 87, 93, 98,
  104, 110, 117, 123
};

static note little = 
{
  131, 139, 148, 156,
  165, 175, 185, 196,
  207, 220, 233, 246
};

static note first = 
{
  262, 277, 294, 311,
  330, 349, 370, 392, 
  415, 440, 466, 494
};

static note second =
{
  523, 554, 587, 622,
  659, 698, 739, 784,
  831, 880, 932, 988
};

static note third =
{
  1047, 1109, 1175, 1245,
  1319, 1397, 1480, 1568,
  1661, 1720, 1865, 1976
};
  
void setup() {
  pinMode(voice, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available() >0){
    input = Serial.read();
    if(input == 'E'){
      songGF();
    }
  }
}

void songGF() { //Графити фоллз
  int temp = 200;
  // Вступление
  int i = 0;
  while (i < 2){
    play(first.F, temp);
    play(first.D, temp);
    play(little.A, temp);
    play(first.D, temp);
    i++;
  }
  i = 0;
  while (i < 2){
    play(first.F, temp);
    play(first.C, temp);
    play(little.A, temp);
    play(first.C, temp);
    i++;
  }
  i = 0;
  while (i < 3){
    play(first.E, temp);
    play(first.Cd, temp);
    play(little.A, temp);
    play(first.Cd, temp);
    i++;
  }
  play(first.E, temp);
  play(first.Cd, temp);
  play(first.E, temp/2);
  play(first.Cd, temp/2);
  play(first.E, temp/2);
  play(first.Cd, temp/2);
  // Первая строка
  play(first.D, temp*6);
  play(first.E, temp*2);
  play(first.F, temp*8);
  play(first.A, temp*3);
  play(first.G, temp*3);
  play(first.A, temp*2);
  play(first.C, temp*8);
  play(first.D, temp*6);
  play(first.E, temp*2);
  // Вторая строка
  play(first.F, temp*4);
  play(first.E, temp*4);
  play(first.G, temp*4);
  play(first.A, temp*4);
  play(first.G, temp*4);
  play(first.F, temp*4);
  pause(temp*2);
  play(first.F, temp*2);
  play(first.F, temp*2);
  play(first.F, temp*2);
  play(first.A, temp*2);
  play(first.A, temp*2);
  play(first.G, temp*2);
  play(first.F, temp*2);
  // Третья строка
  pause(temp*2);
  play(first.A, temp*2);
  play(first.A, temp*2);
  play(first.A, temp*2);
  play(first.G, temp*2);
  play(first.A, temp*2);
  play(first.G, temp*2);
  play(first.F, temp*2);
  pause(temp*2);
  play(first.F, temp*2);
  play(first.F, temp*2);
  play(first.F, temp*2);
  play(first.A, temp*2);
  play(first.A, temp*2);
  play(first.G, temp*2);
  play(first.F, temp*2);
  pause(temp*2);
  play(first.A, temp*2);
  play(first.A, temp*2);
  play(first.A, temp*2);
  // Четвёртая строка
  pause(temp*2);
  play(second.Cd, temp*2);
  play(second.Cd, temp*2);
  play(second.Cd, temp*2);
  pause(temp*2);
  play(first.F, temp*2);
  play(first.F, temp*2);
  play(first.F, temp*2);
  play(first.A, temp*2);
  play(first.A, temp*2);
  play(first.G, temp*2);
  play(first.F, temp*2);
  pause(temp*2);
  play(first.Ad, temp*2);
  play(first.Ad, temp*2);
  play(first.Ad, temp*2);
  // Пятая строка
  play(first.G, temp*4);
  play(second.C, temp*4);
  play(first.A, temp*4);
  play(second.Cd, temp*4);
  play(second.F, temp);
  play(second.D, temp);
  play(second.F, temp);
  play(second.A, temp);
  play(second.E, temp);
  play(second.Cd, temp);
  play(second.A, temp);
  play(third.Cd, temp);
  play(third.D, temp*2);
  play(second.D, temp*2);
};


void play(int note, int temp){
  tone(voice, note);
  delay(temp);
  noTone(voice);
};

void pause(int temp){
  delay(temp);
}

