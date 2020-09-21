// LeetCode : https://leetcode.com/problems/repeated-dna-sequences

// Author : Vishal Vishwanathan
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> ans;
        if(s.size()<10) return ans;
        map<string,int> m;
        
        for(int i=0;i<s.length()-10+1;i++){
            string sSub = s.substr(i,10);
            m[sSub]++;
        }
        
        for(auto i: m){
            if(i.second>1)
                ans.push_back(i.first);
        }
        return ans;
    }
};


int main()
{
    Solution s;
    for(string x: s.findRepeatedDnaSequences("AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT")) {
        cout<<x<<endl;
    }

    return 0;
}
