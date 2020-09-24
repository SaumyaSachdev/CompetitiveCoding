// LeetCode: https://leetcode.com/problems/masking-personal-information/

// Author: Vishal Vishwanathan

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution {
    private: 
        string maskEmail(string S){
            transform(S.begin(), S.end(), S.begin(), ::tolower); 
            string ans = "";
            ans += S[0];
            ans += "*****";
            int idx = S.find_first_of('@');
            ans += S.substr(idx-1, S.size());
            return ans;   
        }
        string maskPhone(string S){
            int n = S.size();
            string ans = "";
            int j = 0;
            string temp = "";
            int sz = 4;
            for(int i= n-1; i>=0 ; i--){
                if(isdigit(S[i])){
                    j++;
                    if(sz-- > 0)
                        temp = S[i] + temp;
                }
            }

            ans =  "***-***-"+temp;
            if(j>10){
                string t = "+";
                while(j-- > 10) t+= "*";
                t+= "-";
                ans = t+ans;
            }
            return ans;
        }
public:
    string maskPII(string S) {
        
        string ans = "";
        if(S.size() == 0) return ans;
        
        if(S.find_first_of('@') != string::npos) {
            ans = maskEmail(S);
        }
        else{
            ans = maskPhone(S);
        }
        
        return ans;
    }
};

int main() {
	
	Solution s;
	cout<<s.maskPII("leetcode@leet.code")<<endl;
	cout<<s.maskPII("86-(10)12345678")<<endl;

	return 0;
}
