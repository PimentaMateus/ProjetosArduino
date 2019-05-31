#include <Ultrasonic.h>

#define TRIGGER_PIN  12
#define ECHO_PIN     13

Ultrasonic ultrasonic(TRIGGER_PIN, ECHO_PIN);
int ledpin=7;
int distancia;

void setup()
  {
  Serial.begin(9600);
pinMode(ledpin, OUTPUT);  
  }

void loop()
  {
  float cmMsec, inMsec;
  long microsec = ultrasonic.timing();
  
  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);
  inMsec = ultrasonic.convert(microsec, Ultrasonic::IN);
  
  distancia = int(cmMsec);
  Serial.print("microsegundos: ");
  Serial.print(microsec);
  Serial.print(", Centimetro: ");
  Serial.println(cmMsec);

  if (distancia < 15 ){
    digitalWrite(ledpin, HIGH);
  }
  else{
    digitalWrite(ledpin, LOW);
  }
   // digitalWrite(ledpin, HIGH);
  delay(1000);
  }

