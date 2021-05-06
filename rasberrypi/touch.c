#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <wiringPi.h>

#define TOUCH_D 2
int main(int argc, char **argv)
{

	int toggle = 0;
    wiringPiSetup();
    pinMode(TOUCH_D, INPUT); //입력모드

    while(1)
    {
        // 터치센서가 감지되면
        if(digitalRead(TOUCH_D) == HIGH)
        {
            printf("Touch Detected!! \n"); 
        }
        else
        {
            printf("Not Touch!! \n");
        }
        delay(500);
    }
			
return 0;

}
