#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        vector<int> ob;
        unordered_map<int, int> ump;
        for(int i = 0; i < nums.size(); i++)
        {
            ump[nums[i]]++;
        }
        for(auto it = ump.begin(); it != ump.end(); it++)
        {
            cout<<it -> first<<" "<<it -> second<<" \n";
        }
        return ob;
    }
    int main()
    {
        vector<int> ob;
        ob.push_back(10);
        ob.push_back(10);
        ob.push_back(10);
        ob.push_back(20);
        ob.push_back(20);
        ob.push_back(30);
        ob.push_back(40);
        topKFrequent(ob,2);
    }
};