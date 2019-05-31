
// Segmentos
int a = 2; 
int b = 4;
int c = 10;
int d = 9;
int e = 8;
int f = 3;
int g = 6;

// ponto
int dp = 5;

// Digitos
int digito1 = 11;
int digito2 = 7;
int digito3 = 12;
int digito4 = 1;

int tempo = 1000;
int tempo2 = 0001;

double contador = 0;

int unidade ;
int dezena ;
int centena ;
int milhar ;

void setup ()
{
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(dp,OUTPUT);
  pinMode(digito1,OUTPUT);
  pinMode(digito2,OUTPUT);
  pinMode(digito3,OUTPUT);
  pinMode(digito4,OUTPUT);
  digitalWrite(digito1,HIGH);
  digitalWrite(digito2,HIGH);
  digitalWrite(digito3,HIGH);
  digitalWrite(digito4,HIGH);
//  Serial.begin(9600);  
}

void loop ()
{

    unidade = int(contador) % 10;
    digitalWrite(digito2,HIGH);
    digitalWrite(digito3,HIGH);
    digitalWrite(digito4,HIGH);
    numero(unidade);
    digitalWrite(digito1,LOW);
    delay(tempo2);  

    if ( contador > 9 )
    {
      dezena = int(contador/10) % 10;
      digitalWrite(digito1,HIGH);
      digitalWrite(digito3,HIGH);
      digitalWrite(digito4,HIGH);
      numero(dezena);
      digitalWrite(digito2,LOW);
      delay(tempo2);
    }  

    if ( contador > 99 )
    {
      centena = int(contador/100) % 10;
      digitalWrite(digito1,HIGH);
      digitalWrite(digito2,HIGH);
      digitalWrite(digito4,HIGH);
      numero(centena);
      digitalWrite(digito3,LOW);
      delay(tempo2);
    }  
    
    if ( contador > 999 )
    {
      milhar = int(contador/1000) % 10;
      digitalWrite(digito1,HIGH);
      digitalWrite(digito2,HIGH);
      digitalWrite(digito3,HIGH);
      numero(milhar);
      digitalWrite(digito4,LOW);
      delay(tempo2);
    }  

  contador = int(millis()/100);

}

void numero(int num)
{

  if ( num == 0 )
  {
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);  
    digitalWrite(g,LOW);  
  } 

  if ( num == 1 )
  {
    digitalWrite(a,LOW);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,LOW);  
    digitalWrite(g,LOW);  
  } 

  if ( num == 2 )
  {
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,LOW);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,LOW);  
    digitalWrite(g,HIGH);  
  } 

  if ( num == 3 )
  {
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,LOW);
    digitalWrite(f,LOW);  
    digitalWrite(g,HIGH);  
  } 
  
  if ( num == 4 )
  {
    digitalWrite(a,LOW);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,HIGH);  
    digitalWrite(g,HIGH);  
  }  
  
  if ( num == 5 )
  {
    digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,LOW);
    digitalWrite(f,HIGH);  
    digitalWrite(g,HIGH);  
  }  

  if ( num == 6 )
  {
    digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);  
    digitalWrite(g,HIGH);  
  }  

  if ( num == 7 )
  {
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,LOW);  
    digitalWrite(g,LOW);  
  }  

  if ( num == 8 )
  {
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);  
    digitalWrite(g,HIGH);  
  }  

  if ( num == 9 )
  {
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,LOW);
    digitalWrite(f,HIGH);  
    digitalWrite(g,HIGH);  
  }    
}



