#include <bits/stdc++.h>
#include <functional>
#include <vector>
#include <queue>
#include <vector>
#include <iostream>
class Solution {
        vector<int> prefixSums;
public:
    Solution(vector<int>& w) {
                for (auto n : w)
            prefixSums.push_back(n + (prefixSums.empty() ? 
                0 : prefixSums.back()));
    }
    
    int pickIndex() {
                // generate a random number in the range of [0, 1]
        float randNum = (float) rand() / RAND_MAX;
        float target =  randNum * prefixSums.back();
        
        //Binary Search
		return upper_bound(begin(prefixSums), end(prefixSums), target) - begin(prefixSums);
    }
};


