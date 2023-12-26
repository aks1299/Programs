#include<iostream>
#include<map>
#include<vector>
#include<string>
using namespace std;
map<string,int> ob;
int ctr = 1;
//insert the various words into the map with their corresponding integers
void insertString(string s)
{
    ob.insert({s,ctr});
    ctr++;
}
//create a map to allot the strings to the map
void createMap()
{
   vector<string> strob;
    string alp = "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < alp.length(); ++i) 
    {
        string str(1, alp[i]);
        strob.push_back(str);
    }

    for (int i = 0; i < alp.length() - 1; ++i) 
    {
        for (int j = i + 1; j < alp.length(); ++j) 
        {
            string str = "";
            str += alp[i];
            str += alp[j];
            strob.push_back(str);
        }
    }

    // Generate patterns like 'abc', 'abd', ..., 'xyz'
    for (int i = 0; i < alp.length() - 2; ++i) 
    {
        for (int j = i + 1; j < alp.length() - 1; ++j) 
        {
            for (int k = j + 1; k < alp.length(); ++k) 
            {
                string str = "";
                str += alp[i];
                str += alp[j];
                str += alp[k];
                strob.push_back(str);
            }
        }
    }

    // Generate patterns like 'abcd', 'abce', ..., 'wxyz'
    for (int i = 0; i < alp.length() - 3; ++i) 
    {
        for (int j = i + 1; j < alp.length() - 2; ++j) 
        {
            for (int k = j + 1; k < alp.length() - 1; ++k) 
            {
                for (int l = k + 1; l < alp.length(); ++l) 
                {
                    string str = "";
                    str += alp[i];
                    str += alp[j];
                    str += alp[k];
                    str += alp[l];
                    strob.push_back(str);
                }
            }
        }
    }

    // Generate patterns like 'abcde', 'abcdf', ..., 'vwxyz'
    for (int i = 0; i < alp.length() - 4; ++i) 
    {
        for (int j = i + 1; j < alp.length() - 3; ++j) 
        {
            for (int k = j + 1; k < alp.length() - 2; ++k) 
            {
                for (int l = k + 1; l < alp.length() - 1; ++l) 
                {
                    for (int m = l + 1; m < alp.length(); ++m) 
                    {
                        string str = "";
                        str += alp[i];
                        str += alp[j];
                        str += alp[k];
                        str += alp[l];
                        str += alp[m];
                        strob.push_back(str);
                    }
                }
            }
        }
    }
    // Print the generated list of strob
    for (const string& s : strob) {
        insertString(s);
    }
}
//display the map of strings and their respective integers
void displayMap()
{
    for(auto it = ob.begin(); it != ob.end(); it++)
    {
        cout<<"{ "<<it->first<<" --> "<<it->second<<" }"<<endl;
    }
}

int findstr(string s)
{
    for(auto it = ob.begin(); it != ob.end(); it++)
    {
        if(it->first == s)
        {
            return it->second;
        }
        else
        {
            return 0;
        }
    }
    return 0;
}
int main()
{
    createMap();
    displayMap();
    // string ff = "";
    // cout<<"Enter String to be found : ";
    // cin>>ff;
    // int res = findstr(ff);
    // cout<<"The Integer value at which the pattern is present is : "<<res;
}