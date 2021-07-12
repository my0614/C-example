#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int sum =-1,cnt = 0;
    int j=1,k=2;
    scanf("%d",&n); 
    for(int i=1;i<=n;i++) sum += i;
    int *arr = (int*)malloc(sizeof(int)* sum);
    for(int i=0;i<=sum;i++)
    {
        scanf("%d",&arr[i]);
    }
    cnt = arr[0];
    for(int i=1;i<=n-1;i++)
    {
    	
        if(arr[j] > arr[k])
		{

			cnt += arr[j];
			j = j+ i;
			k = j+ 1; 
		}
		else
		{
			cnt += arr[k];
			k = i + k + 1;
			j = k+1;
		}

    }
    printf("최대값 = %d\n",cnt);
    
    free(arr);
    
}
