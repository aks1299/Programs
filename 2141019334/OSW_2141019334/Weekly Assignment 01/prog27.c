#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i=3>4, j=4>3;
    int k=(i=j);
    int l=(k==j);
    printf("%d %d %d %d",i,j,k,l);
    return 0;
    int i=2,j=0;
    int k=i&&j=1;
    printf("%d\n",k);
int i=2,j=2;
int k=i^j&i;
printf("%d\n",k);

int i=3,j=2;
int k=i << 1 > 5;
printf("%d\n",k);
}
