

#include <IRremote.h>
#include <IRremoteInt.h>
#include <IRremoteTools.h>

int MotorEsq=9; //Habilita Motor Esquerdo
int MotorDir=10; //Habilita Motor da Direita
int in1=2; 
int in2=3;
int in3=4;
int in4=5;
float ultimoComando;
int motoresLigados = 0;
int direcao = 1;
int velocidadeE = 250;
int velocidadeD = 250;
int RECV_PIN = 11;

IRrecv irrecv(RECV_PIN);
decode_results results;



void setup() {
  // put your setup code here, to run once:
   irrecv.enableIRIn();
pinMode(MotorEsq, OUTPUT);
pinMode(MotorDir, OUTPUT);
pinMode(in1, OUTPUT);
pinMode(in2, OUTPUT);
pinMode(in4, OUTPUT);
pinMode(in3, OUTPUT);
Serial.begin(9600);



}

void loop() {
  // put your main code here, to run repeatedly:


        {
        digitalWrite(MotorDir, HIGH);
        digitalWrite(MotorEsq, HIGH);
        }
}
