#include <stdio.h>

int main()
{
    int n;
    int arr[10];
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&n);
    
   printf("%d",arr[n-1]);
    return 0;
}


