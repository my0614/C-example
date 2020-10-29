#include <stdio.h>
#include <string.h>
int main()
{
	char check;
	char file_name[30];
	char file_name2[30]={0,};
	char message[50];
	gets(message);
		if(message[0] == 'm' && message[1] == 'g' && message[2] == 'e' && message[3] == 't')
	{
	printf("정말로 가져오시겠습니까? (y/n)");
	scanf("%c",&check);
	if(check == 'y')
	{
		int len = strlen(message);
	printf("len = %d\n",len);
	FILE *fp;

		int index = 5;
		
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
	else
	{
		return 0;
	}
}
}
