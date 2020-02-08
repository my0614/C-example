#include <stdio.h>

int main()
{
	FILE *FP;
	char string[20];
	int i = 1;
	fp = fopen("string.txt","r");
	if(fp == NULL)
	     return 0;
	while(1)
	{
		fgets(string,20,fp);
		if(feof(fp))
			break;
		printf("%04d:%s",i,string);
		i++;
	
	}
	fclose(fp);

	return 0;
}
