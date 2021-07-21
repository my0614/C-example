#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[100000];
    int re;
    scanf("%s",&s);
    
    if(s[0] !='0') printf("%d",strtol(s,NULL,10));
    else if(s[0] == '0')
    {
        if(s[1] == 'x')
        {
            printf("%d",strtol(s,NULL,16));
            return 0;
           
        }
        printf("%x",strtol(s,NULL,8));
    }
    
    
    
}
