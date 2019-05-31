void setup() {
  pinMode(3,OUTPUT);
}

void loop() 
{

  int C = 262, D = 294, E = 330, F = 349, G = 392, A = 440, B = 523, X=0;
  int P = 0;
  int i;

int ode[]   = {
G,G,F,E,G,G,F,E,G,A,G,F,E,D,X,D,E,F,D,E,F,D,E,F,X,F,A,G,F,E,D,C
};

int tempo[] = {
1,1,1,1,1,1,1,1,1,1,
1,1,1,1,0.5,1,1,1,1,1,1,
1,1,1,0.5,1,1,1,1,1,1,1
};

for(i=0;i<sizeof(ode)/2;i++) {
  if(ode[i] != 0) tone(3,ode[i]); else noTone(3);
  delay(tempo[i] * 500);
  noTone(3);
}
noTone(3);
delay(5000);
}
