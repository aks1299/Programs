#include<iostream>

using namespace std;
int pow(int num, int pow)
{
    int res = 1;
    for(int i = 0; i <= pow; i++ )
    {
        res = res * num;
    }
    return res;
}
int main()
{
    int poly[5];
    int roots = 0, x = 0,eqn = 0,cc = 0;
    int rootval[5];
    poly[0] = 2; poly[1] = 7; poly[2] = -1; poly[3] = -6; poly[4] = -2;
    while(roots < 5)
    {   
        eqn = (poly[0]*(pow(x,4))) + (poly[1]*(pow(x,3))) + (poly[2]*(pow(x,2))) + (poly[3]*(pow(x,1))) + (poly[4]*(pow(x,0)));
        if(eqn == 0)
        {
            rootval[cc] = x;
            cc++;
            roots++;
        }
        x++;
    }
    cout<<endl;
    // for(int i = 0; i < 5 ;i ++)
    // {
    //     cout<<rootval[i]<<" ";
    // }
    return 0;
}