// LeetCode: https://leetcode.com/problems/group-anagrams/

// Author: Vishal Vishwanathan

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        
        unordered_map<string, vector<string>> m;
        
        for(auto &s: strs){
            auto word =s;
            sort(s.begin(), s.end());
            m[s].push_back(word);
        }
        
        for(auto x : m){
            ans.push_back(x.second);
        }
        return ans;
    }
};

int main(){

    vector<string> v  = {"eat","tea","tan","ate","nat","bat"};
    Solution s;
    for(vector<string> x:  s.groupAnagrams(v)){
        for(string s: x){
            cout<<s<<"\t";
        }
        cout<<endl;
    }

}
