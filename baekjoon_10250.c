#include <stdlib.h>
#include <stdio.h>

int main()
{

    int num,h,w,n;
    scanf("%d",&num);
    int *arr = (int*)malloc(sizeof(int) * num);
    for(int i=0;i<num;i++)
    {
        scanf("%d %d %d",&h,&w,&n);
        if(n%h == 0)
        {
            printf("%d%02d",h,(n/h));
        }
        else
        {
            printf("%d%02d",(n%h),((n/h)+1));
        }
        
    }
   
    
    
    return 0;
}

