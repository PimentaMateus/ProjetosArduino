#include <IRremote.h>

IRrecv irReceptor(0);
decode_results results;

void setup()
{
  Serial.begin(9600);
  irReceptor.enableIRIn(); // Start the receiver
}

void loop() 
{
  
  if (irReceptor.decode(&results)) 
  {
    Serial.println(results.value, HEX);
    Serial.println(results.value);
    irReceptor.resume(); // Receive the next value
  }
}
