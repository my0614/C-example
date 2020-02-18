#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *pbuffer = NULL;
	int input = 0;
	
	scanf("%d\n",&input);
	pbuffer = (char*)malloc(input);
	printf("memory = %d\n",input);
	
	gets(pbuffer);
	puts(pbuffer);
	free(pbuffer);



}
