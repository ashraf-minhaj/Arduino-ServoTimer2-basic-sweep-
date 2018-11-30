/*Before we get to know the ServoTimer2 code lets look back at Servo.h library sweep.

(the motor will rotate from 0 degree to 90 degree - wait for 1 sec- then to 180 degree-wait for 1 sec)*/

#include<Servo.h>
Servo servo1;
void setup() 
{
servo1.attach(6);   // put your setup code here, to run once
}
void loop() 
{  // put your main code here, to run repeatedly:
servo1.write(0);
delay(1000);
servo1.write(90);
delay(1000);
servo1.write(180);
delay(1000);
}
