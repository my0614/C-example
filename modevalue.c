#include <stdio.h>

int main()
{
	int arr[10]={0};
	int i,j,cnt=0,cnt2=1,result=0,value;
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		 result += arr[i];
		for(j=i+1;j<10;j++)
		{
				if(arr[i] == arr[j])
				{
					cnt++;
				
				}
					
		}
		if(cnt > cnt2)
		{
			value = arr[i];
			cnt2 = cnt;
		}
	

