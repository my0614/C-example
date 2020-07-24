#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <time.h>
#include <signal.h>
#include <sys/wait.h>
#define MAX_SW 10
#define MAX_STR 256

typedef struct tagInfo
{
	char info[4][MAX_STR];
	char reason[MAX_STR];	
	int count;		
	time_t begin_time;
	pid_t pid;		
} Info;

Info sw[MAX_SW];
int block_count;

void handler(int signum);

int findIdx(pid_t pid);
int Criteria(char txt);


int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		printf("usage : %s <filename>\n", argv[0]);
		return -1;
	}
	
	
	for (int i = 0; i < MAX_SW; i++)
        {
                strcpy(sw[i].reason, "Init.");
                sw[i].pid = -1;
        }

	static struct sigaction act;
        act.sa_handler = handler;
        sigemptyset(&(act.sa_mask));
        sigaddset(&(act.sa_mask), SIGCHLD);
        sigaction(SIGCHLD, &act, NULL);


	int fd = open(argv[1], O_RDONLY);
        if (fd == -1)
        {
                printf("fail to open\n");
                exit(-1);
        }

        int sw_cnt = 0;
        char buf[MAX_SW * MAX_STR] = {0,}, *pt;
        if (read(fd, buf, MAX_SW * MAX_STR) < 0)
        {
                printf("fail to read\n");
                exit(-1);
        }

        pt = buf;
        for (sw_cnt = 0; sw_cnt < MAX_SW && *pt; sw_cnt++)
        {
                for (int j = 0; j < 4; j++)
                {
                        sscanf(pt, "%s", sw[sw_cnt].info[j]);
                        pt += strlen(sw[sw_cnt].info[j]);
                        for (; *pt && Criteria(*pt); pt++)
                        {
                                if (*pt == '\n')
                                        j = 0xFFFF;
                                
                        }
                }
        }
        close(fd);
       block_count = sw_cnt;


	while (1)
	{
		for (int i = 0; i < block_count; i++)
		{
			if (sw[i].pid == -1)
			{
				
				pid_t pid = fork();
			        if (pid == 0)
       				 {
               				 char buf[MAX_STR];
               				 getcwd(buf, MAX_STR);
               				 strcat(buf, "/");
               				 strcat(buf, sw[i].info[0]);
               				 execl(buf, sw[i].info[0], sw[i].info[1], sw[i].info[2], sw[i].info[3], NULL);
               				 return 0;
       				 }
        			sw[i].begin_time = time(NULL);
       				 sw[i].pid = pid;
       				 sw[i].count++;

			}
		}
		 char time_str[MAX_STR];
        fprintf(stdout, "%15s%15s%15s\n", "SW_block", "CNT", "TIME");
       printf("=====================================================\n"); 
        for (int i = 0; i < block_count; i++)
        {
                strftime(time_str, MAX_STR, "%H:%M:%S", localtime(&sw[i].begin_time));
                fprintf(stdout, "%15s%15d%15s\t%s\n", sw[i].info[0], sw[i].count, time_str, sw[i].reason);
        }

		sleep(1);
		system("clear");
	}
}

void handler(int signum)
{
	int pid, status;
	while ((pid = waitpid(-1, &status, WNOHANG)) > 0)
	{
		int index;
		for (int i = 0; i < block_count; i++)
	        {
        	        if (sw[i].pid == pid)
                	{
                        	index = i;
                	}
       		 }
        	

		if (index == -1)
			return;
		// printf("%08X\n", status);
		if (WIFEXITED(status))
		{
			sprintf(sw[index].reason, "exit : %d", WEXITSTATUS(status));
		}
		else if (WIFSIGNALED(status))
		{
			sprintf(sw[index].reason, "SIGNAL(%d, %s)", WTERMSIG(status), strsignal(WTERMSIG(status)));
		}
		sw[index].pid = -1;
	}
}


int Criteria(char txt)
{
	return txt == ' ' || txt  == ';' || txt == '\n';
}



