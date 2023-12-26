#include <iostream>
#include <string>

using namespace std;

int maxline(const string s[], int num) 
{
    int max = 0;
    for (int i = 0; i < num; ++i) 
    {
        int templ = s[i].length();
        if (templ > max) 
        {
            max = templ;
        }
    }
    return max;
}

void rotateby90(const string sarr[], int numS) {
    int maxl = 0;

    maxl = maxline(sarr, numS);

    for (int i = 0; i < maxl; ++i) 
    {
        for (int j = numS - 1; j >= 0; --j) 
        {
            if (i < sarr[j].length()) 
            {
                cout << sarr[j][i];
            } 
            else 
            {
                cout << ' ';
            }
        }
        cout << '\n';
    }
}

int main() { 
    string senarr[] = {"Aman Kumar Singh", "Arun Pratap Singh"};
    int numS = sizeof(senarr) / sizeof(senarr[0]);

    rotateby90(senarr, numS);

    return 0;
}
