#include<stdio.h> 
#include<stdlib.h> 
#include<sys/wait.h> 
#include<unistd.h> 
  
int main() 
{ 
    pid_t cpid; 
    int status = 0;
    cpid = fork();
    if(cpid == -1)
        exit(-1);           /* terminate child */

    if(cpid == 0){
        printf("\nchild executing first its pid = (%d)\n",getpid());
        sleep(5);
        printf("Child pid = %d\n", getpid()); 
        exit(3);
    } 
    else{    
        printf("\nParent executing before wait()\n");
        //cpid = wait(NULL); 
        cpid = wait(&status); 
        printf("\nwait() in parent done\nParent pid = %d\n", getpid()); 
        printf("\ncpid returned is (%d)\n",cpid);
        printf("\nstatus is (%d)\n",status);
    }
  
    return 0; 
} 