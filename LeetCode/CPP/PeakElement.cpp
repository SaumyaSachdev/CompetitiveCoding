// Leetcode: https://leetcode.com/problems/find-peak-element

// Author: Vishal Vishwanathan

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        
        for(int i = 0;i<nums.size();i++) {
            if(i>0&&i<nums.size()-1){
                if(nums[i]>nums[i-1] && nums[i]>nums[i+1]) {
                    return i;
                }
            }
        }
        if(nums[0]>nums[nums.size()-1]) return 0;
        else return nums.size()-1;
        return 0;
    }
};

int main() {
	Solution s;
	vector<int> v = {1,2,1};
	cout<<s.findPeakElement(v)<<endl;
	return 0;
}
