#include "mbed.h"
#include "arm_book_lib.h"

//=====[Declaration of public data types]======================================
#define period_SEC              0.02
#define DUTY_MIN                0.025
#define DUTY_MAX                0.1135

//=====[Declaration and initialization of public global objects]===============
PwmOut servo(PF_9);

// main() runs in its own thread in the OS
int main()
{
    servo.period(period_SEC);
    while (true)
    {
    servo.write(DUTY_MIN);
    delay(2000);
    servo.write(DUTY_MAX);
    delay(2000);
    }
}
