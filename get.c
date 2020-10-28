#include <stdio.h>
#include <string.h>
int main()
{
	char file_name[30];
	char message[50];
	gets(message);
	int len = strlen(message);
	printf("len = %d\n",len);
	FILE *fp;
	if(message[0] == 'g' && message[1] == 'e' && message[2] == 't')
	{
		int index = 4;
		printf("file_name : ");
		for(int i=index; i<len;i++)
		{
			//strcat(file_name,message[i]);
			printf("%c",message[i]);
		}
		printf("\n");
		fp = fopen("hello.txt","rb");
		if(fp == NULL)
		{
			printf("file");
			return 1;
		}
		printf("file : ");
		while(fgets(message,50, fp) != NULL)
		{
			printf("%s",message);
		}
		
		fclose(fp);
		return 0;
	}
}
