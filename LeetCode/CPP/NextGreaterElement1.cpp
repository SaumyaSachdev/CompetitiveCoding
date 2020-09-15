// LeetCode : https://leetcode.com/problems/next-greater-element-i/

// Author : Vishal Vishwanathan

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int x: nums1){
            auto f = find(nums2.begin(),nums2.end(),x);
            int idx = distance(nums2.begin(), f);
            bool found = false;
            for(int j=idx;j<nums2.size();j++){
                
                if(nums2[j]>x){
                    found = true;
                    ans.push_back(nums2[j]);
                    break;
                }
            }
            if(!found)
                ans.push_back(-1);
        }
        
        return ans;
    }
};

int main() {
    
    Solution s;
    vector<int> n1 = {4,1,2};
    vector<int> n2 = {1,3,4,2};
    for(int x: s.nextGreaterElement(n1,n2)){
        cout<<x<<endl;
    }
    return 0;
}
