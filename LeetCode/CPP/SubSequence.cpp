// Leetcode: https://leetcode.com/problems/number-of-matching-subsequences/

// Author: Vishal Vishwanathan

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution {
    bool isSubSequence(string s, string t) {
        
        int i=0,j=0;
        while(i<s.length() && j<t.length()){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            else{
                i++;
            }
        }
        return j==t.length()?true:false;
        
    }
public:
    int numMatchingSubseq(string S, vector<string>& words) {
        
        map<string,int> m;
        for(string s: words){
            m[s]++;
        }
        
        int count = 0;
        for(auto i: m){
            
            if(isSubSequence(S,i.first))
                count += i.second;
        }
        return count;
    }
};

int main() {
    Solution s; 
    vector<string> v = {"a", "bb", "acd", "ace"};
    cout<<s.numMatchingSubseq("abcde", v)<<endl;

    return 0;
}
