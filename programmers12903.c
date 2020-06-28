#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
	char word[100];
	gets(word);
	int word_len = strlen(word);
	//printf("%d", word_len);
	int h = 0;
	if (word_len % 2 == 0)
	{
		h = word_len / 2;
		printf("%c", word[h-1]);
		printf("%c", word[h]);
	}
	if (word_len % 2 == 1)
	{
		h = (word_len / 2)+1;
		printf("%c", word[h-1]);

	}
	

	return 0;
}


