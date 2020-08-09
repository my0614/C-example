
#include <wiringPi.h>
#include <softTone.h>

#define SPKR	3
#define TOTAL	11

int notes[] = {391,391,440,440,391,391,329.63,329.63,391,391};
int musicPlay()
{
	int i;
	softToneCreate(SPKR);
	for (i=0;i<TOTAL;++i)
	{
		softToneWrite(SPKR, notes[i]);
		delay(280);
	}
	return 0;

}

int main()
{
wiringPiSetup();

	 wiringPiSetup();
	musicPlay();
	return 0;
}

