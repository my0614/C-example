#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char str[10]={0,}, str2[10] = {0,};
	char result[10]={0,}, result2[10] = {0,};
	int cnt =0,value, value2;
	scanf("%s %s",str,str2);
	for(int i=strlen(str)-1;i>=0;i--)
	{
		result[cnt] = str[i];
		cnt++;
	}	
	cnt =0; //cnt 초기화 
	for(int i=strlen(str2)-1;i>=0;i--)
	{
		result2[cnt] = str2[i];
		cnt++;
	}
	value = atoi(result);
	value2 = atoi(result2);
	
	if(value > value2) printf("%d",value);
	else printf("%d",value2);
}
