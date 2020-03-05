#include <stdio.h>

void printData(int *pnData)
{
	int i = 0;
	for(i=0;i<5;i++)
		printf("%d\t",pnData[i]);
	
	printf("\n");

}

int main()
{
	int anData[5] = {4,2,5,1,3};
	int i=0,j=0,least=0,temp=0;

	for(i=0;i<4;++i)
	{
		printData(anData);
		least = i;
		for(j=i+1;j<5;++j)
		{
			if(anData[least] > anData[j])
				least = j;
		
		}
		temp = anData[i];
		anData[i] = anData[least];
		anData[least] = temp;

	}
return 0;

}
