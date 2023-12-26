/* Program to demonstrate wait and exit*/

#include<stdio.h> 
#include<stdlib.h> 
#include<sys/wait.h> 
#include<unistd.h> 
  
int main() 
{ 
    pid_t cpid; 
    pid_t cpid2; 
    pid_t ret_pid;
    int status = 0;
    cpid = fork();
    if(cpid == -1)
        exit(-1);           /* terminate child  depending on use case*/

    if(cpid == 0){
        printf("\nchild-1 executing  its pid = (%d)\n", getpid());
        sleep(10);

        printf("Child1 exited\n");
        exit(0);
    } 
    else{    
        
        cpid2 = fork();
        if(cpid2 == -1){
            exit(-1);
        }
        if(cpid2 == 0){
            printf("\nchild-2 executing  its pid = (%d)\n",getpid());
            sleep(5);
            printf("Child2 exited\n");
            exit(1);
        }

        printf("\nParent executing before wait() Parent pid is (%d)\n",getpid());
        ret_pid = waitpid(cpid2, &status, 0);
        printf("\ncpid returned is (%d)\n",ret_pid);
        printf("\nstatus is (%d)\n",status);


        ret_pid = waitpid(cpid, &status, 0);
        printf("\ncpid returned is (%d)\n", ret_pid);
        printf("\nstatus is (%d)\n",status);

        printf("\nParent exited\n");
    }
  
    return 0; 
}