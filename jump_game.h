//
// Created by saurom on 10/25/2023.
//

#ifndef CODELEET_JUMP_GAME_H
#define CODELEET_JUMP_GAME_H

#endif //CODELEET_JUMP_GAME_H
#include "stdio.h"
#include "vector"
using namespace std;
class Solution {
public:
    bool canJump(vector<int>& nums) {
        if (nums.size() <=1) return true;
        for ( int t=nums.size()-1; t >=1 ;t-- ){ ;
            for (int i = 0; i < t; i++){
                if ( i + nums[i]>= t) {
                    nums.pop_back();
                    break;}
            }
        }
        if (nums.size() <=1) return true;
        else return false;

    }
};