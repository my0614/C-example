#include <stdio.h>

int main()
{
    int arr[3][3];
    int n,cnt =1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j] = n*i-j;
        }
       
    }
    
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
       
    }
    
    
    
    
}
