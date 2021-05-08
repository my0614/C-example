/* PIR 코드 */
#include <stdio.h>
#include <wiringPi.h>
#include <stdlib.h>
#include <unistd.h>

#define PIR_D 2
char pir_flag = 1
void PIR_interrupt()
{
    pir_flag = 1;
}

int main(void)
{
    wiringPiSetup();
    pinMode(PIR_D,INPUT); // 입력모드
    wiringPiISR(PIR_D,INT_EDGE_RISING,&PIR_interrupt);
    while(1)
    {
        // PIR센서가 감지되면
        if(pir_flag ==1)
        {
            printf("PIR Detected !! \n");
            pir_flag = 0; 
        }
        else
        {
            printf("PIR Not detect !! \n");
        }
        usleep(500000);
    }
    return 0;

}
