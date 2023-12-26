

.0 #include<stdio.h> int main()
{
    printf("enter firstname-");
    char fname[20];
    gets(fname);
    printf("\n");
    printf("enter lastname-");
    char lname[10];
    gets(lname);
    printf("\n");
    printf("enter year");
    int year;
    scanf("%d", &year);
    printf("%s %s %d", fname, lname, year);
    return 0;
}