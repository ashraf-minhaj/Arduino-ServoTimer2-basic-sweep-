/* In ServoTimer2 library we must write the Pulsewidth of the servo and the servo moves to that position using that. 
Most commonly 1500 means 90 degree. The maximum pulsewidth is 2250 and minimum is 750. 
Which would mean 750 is for 0 degree and 2250 is for 180 degree. But let me tell you, this varies from servo to servo. 
Just send in your values and see what happens. Don't worry this wont destroy or harm your servo motor a bit.

Now I'll make the same code for ServoTimer 2 and thus you'll get what actually the differences are.*/

#include"ServoTimer2.h"
ServoTimer2 servo1;
void setup() 
{
servo1.attach(6);   
}
void loop() 
{                 // put your main code here, to run repeatedly:
servo1.write(750);  //min pulse width for 0 degree
delay(1000);
servo1.write(1500);  //pulse width for 90 degree
delay(1000);
servo1.write(2250);  //max pulse width for around 180 degree
delay(1000);
}
