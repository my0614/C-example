
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <wiringPi.h>

#define trigPin 28
#define echoPin 29
#define SW 24
#define TOUCH_D 2
int arrled[3] = {23,22,21};


int main(int argc, char **argv)
{
    int distance = 0;
    long startTime, travelTime;
    int i;
	int toggle = 0;
    wiringPiSetup();
	pinMode(SW, INPUT);
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    pinMode(TOUCH_D, INPUT);

    //LED초기화
    for(i = 0;i<3;i++)
	{
		pinMode(arrled[i],OUTPUT);
		digitalWrite(arrled[i], LOW);
	}

    while(1)
    {
        //초음파센서측정
        digitalWrite(trigPin, LOW);
        usleep(2);
        digitalWrite(trigPin, HIGH);
        usleep(20);
        digitalWrite(trigPin,LOW);
        while(digitalRead(echoPin) == LOW);
        startTime = micros();
        while(digitalRead(echoPin) == HIGH);
        startTime = micros();
        travelTime = micros() - startTime;
        distance = travelTime * 17 /1000;
        printf("Dis : %d cm\n", distance);
        sleep(1);

        //초음파센서거리가 60미만이면
        if(distance <60)
        {
            toggle = 2;
        }
        // 버튼을 눌렀을때
        if(digitalRead(SW) == HIGH) toggle = 1;
        else toggle = 0;
        // LED전체 on하고 off  
        if(toggle == 1)
        {   
            printf("LED all on \n");
            for(i = 0;i<3;i++)
                digitalWrite(arrled[i],HIGH);
            delay(1000);
            for(i = 0;i<3;i++)
                digitalWrite(arrled[i],LOW);
        }
        // arrled[0]만 LED on
        if(toggle == 2)
        {
            printf("ultra arrled[0] on\n")
            digitalWrite(arrled[0],HIGH);
            delay(1000);
            digitalWrite(arrled[1],HIGH);
            delay(1000);

        }
        // 터치센서
        if(digitalRead(TOUCH_D) == HIGH)
        {
            printf("Touch Detected!! \n");
        }
        usleep(50000);
    }
			
return 0;

}
