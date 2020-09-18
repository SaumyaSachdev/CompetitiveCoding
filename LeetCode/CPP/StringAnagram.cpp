// LeetCode : https://leetcode.com/problems/find-all-anagrams-in-a-string/

// Author: Vishal Vishwanathan

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution {
    bool checkIfAnagram(string a, int p_arr[]) {
        int a_arr[26] = {0};
        for(char c: a){
            a_arr[c-'a']++;
        }
        for(int i=0;i<26;i++){
            if(a_arr[i]!=p_arr[i])
                return false;
        }
        return true;
    }
public:
    vector<int> findAnagrams(string s, string p) {
        
        vector<int> ans;
        if(!s.size() || s.size()<p.size()) return ans;
        int window_size = p.size();
        int p_arr[26] = {0};
        
        for(char c: p){
            p_arr[c-'a']++;
        }
        
        for(int i=0;i<s.size()-p.size()+1;i++){
            if(checkIfAnagram(s.substr(i,p.size()), p_arr)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
int main() {
    Solution s;
    for( int x: s.findAnagrams("cbaebabacd","abc")){
        cout<<x<<endl;
    }
}
