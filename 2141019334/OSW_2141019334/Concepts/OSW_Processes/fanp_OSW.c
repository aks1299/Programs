#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main()
{
	for(int i = 0; i < 3 ;i++ )
	{
		if(fork()==0)
		{
			printf("Child PID is %d Parent PID is %d\n",getpid(),getppid());
			exit(0);
		}
		
	}
	for(int i = 0; i < 3 ;i++)
	{
		wait(NULL);
	}
	return 0;
}
