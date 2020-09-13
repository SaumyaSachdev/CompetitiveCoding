// Author: Pranjal Kaler
// LeetCode: https://leetcode.com/problems/battleships-in-a-board/

#include <bits/stdc++.h>

class Solution {
public:
    int countBattleships(std :: vector<std :: vector<char>>& board) {
        int ymax = board.size();
        int xmax = board[0].size();
        int count = 0;
        for(int i = 0; i < ymax; i++) {
            for(int j = 0; j < xmax; j++) {
                if(board[i][j] == 'X') {
                    if(j < xmax - 1 && board[i][j+1] == 'X') {
                        // horizontal ship
                        while(j < xmax && board[i][j] == 'X')
                            board[i][j++] = '*';
                    }
                    else if( i < ymax - 1 && board[i+1][j] == 'X') {
                        // vertical ship
                        int k = i;
                        while(k < ymax && board[k][j] == 'X')
                            board[k++][j] = '*';
                    }
                    ++count;
                }
            }
        }
        return count;
    }
};

int main() {
    std :: vector<std :: vector<char>> v = {{'X','.','.','X'},{'.','.','.','X'},{'.','.','.','X'}}; // output -> 2
    //std :: vector<std :: vector<char>> v = {{'X','X','X'}}; // output -> 1
    Solution S;
    std :: cout << S.countBattleships(v) << std :: endl;
    return 0;
}
