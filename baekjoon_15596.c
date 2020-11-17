#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long sum(int *a, int n) {
	int i;
    long long ans = 0;
    for(int i=0;i<n;i++)
    {
        ans+= a[i];
    }
	return ans;
}

int main()
{
	int arr[5] = {1,5,9,7,10};
	int result = 0;
	result = sum(arr, 5);
	printf("%d",result);
}
