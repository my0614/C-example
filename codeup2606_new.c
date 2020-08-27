#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS  

int main()
{	
	int i;
	char str[15]= {0};
	double a,b;
	scanf("%d %d",&a,&b);
	int result = a/b;
	double fresult = a/b;
	//printf("%.11lf\n",fresult-result);
	sprintf(str,"%.11lf",fresult-result);
	for(i=2;i<12;i++)
		printf("%c",str[i]);
	
}



