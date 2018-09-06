#include<math.h>
int tempPin = 14;    //14 is A0
double rawTemp = 0;

void setup()
{
  Serial.begin(9600);
  analogReference(INTERNAL); //Putting Everything to reference
}

void loop()
{
  
  rawTemp = analogRead(tempPin);
  Serial.println(rawTemp);
  //conversion equation
  double realTemp = ((5.506 - sqrt(pow(5.506,2) + 4*0.00176 * (870.6 - rawTemp)))/(2 * -0.00176)) + 17;
  Serial.println(realTemp);
  delay(2000);
  
}
