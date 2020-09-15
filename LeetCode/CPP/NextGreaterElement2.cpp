// LeetCode: https://leetcode.com/problems/next-greater-element-ii/

// Author: Vishal Vishwanathan

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
        
            bool found = false;
            
            //search back half
            for(int k=i+1;k<nums.size();k++){
                if(nums[k]>nums[i]){
                    ans.push_back(nums[k]);
                    found = true;
                    break;    
                }
            }
            
            if(!found){
                
                // search front half
                for(int j=0;j<=i-1;j++){
                    if(nums[j]>nums[i]){
                        ans.push_back(nums[j]);
                        found = true;
                        break;
                    }
                }
                
            }
            
            if(!found){
                ans.push_back(-1);
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);

    vector<int> ans = s.nextGreaterElements(v);
    for(int i=0;i<ans.size();i++) {
        cout<<ans[i]<<endl;
    }
    return 0;
}
