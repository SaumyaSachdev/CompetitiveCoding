// LeetCode : https://leetcode.com/problems/count-number-of-teams/

// Author : Vishal Vishwanathan

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numTeams(vector<int>& rating) {
        int ans = 0;
        int n = rating.size();
        
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    
                    
                    if((rating[i]<rating[j]) && (rating[j]<rating[k]) || (rating[i]>rating[j])&& (rating[j]>rating[k])){
                        ans++;
                    }
                    
                }
            }
        }
        return ans;
    }
};

int main() {
	vector<int> v = {2,5,3,4,1};
	Solution s;	
	cout<<s.numTeams(v)<<endl;
	return 0;
}
