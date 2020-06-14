#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i = 0, linecount = 0, maxlen = 0; // 줄수와 문자열  최대길이
	char** ppszData = NULL;

	scanf("%d %d", &linecount, &maxlen);
	ppszData = (char**)malloc(sizeof(char*) * linecount);

	for (i = 0; i < linecount; i++)
	{
		ppszData[i] = (char*)malloc(maxlen);
		fflush(stdin);
		gets(ppszData[i]);
	}
	for (i = 0; i < linecount; i++)
	{
		printf("%p %s\n", ppszData[i], ppszData[i]);
		free(ppszData[i]);
	}
	free(ppszData);
}

 
