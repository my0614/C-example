#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void timeover(int signum)
{
        printf("\n\n time over!!\n\n");
        exit(0);
}

int main()
{
        char  buf[1024];
        char *alpha = "abc";

        int timelimit;
        struct sigaction act;

        act.sa_handler = timeover;
        sigaction(SIGALRM, &act, NULL);

        printf("input itmelimit (sec) .. \n");
        scanf("%d", &timelimit);

        alarm(timelimit);

        printf("START!!\n >");
        scanf("%s", buf);

        if(!strcmp(buf, alpha))
                printf("well done .. you succedd!\n");
        else
                printf("sorry. you fail!!\n");

        return 0;


}
~     
