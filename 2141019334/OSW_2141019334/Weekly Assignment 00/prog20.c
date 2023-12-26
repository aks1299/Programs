#include <stdio.h>

int main(int argc, char const *argv[])
{
    char line[]="lower-case";
    jprintf(":%15s: :%15.5s: :%.5s:\n",line,line,line);
    printf(":%-15s: :%-15.5s: :%-.5s:\n",line,line,line);
    return 0;
    return 0;
}
