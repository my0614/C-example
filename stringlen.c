#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

	int stringlen = 0, maxlen =0;
	char *pszData = NULL;

	pszData = (char*)malloc(sizeof(char)*maxlen);
	fflush(stdin);
	gets(pszData);

	while(*(pszData+stringlen) !=0)
	{
		stringlen++;
	}
	printf("len =%d\n",stringlen);
	free(pszData);

}
