int sensor =0;
int p1 =1;
int p2 =2;
int p3 =3;
int p4 =4;
int p5 =5;
int p6 =6;
int p7 =7;
int p8 =8;
int p9 =9;
int p10 =10;
int p12 =12;

void setup()
{
  Serial.begin(9600);
  pinMode(p1,OUTPUT);
  pinMode(p2,OUTPUT);
  pinMode(p3,OUTPUT);
  pinMode(p4,OUTPUT);
  pinMode(p5,OUTPUT);
  pinMode(p6,OUTPUT);
  pinMode(p7,OUTPUT);
  pinMode(p8,OUTPUT);
  pinMode(p9,OUTPUT);
  pinMode(p10,OUTPUT);
  pinMode(p12,OUTPUT);
}

void loop()
{
  int valorSensor = analogRead(sensor);
  digitalWrite(p12,100);
  
Serial.println(valorSensor);
  
  if (valorSensor <=100)
  {
    apagaLeds();
    digitalWrite(p1,1);
  }
  
  if (valorSensor >100 && valorSensor <=200)
  {
    apagaLeds();
    digitalWrite(p1,1);
    digitalWrite(p2,1);
  }

  if (valorSensor >200 && valorSensor <=300)
  {
    apagaLeds();
    digitalWrite(p1,1);
    digitalWrite(p2,1);
    digitalWrite(p3,1);
  }
  
  if (valorSensor >300 && valorSensor <=400)
  {
    apagaLeds();
    digitalWrite(p1,1);
    digitalWrite(p2,1);
    digitalWrite(p3,1);
    digitalWrite(p4,1);
  }

  if (valorSensor >400 && valorSensor <=500)
  {
    apagaLeds();
    digitalWrite(p1,1);
    digitalWrite(p2,1);
    digitalWrite(p3,1);
    digitalWrite(p4,1);
    digitalWrite(p5,1);
  }

  if (valorSensor >500 && valorSensor <=600)
  {
    apagaLeds();
    digitalWrite(p1,1);
    digitalWrite(p2,1);
    digitalWrite(p3,1);
    digitalWrite(p4,1);
    digitalWrite(p5,1);
    digitalWrite(p6,1);
  }
  
  if (valorSensor >600 && valorSensor <=700)
  {
    apagaLeds();
    digitalWrite(p1,1);
    digitalWrite(p2,1);
    digitalWrite(p3,1);
    digitalWrite(p4,1);
    digitalWrite(p5,1);
    digitalWrite(p6,1);
    digitalWrite(p7,1);
  
  }
  
  if (valorSensor >700 && valorSensor <=800)
  {
    apagaLeds();
    digitalWrite(p1,1);
    digitalWrite(p2,1);
    digitalWrite(p3,1);
    digitalWrite(p4,1);
    digitalWrite(p5,1);
    digitalWrite(p6,1);
    digitalWrite(p7,1);
    digitalWrite(p8,1);

  }
  
  if (valorSensor >800 && valorSensor <=900)
  {
    apagaLeds();
    digitalWrite(p1,1);
    digitalWrite(p2,1);
    digitalWrite(p3,1);
    digitalWrite(p4,1);
    digitalWrite(p5,1);
    digitalWrite(p6,1);
    digitalWrite(p7,1);
    digitalWrite(p8,1);
    digitalWrite(p9,1);
    
  }
  
  if (valorSensor >900 )
  {
    apagaLeds();
    digitalWrite(p1,1);
    digitalWrite(p2,1);
    digitalWrite(p3,1);
    digitalWrite(p4,1);
    digitalWrite(p5,1);
    digitalWrite(p6,1);
    digitalWrite(p7,1);
    digitalWrite(p8,1);
    digitalWrite(p9,1);
    digitalWrite(p10,1);
  }
}  
      
void apagaLeds() 
{
  noTone(p12);
  digitalWrite(p1,LOW);
  digitalWrite(p2,LOW);
  digitalWrite(p3,LOW);
  digitalWrite(p4,LOW);
  digitalWrite(p5,LOW);
  digitalWrite(p6,LOW);
  digitalWrite(p7,LOW);
  digitalWrite(p8,LOW);
  digitalWrite(p9,LOW);
  digitalWrite(p10,LOW);
  
}

