#include <softTone.h>
#include <stdio.h>
#include <wiringPi.h>

#define sw 	28
#define cds	27
#define led 	5
#define buzzer 29


int cdsControl()
{
	int i;
	softToneCreate(buzzer);
	pinMode(sw, INPUT);
	pinMode(cds,INPUT);
	pinMode(led, OUTPUT);
	
	printf("%d\n",cds);
	for(;;)
	{
	 if(digitalRead(cds) == HIGH)
	{
			digitalWrite(led, HIGH);
			softToneWrite(buzzer, 440);		

	}
	else
	{
		digitalWrite(led, LOW);
		softToneWrite(buzzer, 0);
	}	
	}
	return 0;
}


int main()
{
	wiringPiSetup();	
	cdsControl();
	return 0;


}
