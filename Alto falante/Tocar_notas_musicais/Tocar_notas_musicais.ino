int p0 = 0;
int DO = 262;
int RE = 294;
int MI = 330;
int FA = 349;
int SOL = 392;
int LA = 440;
int SI = 523;

void setup()
{
    pinMode(p0,OUTPUT);
}

void loop()
{
    digitalWrite(p0,HIGH);
    tone(p0,DO);
    delay(500);    
    tone(p0,RE);  
    delay(500);    
    tone(p0,MI);  
    delay(500);    
    tone(p0,FA);  
    delay(500);    
    tone(p0,SOL);  
    delay(500);    
    tone(p0,LA);  
    delay(500);    
    tone(p0,SI);
    delay(500);    
    noTone(p0);  
    delay(3000);    
 
}
