#include <Ultrasonic.h>

#define TRIGGER_PIN  12
#define ECHO_PIN     13

int ligarMotor=3;
Ultrasonic ultrasonic(TRIGGER_PIN, ECHO_PIN);
int distancia;
int led1 = 4;
int led2 = 5;
int led3 = 6;
int led4 = 7;
int led5 = 8;
int led6 = 9;

void setup()
{
  pinMode(ligarMotor,OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
}

void loop()
{
  
  
  float distanciaCM;
  long microsegundos = ultrasonic.timing();
  
  //converte o tempo de microsegundos para centímetros
  distanciaCM = ultrasonic.convert(microsegundos, Ultrasonic::CM); 
  
  distancia = int(distanciaCM);
 
  if (distancia < 20 )
  {
    // Parar os Motores
    digitalWrite(ligarMotor,LOW);
    
    //parar os leds
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    
    //ligar leds
    digitalWrite(led5,HIGH);
    digitalWrite(led6,HIGH);
   
   
  }
  else
  {
    // Motores Ligados
    digitalWrite(ligarMotor,HIGH);
    
    //leds ligados
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    
    //pisca led
  digitalWrite(led4,1);
  delay(250);
  digitalWrite(led4,0);
  delay(250);

  digitalWrite(led3,1);
  delay(250);
  digitalWrite(led3,0);
  delay(250);
 
    //apaga led
   
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    
    
  }
 
}


