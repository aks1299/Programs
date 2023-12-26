#include <stdio.h>

void fun1(int n);
void fun2(int n);
void nonsense(void){
    printf("*****\n");
    printf("* *\n");
    printf("*****\n");
}
int main(void){
    nonsense();
    nonsense();
    nonsense();
    fun1(15);
    return (0);
}
void fun1(int n)
{
if(n==0)
return;
printf("%d ",n);
fun2(n-2);
printf("%d ",n);
}
void fun2(int n)
{
if(n==0)
return;
printf("%d ",n);
fun1(++n);
printf("%d ",n);
}