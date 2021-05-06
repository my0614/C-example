#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <wiringPi.h>

#define trigPin 28
#define echoPin 29


int main(int argc, char **argv)
{
    float distance = 0;
    float startTime, travelTime;

    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
 
    while(1)
    {
        //초음파센서측정
        digitalWrite(trigPin, LOW);
        delay(100);
        digitalWrite(trigPin, HIGH);
        delayMicroseconds(10);
        digitalWrite(trigPin,LOW);
        while(digitalRead(echoPin) == LOW);
        startTime = micros();
        while(digitalRead(echoPin) == HIGH);
        travelTime = micros()-startTime;
        travelTime = micros() - startTime;
        distance = travelTime * 17 /1000;
        printf("Dis : %01f\n", distance); // 거리 출력
        sleep(1);
    }
			
return 0;

}
