#include <stdio.h>
void marks()
{
    printf("Marks");
}
void teacher()
{
    printf("Teacher");
}
struct oswcourse
{
    int secid;
    float avgm;
    char present;
    int *marks();
    int teacher();
} o1, o2;
int main()
{
    return 0;
}