// LeetCode : https://leetcode.com/problems/powerful-integers

// Author : Vishal Vishwanathan
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        set<int> s;
        for(int i=0;;i++){
            for(int j=0;;j++){
                double sum = pow(x,i) + pow(y,j);
                if(sum<=bound){
                   s.insert(sum); 
                }
                
                if(y==1 || pow(y,j)>bound)
                    break;
            }
            if(x==1 || pow(x,i)>bound)
                break;
        }
        return {s.begin(), s.end()};
        
    }
};

int main() {
    Solution s;
    for(int x: s.powerfulIntegers(2,3,10)){
        cout<<x<<endl;
    }
	return 0;
}
