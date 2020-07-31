#include <stdio.h>
#include <stdlib.h>
#include <sys/shm.h>
#include <string.h>

typedef struct {
        int a;
        char b[10];
}Form;

// shm.c
int main()
{

        int shmid;
        void *shared_memory = (void *)0;

        Form* form;

        /* 공유메모리 공간을 만든다. */
        shmid = shmget((key_t)1234, sizeof(form), 0666|IPC_CREAT);
        if (shmid == -1)
        {
                perror("shmget failed : ");
                exit(0);
        }

        /* 공유메모리를 사용하기 위해 프로세스메모리에 붙인다. */
        shared_memory = shmat(shmid, (void *)0, 0);
        if (shared_memory == (void *)-1)
        {
                perror("shmat failed : ");
                exit(0);
        }

        form = (Form*)shared_memory; // 할당된 공유메모리에 데이터를 넣는다.

        form->a = 3;
        memcpy(form->b, "test", sizeof(form->b));

        return 0;
}

~
~
~

