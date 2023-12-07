//
// Created by saurom on 07/12/2023.
//

#ifndef CODELEET_BEST_TIME_TO_BUY_AND_SELL_STOCK_H
#define CODELEET_BEST_TIME_TO_BUY_AND_SELL_STOCK_H

#endif //CODELEET_BEST_TIME_TO_BUY_AND_SELL_STOCK_H
#ifndef CODELEET_JUMP_GAME_H
#define CODELEET_JUMP_GAME_H

#endif //CODELEET_JUMP_GAME_H
#include "stdio.h"
#include "vector"

class Solution {
public:
    int mySqrt(int x) {
        if (x <= 1) {
            return x;
        }

        long left = 1;
        long right = x;
        while (left <= right) {
            long mid = left + (right - left) / 2;
            if (mid * mid == x) {
                return mid;
            } else if (mid * mid < x) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return right;
    }
};