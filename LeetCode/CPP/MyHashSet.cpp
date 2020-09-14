// LeetCode: https://leetcode.com/problems/design-hashset

// Author: Vishal Vishwanathan

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class MyHashSet {
    vector<int> v;
public:
    /** Initialize your data structure here. */
    MyHashSet() {
        
    }
    ~MyHashSet() {
        v.clear();
    }
    
    void add(int key) {
        auto id = find(v.begin(), v.end(),key);
        if(id==v.end())
            v.push_back(key);
    }
    
    void remove(int key) {
        auto id=find(v.begin(),v.end(),key);
        if(id!=v.end())
            v.erase(id);
        return;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        if(!v.size())
            return false;
        else{
            auto id = find(v.begin(), v.end(),key);
            if(id!=v.end())
                return true;
            return false;
        }
    }
};

int main() {
    MyHashSet* m = new MyHashSet();
    m->add(1);
    m->add(2);
    m->remove(1);
    return 0;
}
