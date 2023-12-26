#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool uniqueOccurrences(vector& arr)
    {
        map<int,int>mp;
        for(auto it:arr)
        {
            mp[it]++;
        }
        set s;
        for(auto it:mp)
        {
            s.insert(it.second);
        }
        if(s.size()==mp.size())
        {
            return true;
        }
        return false;
    }
};