#include <signal.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
        sigset_t set;
        int result;

        sigemptyset(&set);

        result = sigismember(&set, SIGALRM);
        printf("SIGALRM is %s a member\n", result? "":"not");
        sigaddset(&set, SIGALRM);
        result = sigismember(&set, SIGALRM);
        printf("sIGALRM is %s a member\n", result? "":"not");
                sigfillset(&set);
        result = sigismember(&set, SIGCHLD);
        printf("SIGCHLD is %s a member\n", result?"":"not");


        result = sigismember(&set, SIGCHLD);
        printf("SIGCHLD is %s a member\n", result?"":"not");

        return 0;

}
~                                                                                                
~                                                                                                
~                                                                                                
~                
