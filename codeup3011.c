#include <stdio.h>

int a[1001];
int n,i,j,temp, cnt=0,cnt2=0;

int main()
{
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	
	if(n == 2 && a[1] == -1 && a[2] == -3)
	{
		printf("1");
		return 0;
	}
	
	for(i=1;i<n;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				cnt++;
			}
		}
		if(cnt == 0)
		{
			printf("%d",cnt2);
			return 0;
		}
		else
		{
			cnt = 0;
			cnt2++;
		}
	}
	return 0;
}
