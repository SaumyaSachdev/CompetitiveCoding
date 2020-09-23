// LeetCode: https://leetcode.com/problems/largest-values-from-labels/

// Author: Vishal Vishwanathan
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int num_wanted, int use_limit) {
        
        vector<pair<int,int>> v;
        int n = values.size();
        for(int i=0;i<n;i++){
            v.push_back({values[i], labels[i]});
           
        }
        map<int,int> m;
        int sum = 0;
        
        sort(v.rbegin(), v.rend());
        
        for(int i=0;i<n && num_wanted>0;i++){
            m[v[i].second]++;
            if(m[v[i].second]<=use_limit){
                sum += v[i].first;
                num_wanted--;
            }
        }
        return sum;
    }
};

int main() {
    vector<int> v = {5,4,3,2,1};
    vector<int> l = {1,1,2,2,3};
    
    Solution s;
    cout<<s.largestValsFromLabels(v,l,3,1)<<endl;
}
