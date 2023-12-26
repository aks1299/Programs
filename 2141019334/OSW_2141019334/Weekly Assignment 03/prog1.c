#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 0;
    while (i <= 5) {
        printf("%3d %3d\n", i, 10 - i);
        i = i + 1;
    }
    i=1;
    while (i)
    {
        printf ( "%d ", i++ ) ;
        if(i>10)
        break ;
    }
    int a=1;
    do {
        printf("%d ", a++);
    } while ( a < 10 );
    i=0;
    int j,n=5;
    for(i=1, j=1; j<= n; i+= 2, j++){
        printf("%d%d\n", i, j);
    }
    int count = 11;
    while (--count+1);
    printf("count down is %d \n",count);
    float x = 1.1 ;
    while ( x == 1.1 ) {
        printf ( "%f\n", x ) ;
        x = x - 0.1 ;
    }
    return 0;
}
