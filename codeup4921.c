#include <stdio.h>

int main()
{
	int n,k,cnt=0;
	scanf("%d %d",&n ,&k);
	int arr[100]={0};
	for(int i=1;i<=n;i++)
	{
		if(n%i == 0)
		{
			arr[cnt] = i;
			cnt++;
		}
	}
	//printf("%d\n",cnt);
	if(cnt <k)
	{
		printf("0");
		return 0;
		
	}
	printf("%d\n",arr[k-1]);
	
}
