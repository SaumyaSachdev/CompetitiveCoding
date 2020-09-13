// LeetCode: https://leetcode.com/problems/construct-the-rectangle

// Author : Vishal Vishwanathan

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
class Solution {
public:
    vector<int> constructRectangle(int area) {
        
        for(int i=sqrt(area);i>0;i--){
        
            if(area%i==0)
                return {area/i,i};
        }
        return {-1,-1};
    }
};


int main() {
    
    Solution s;
    for(int x: s.constructRectangle(4)){
        cout<<x<<endl;
    }
    return 0;
}
