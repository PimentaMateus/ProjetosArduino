int fPinA = 2;    // Forward for motor A (left)

int rPinA = 3;    // Reverse for motor A (Left)

int toggleA = 9;  // Turns motor A on/off

 

int fPinB = 4;    // Forward for motor B (Right)

int rPinB = 5;    // Reverse for motor B (Right)

int toggleB = 10; // Turns motor B on/off

 

 

void setup()

{

   pinMode( fPinA, OUTPUT );   

   pinMode( rPinA, OUTPUT );

   pinMode( toggleA, OUTPUT );

   pinMode( fPinB, OUTPUT );   

   pinMode( rPinB, OUTPUT );  

   pinMode( toggleB, OUTPUT );

}

 

void loop()

{

   digitalWrite( toggleA, HIGH );  // Turns motor A on

   digitalWrite( fPinA, HIGH );    // Makes motor A go forward

   digitalWrite( rPinA, LOW );     // Reverse not used

 

   digitalWrite( toggleB, HIGH );  // Turns motor B on

   digitalWrite( fPinB, HIGH );    // Makes motor B go forward

   digitalWrite( rPinB, LOW );     // Reverse not used

}
