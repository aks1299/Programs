#include <stdio.h>

int main(int argc, char const *argv[])
{
     int i=-1,j=-1,k=0,l=2,m;
    m=++i || k++ && ++j || l++;
    printf("%d %d %d %d %d\n", i,j,k,l,m);
    return 0;
}
