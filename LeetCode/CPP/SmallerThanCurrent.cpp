// LeetCode: https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/

// Author: Vishal Vishwanathan

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        for(int k=0;k<nums.size();k++) {
            int count = 0;            
            for(int i=0;i<nums.size();i++) {
                if(nums[i]<nums[k])
                    count++;
            }
            ans.push_back(count);
        }
        return ans;        
    }
};

int main() {
    Solution s;
    vector<int> v = {8,1,2,2,3};
    for(int x: s.smallerNumbersThanCurrent(v)){
        cout<<x<<endl;
    }
    return 0;
}
