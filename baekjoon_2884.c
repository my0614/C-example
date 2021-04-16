




#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hour, minute;
    scanf("%d %d",&hour, &minute);
    if((minute - 45) < 0)
    {
        minute = minute - 45;
        if(hour == 0)
        {
            hour = 23;
        }
        else
            hour = hour -1;
        minute = 60 - (minute * -1);
    }
    else
    {
        minute = minute - 45;
    }
    
    printf("%d %d", hour, minute);
    return 0;
}
