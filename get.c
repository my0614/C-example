#include <stdio.h>
#include <string.h>
int main()
{
	char check;
	char file_name[30];
	char file_name2[30]={0,};
	char message[50];
	gets(message);
	if(message[0] == 'g' && message[1] == 'e' && message[2] == 't')
	{
	
		int len = strlen(message);
		printf("len = %d\n",len);
		FILE *fp;

		int index = 4;
		
		for(int i=index; i<len;i++)
		{
			sprintf(file_name,"%c",message[i]);
			strcat(file_name2,file_name);
		
		
		}
		printf("\n");
		printf("file_name%s\n\n",file_name2);
		fp = fopen(file_name2,"rb");
		if(fp == NULL)
		{
			printf("not file!");
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
