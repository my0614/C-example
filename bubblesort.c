#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char **pnData;
	int i,j;
	char* ptemp = 0;
	pnData= (char**)malloc(sizeof(char*)*5);
	for(i=0;i<5;i++)
	{
		pnData[i] = (char*)malloc(sizeof(char)*16);
		gets(pnData[i]);
	}
	printf("\n\nbubblesort\n\n");

	for(i=4;i>=1;i--)
	{
		for(j=0;j<i;++j)
		{
			if(strcmp(pnData[j],pnData[j+1]) > 0)
			{
						ptemp = pnData[j];
						pnData[j] = pnData[j+1];
					pnData[j+1] = ptemp;					}
	}


	}
for(i=0;i<5;i++)
{
printf("%s\t",pnData[i]);
free(pnData[i]);
}

printf("\n");
free(pnData);
return 0;


}


