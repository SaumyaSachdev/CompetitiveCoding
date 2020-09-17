// LeetCode: https://leetcode.com/problems/unique-number-of-occurrences/

// Author : Vishal Vishwanathan

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        set<int> s;
        map<int,int> m;
        for(int x: arr){
            m[x]++;
        }
        
        for(auto it : m){
            if(s.count(it.second))
                return false;
            s.insert(it.second);
        }
        return true;
    }
};

int main()
{
    vector<int> v = {1,1,2,1,3,3};
    Solution s;
    cout<<s.uniqueOccurrences(v)<<endl;
}
