

#include <stdio.h>
#include <wiringPi.h>

#define SW 24

int arrled[5] = { 23,22,21,29,28};


int switchControl()
{
	int i;
	int toggle = 0;
	pinMode(SW, INPUT);
	for(i = 0;i<5;i++)
	{
		pinMode(arrled[i],OUTPUT);
		digitalWrite(arrled[i], LOW);
	}

	for(;;)
	{
		for(i=0;i<5;i++)
		{
			printf("%d", toggle);
			if(digitalRead(SW) == HIGH)
			{
				toggle = 1;
			}
			else toggle = 0;
			digitalWrite(arrled[i],HIGH);
			delay(500);
			digitalWrite(arrled[i], LOW);

			delay(500);
		}
		i = 0;
		if(toggle == 0)
		{
			digitalWrite(arrled[i],HIGH);
			while(toggle != 1)
			delay(1000);
		}
	}
	return 0;
}

int main(int argc, char **argv)
{
	wiringPiSetup();
	switchControl();
	return 0;

}
