
#include <stdio.h>

int main()
{
    int n;
    int arr[1000] = {10000,};
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<(n-i)+i;j++)
        {
           printf("%d ",arr[j]);
        }
        for(int k = 0;k<i;k++)
        {
            printf("%d ",arr[k]);
        }
        printf("\n");
    }
    return 0;
}
