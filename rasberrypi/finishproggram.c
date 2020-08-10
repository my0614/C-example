#include <wiringPi.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_COUNT 85
#define DHT_PIN 5

int dhtval[5] = {0,0,0,0,0};
int sel;
void readData(void)
{
	unsigned short state = HIGH;
	unsigned short counter = 0;
	unsigned short j = 0,i;
	float farenheit;
	pinMode(4,OUTPUT);
	printf("dht start\n");
	for(i = 0;  i<5;i++) dhtval[i] = 0;
	pinMode(DHT_PIN, OUTPUT);
	digitalWrite(DHT_PIN, LOW);
	delay(18);
	digitalWrite(DHT_PIN, HIGH);
	delayMicroseconds(40);
	pinMode(DHT_PIN, INPUT);

	for(i = 0;i<MAX_COUNT;i++){
		counter = 0;
	while(digitalRead(DHT_PIN) == state)
	{
		counter++;
		delayMicroseconds(1);
		if(counter  == 255)
			break;
		
	}
	
	state = digitalRead(DHT_PIN);
	if(counter == 255 )
		break;

	if((i>=4) &&  (i%2 == 0)) 
	{
		dhtval[j/8] <<= 1;

	if(counter > 16) 
		dhtval[j/8] |=1;	
		j++;
	}
	}
	
	if((j >= 40) && (dhtval[4] == ((dhtval[0] + dhtval[1] + dhtval[2] + dhtval[3])
						& 0xFF)))
 {
	farenheit = dhtval[2]*9./5.+32;
	printf("Humidity = %d.%d %% Temperature = %d.%d *C (%.1f *F)\n",
		dhtval[0], dhtval[1], dhtval[2], dhtval[3], farenheit);
	if(sel >= dhtval[3])
	{
		digitalWrite(4,HIGH);
		delay(1000);
		digitalWrite(4,LOW);
		delay(1000);
	}
}
 else printf("Invaild Data!!\n");


}

char str;
int i;
int arr[3] = {27,28,29};

void led(void)
{
	
	pinMode(27,OUTPUT); // led1
	pinMode(28,OUTPUT); // led2
	pinMode(29,OUTPUT); // led3
	printf("led start\n");
	i=0;
	
	for(i=0;i<3;i++) {
	
	digitalWrite(arr[i],HIGH);
	delay(1000);
	digitalWrite(arr[i],LOW);
	delay(1000);
	}
}



 
int fnd_wiring()
{
        int gpiopins[7] = {25,24,23,22,21,3,2 };
int num[10][7] = 
{
        {1,1,1,1,1,1,0},
        {0,1,1,0,0,0,0},
        {1,1,0,1,1,0,1},
        {1,1,1,1,0,0,1},
        {0,1,1,0,0,1,1},
        {1,0,1,1,0,1,1},
        {1,0,1,1,1,1,1},
        {1,1,1,0,0,0,0},
        {1,1,1,1,1,1,1},
        {1,1,1,1,0,1,1} 
};
int arr2[3] = {27,28,29};
int i;
int value=0;
for(i=0;i<7;i++)
{
        pinMode(gpiopins[i],OUTPUT);
}
int cnt=0;
while(1)
{
for(int j=0;j<7;j++)
        digitalWrite(gpiopins[j], num[cnt][j]);

cnt++;
delay(1000);

if(cnt >=10)
{
        cnt=0;

	digitalWrite(arr[value],HIGH);
	delay(1000);
	digitalWrite(arr[value],HIGH);
	value++;
	if(value >= 3)
		value = 0;
	

}
}


return 0;

}

void speaker(void)
{
	digitalWrite(4, HIGH);
	delay(1000);
	digitalWrite(4,LOW);
	delay(1000);

}
int main(int argc, char** argv)
{

	if(wiringPiSetup() == -1) return -1;
	printf("1 = led , 2 = temp ,3 = fnd, 4 = all \n");
	int n=0;
	scanf("%d",&n);
	scanf("%d",&sel);
	pinMode(27,LOW);
	pinMode(28,LOW);
	pinMode(29,LOW);
	while(1) 

