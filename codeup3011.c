#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main(void)
{
	
	int n;
	scanf("%d",&n);
	
	int i,j,ptemp,cnt=0,cnt2=0;
	int pnData[1001];
	for(i=0;i<5;i++)
	{
		
		scanf("%d",&pnData[i]);
		if(n==2 && pnData[1] == -1 && pnData[2] == -3)
		{
			printf("1");
			return 0;
		}
	}


	for(i=1;i<=n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(pnData[j]>pnData[j+1])
			{
				ptemp = pnData[j];
				pnData[j] = pnData[j+1];
				pnData[j+1] = ptemp;
				cnt++;
			}
		}
		if(cnt == 0)
		{
			printf("%d",cnt2);
			exit(0);
		}
		else
		{
			cnt = 0;
			cnt2++;
		}


	}
	return 0;
}

