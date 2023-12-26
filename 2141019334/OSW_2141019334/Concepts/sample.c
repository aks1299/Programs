#include <stdio.h>

int main()
{
    int ivar = 1234;
    printf(":%*.*d:\n",10,4,ivar);
    printf(":%-*.*d:\n",10,4,ivar);
    printf("\n");

    char line[]="hexadecimal";
    printf(":%10s: :%15s: :%15.5s: :%.5s:\n",line,line,line,line);
    printf("\n");

    int i=345;
    float x=34.0, y=-5.6;
    printf(":%6d: :%7.0f: :%10.1e:\n",i,x,y);
    printf(":%-6d: :%-7.0f: :%-10.1e:\n",i,x,y);
    printf(":%+6d: :%+7.0f: :%+10.1e:\n",i,x,y);
    printf(":%-+6d: :%-+7.0f: :%-+10.1e:\n",i,x,y);
    printf(":%6.0d: :%#7.0f: :10g: :%#10g:\n",x,x,y,y);
    printf("\n");

    int j=01767, k=0xa0bd;
    printf(":%8u: :%8o: :%8x:\n",i,j,k);
    printf(":%-8u: :%-8o: :%-8x:\n",i,j,k);
    printf(":%#8u: :%#8o: :%#8x:\n",i,j,k);
    printf(":%08u: :%0o0: :%08x:\n",i,j,k);
    printf(":% #8u: :% #8o: :% #8x:\n",i,j,k);
    printf("\n");

    return 0;

}