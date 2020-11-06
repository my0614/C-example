#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <error.h>
#include <errno.h>
#include <pthread.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#include <netdb.h>
#include <unistd.h>

#define SIZE	sizeof(struct sockaddr_in)
#define MAX_SIZE 2048

//#define MY_PORT_S 2009
//#define MY_PORT_R 2010

void *recvMsg(void *parms);
int sendMsg(char *msg, int size, char *ip, int port);
//int sendMsg2(char *msg, int size, struct sockaddr* sock, int sock_len);

int MY_PORT_S, MY_PORT_R;

int main(int argc, char **argv)
{
	
	if(argc != 4)
	{
		printf("usage : %ss myport_s my_port_r target_port_r \n", argv[0]);
		exit(0);
	}

	MY_PORT_S = atoi(argv[1]);
	MY_PORT_R = atoi(argv[2]);
	int target_r = atoi(argv[3]);

	pthread_t tid;
	if(pthread_create(&tid, NULL, recvMsg, NULL))
	{
		printf(" therad create file\n");
	}

	//char msg[MAX_SIZE];
	//sprintf(msg, "testing");
	//sendMsg(msg, strlen(msg), "127.0.0.1", 2007);

	while(1)
	{
		char msg[MAX_SIZE];
		fgets(msg, MAX_SIZE, stdin);
		sendMsg(msg, strlen(msg), "127.0.0.1", target_r);
		
	}

	sleep(10);



}

void *recvMsg(void *parms)
{
	struct sockaddr_in mySock = {AF_INET, htons(MY_PORT_R), INADDR_ANY};
	int sockfd = socket(AF_INET, SOCK_DGRAM, 0);
	int ret = bind(sockfd, (struct sockaddr *)&mySock, sizeof(mySock));
	if(ret<0)
	{
		extern int errno;
		printf("ret (%d) errno(%d.%s)\n", ret, errno, strerror(errno));
	
	}
	//struct sockaddr_in sock;
	int sock_len;
	char msg[MAX_SIZE];
	while(1)
	{
		struct sockaddr_in sock;
		memset(msg, 0, MAX_SIZE);
		int ret = recvfrom(sockfd, &msg, MAX_SIZE, 0, (struct sockaddr *)&sock, &sock_len);
		printf("%d msg received\n", ret);
		if(ret < 0)
		{
			extern int errno;
			printf("ret (%d), errno(%d. %s)\n",ret, errno, strerror(errno));
		}
		else
		{
			printf("%d 0x%08x\n", sock.sin_addr.s_addr, sock.sin_addr.s_addr);
			printf("recd msg : %s %d %s\n", inet_ntoa(sock.sin_addr), ntohs(sock.sin_port), msg);
			printf("%d msg received\n", ret);
			printf("recv from : %s\n", msg);
			//sock.sin_port += 1;
		}
	}
	close(sockfd);



}


int sendMsg2(char *msg, int size, struct sockaddr* sock, int sock_len)
{
        struct sockaddr_in mySock = {AF_INET, htons( MY_PORT_S), INADDR_ANY};
        int sockfd = socket(AF_INET, SOCK_DGRAM, 0);
        int ret= bind(sockfd, (struct sockaddr *)&mySock, sizeof(mySock));
        if(ret<0)
        {
                extern int errno;
                printf("ret (%d) errno(%d. %s) \n", ret, errno, strerror(errno));
        }
        sendto(sockfd, msg, size, 0, sock, sock_len);
        close(sockfd);
}

int sendMsg(char *msg, int size, char *ip, int port)
{
        struct sockaddr_in mySock = {AF_INET, htons(MY_PORT_S), INADDR_ANY};
        int sockfd = socket(AF_INET, SOCK_DGRAM, 0);
        int ret = bind(sockfd, (struct ockaddr *)&mySock, sizeof(mySock));
        if(ret < 0)
        {
                extern int errno;
                printf("ret (%d), errno(%d. %s)\n", ret, errno, strerror(errno));
        }
        struct sockaddr_in sock = {AF_INET, htons(port), INADDR_ANY};
        sock.sin_addr.s_addr = inet_addr(ip);
        sendto(sockfd, msg, size, 0, (struct sockaddr *)&sock, sizeof(sock));
        close(sockfd);


}
