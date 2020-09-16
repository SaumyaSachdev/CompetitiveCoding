// HackerRank: https://www.hackerrank.com/challenges/day-of-the-programmer/problem

// Author: Vishal Vishwanathan
#include <iostream>

using namespace std;

string dayOfProgrammer(int year) {

    string leapHalf = "12.09.";
    string nonLeapHalf = "13.09.";
    string ans;
    if(year<=1917){
        if(year%4==0){
            ans = leapHalf + to_string(year);
        }
        else {
            ans =  nonLeapHalf + to_string(year);
        }
    }
    else if(year==1918){
        // since this is the year of transition +14 days , can hardcode.
        return "26.09.1918";
    }
    else{
        if((year%4==0 && year%100!=0) || (year%400==0)){
            ans = leapHalf + to_string(year);
        }
        else {
            ans = nonLeapHalf + to_string(year);
        }
        
    }
    return ans;
}

int main() {
    cout<<dayOfProgrammer(2017)<<endl;
    return 0;
}
