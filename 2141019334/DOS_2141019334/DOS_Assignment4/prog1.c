#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	pid_t q = fork();
	if(q<0)
	{
		printf("failed to create child process.");
	}
	else if(q == 0)
	{
		printf("Child process id : %d\n",getpid());
		printf("Parent process id : %d\n",getppid());
	}
	else
	{
		printf("Parent process id : %d\n",getpid());
		printf("Child process id : %d\n",q);
	}
}
