#include<iostream>
using namespace std;
void Unq(char *p)
{
    int flag = 0;
    char *k;
    for(k=p;*k!=' ' && *k !='\0';k++)
    {
        char *j;
        for(j=k+1;*j!=' ' && *j != '\0';j++ )
        {
            if(*j==*k || (*j==*k+32) || (*j==*k-32))
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            break;
        }
    }
    if(flag==0)
    {
        cout<<'\n';
        for(k=p;*k!=' ' && *k !='\0';k++);
        while(p!=k)
        {
            cout<<*p;
            p++;
        }
    }
}
int main()
{
    char *s;
    cout<<"\nEnter a Sentence:\n";
    gets(s);
    char *cp;
    for(cp=s;*cp!='\0';cp++)
    {
        if(cp==s)
            Unq(cp);
        else if(*cp==' ')
            Unq(cp+1);
    }
}