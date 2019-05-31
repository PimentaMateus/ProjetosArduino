
int PWMMotorE = 9; //	Habilita Motor Esquerdo
int PWMMotorD = 10; //	Habilita Motor Direito
int in1 = 2; // 	L1 = Left Motor Lead 1
int in2 = 3; // 	L2 = Left Motor Lead 2
int in3 = 4; // 	L3 = Right Motor Lead 1
int in4 = 5; // 	L4 = Right Motor Lead 2

int SensorLinhaD = 6 ;
int SensorLinhaE = 7 ;

int velocidadeE = 200;
int velocidadeD = 200;
int direcao = 1; // 1 é para frente - 0 para ré

void setup()
{
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);  
  
  pinMode(SensorLinhaD, INPUT);
  pinMode(SensorLinhaD, INPUT);

}

void loop()
{

    MotorEsquerdo(direcao,velocidadeE);
    MotorDireito(direcao,velocidadeD);

    int valorSensorD = digitalRead(SensorLinhaD);
    
    if ( digitalRead(SensorLinhaD) == 1 )
    { 
        MotorEsquerdo(direcao,255);
        delay(1000);
        MotorEsquerdo(direcao,velocidadeE);      
    }

    if ( digitalRead(SensorLinhaE) == 1 )
    { 
        MotorDireito(direcao,255);
        delay(1000);
        MotorDireito(direcao,velocidadeD);      
    }
    delay(150);

}

// ***********************************************************************
// Função Controle do Motor**************************************************
// ***********************************************************************
// Function(Direção, Velocidade)
// Direção
// 1=Frente
// 0= Ré
// Velocidade
// 0 a 255
// ***********************************************************************
void MotorEsquerdo(int Direction, int Speed)
{
    analogWrite(PWMMotorE, Speed);
    if (Direction == 1)
    {
        digitalWrite(in1, HIGH);
        digitalWrite(in2, LOW);
    }
    else
    {
        digitalWrite(in1, LOW);
        digitalWrite(in2, HIGH);
    }
}

// ***********************************************************************
void MotorDireito(int Direction, int Speed)
{
    analogWrite(PWMMotorD, Speed);
    if (Direction == 1)
    {
        digitalWrite(in3, HIGH);
        digitalWrite(in4, LOW);
    }
    else
    {
        digitalWrite(in3, LOW);
        digitalWrite(in4, HIGH);
    }  
}
