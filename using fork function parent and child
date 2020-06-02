#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int gNum;

int main()
{
	pid_t fpid;
	
	fpid = fork();

	if(fpid>0)
	{
		while(1)
		{
			printf("parent : forkpid(%4d) : getpid(%4d), getppid(%4d),gNum(%d)\n", (int) fpid, (int)getpid(), (int)getppid(), gNum);
			sleep(5);
			gNum++;
		}
	}
	else if(fpid == 0)
	{
		while(1)
		{
			
			printf("child: forkpid(%4d): getpid(%4d), getppied(%4d), gNum(%d)\n", (int)fpid, (int)getpid(), (int)getppid(), gNum);
			sleep(5);
			gNum++;
		}
	}

}
