/*
    This is an Arduino sketch that sends the serial message
    to processing when somone activates a capacitive sensor
    connected to it which acts just as a normal button.
*/

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
  // Now we proceed to print the serial message

  if (left.capacitiveSensor(30) > 500)
  {
    Serial.print(1);
  }
  else if (right.capacitiveSensor(30) > 500)
  {
    Serial.print(2);
  }
  else if (down.capacitiveSensor(30) > 500)
  {
    Serial.print(3);
  }
  else if (up.capacitiveSensor(30) > 500)
  {
    Serial.print(4);
  }
  else
  {
    Serial.print(0);
  }
  /*
    Additionally we could do this by storing the values objects
    in intermediate variables that we may use while adding
    additional functionality to the sketch.
  */
}
