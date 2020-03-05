#include <stdio.h>

typedef struct USERDATA
{

	char szname[16];
	char szphone[16];
	struct USERDATA *pnext;

}USER;

void main(void)
{
	USER userlist[3] = {
		{"minyoung","1234",NULL},
		{"hello", "5034",NULL},
		{"god","1111",NULL}
	};
	USER *ptp = NULL;

	userlist[0].pnext = &userlist[1];
	userlist[1].pnext = &userlist[2];
	userlist[2].pnext = NULL;

	ptp = &userlist[0];
	while(ptp != NULL)
	{
		printf("%s %s\n",ptp->szname, ptp->szphone);
		ptp = ptp->pnext;
	
	}
}
