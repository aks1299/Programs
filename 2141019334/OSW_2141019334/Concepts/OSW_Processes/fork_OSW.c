#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include <sys/wait.h>
int main()
{
	pid_t p;
	printf("before fork\n");
	p=fork();
	if(p==0)
	{
		sleep(10);
		printf("I am child having id %d\n", getpid());
		printf("My parent's id is %d\n", getppid());
		printf("Common\n");
	}
	else{
		wait(NULL);
		sleep(20);
		printf("I am parent having id %d\n", getpid());
		printf("My child's id is %d\n", p);
		
	}

	
}
