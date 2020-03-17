/*This is an Arduino sketch that sends the serial message
to processing when somone activates a capacitive sensor
connected to it which acts just as a normal
button.*/

#include <CapacitiveSensor.h>

// Creating 4 objects for capacitive sensors

CapacitiveSensor left = CapacitiveSensor(3, 2);
CapacitiveSensor right = CapacitiveSensor(5, 4);
CapacitiveSensor down = CapacitiveSensor(7, 6);
CapacitiveSensor up = CapacitiveSensor(9, 8);

void setup()
{
   Serial.begin(9600);
}

void loop()
{
  /* Variables to check which serial message corresponding
  to which sensor is to be printed */
  
  long tot = left.capacitiveSensor(30);
  long tot1 = right.capacitiveSensor(30);
  long tot2= down.capacitiveSensor(30);
  long tot3 = up.capacitiveSensor(30);
  
  // Now we actually print the serial message
 
  if(tot > 500)
  {
    Serial.print(1);
  }
  else if(tot1 > 500)
  {
    Serial.print(2);
  }
  else if(tot2 > 500)
  {
    Serial.print(3);
  }
  else if(tot3 > 500)
  {
    Serial.print(4);
  }
  else
  {
    Serial.print(0);
  }
}
