// LeetCode : https://leetcode.com/problems/string-compression/

// Author : Vishal Vishwanathan

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
       
        int i = 0;
        int idx = 0; 
        while(i < chars.size()){
            char current = chars[i];
            int count = 1;
            while(++i < chars.size() && chars[i] == current){
                count++;
            }
            chars[idx++] = current;
            if(count){
		// if number is double digit
                for(char& ch : to_string(count)){
                    chars[idx++] = ch;
                }
            }
        }
        return idx;
    }
};

int main() {
	
	Solution s;
	vector<char> v = {'a','a','b','b','c','c','c'};
	cout<<s.compress(v)<<endl;
	return 0;	
}
