#ifndef CODELEET_MERGE_SORTED_ARRAY_H
#define CODELEET_MERGE_SORTED_ARRAY_H

#endif //CODELEET_MERGE_SORTED_ARRAY_H
#include "stdio.h"
#include "vector"

using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        for (int i=0;i < k;i++) {
            int last_element= nums.back();
            nums.insert(nums.begin(),last_element);
            nums.pop_back();
        }
    }
};