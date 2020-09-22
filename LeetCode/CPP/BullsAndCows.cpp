// LeetCode: https://leetcode.com/problems/bulls-and-cows

// Author : Vishal Vishwanathan

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string getHint(string secret, string guess) {
        
        
        int bulls = 0, cows=0;
        map<char,int> s,g;
        
        for(int i=0;i<secret.length();i++){
            if(secret[i]==guess[i]){
                bulls++;
            }
            else{
                s[secret[i]]++;
                g[guess[i]]++;
            }
        }
        
        for(auto i: s){
            if(g.find(i.first) != g.end()){
                cows += min(i.second, g[i.first]);
            }
        }
        return to_string(bulls)+"A"+to_string(cows)+"B";
        
    }
};

int main()
{
    Solution s;
    cout<<s.getHint("1807","7810");
    return 0;
}
