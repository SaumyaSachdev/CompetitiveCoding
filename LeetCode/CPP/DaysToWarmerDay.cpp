// LeetCode question: https://leetcode.com/problems/daily-temperatures/
// Author: Pranjal Kaler

#include <bits/stdc++.h>

class Solution {
public:
    std::vector<int> dailyTemperatures(std::vector<int>& T) {
        std::vector<int> result;
        for(int i = 0; i<T.size(); i++) {
            bool flag = true;
            for(int j = i+1; j<T.size(); j++) {
                if(T[j] > T[i]) {
                    result.push_back(j-i);
                    flag = false;
                    break;
                }
            }
            if(flag) {
                result.push_back(0);
            }
        }
        return result;
    }
};

int main() {
    std :: shared_ptr<Solution> S = std :: make_shared<Solution>();
    std :: vector<int> T = {73, 74, 75, 71, 69, 72, 76, 73};
    auto result = S->dailyTemperatures(T);
    for(auto& x : result) {
        std :: cout << x << std :: endl;
    }
    return 0;
}