int x = 21;
int main(void)
{
    extern int y;
    printf("\n%d %d", x, y);
    return 0;
}
y = 31;