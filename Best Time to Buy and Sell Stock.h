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
#include <limits.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            } else if (prices[i] - minPrice > maxProfit) {
                maxProfit = prices[i] - minPrice;
            }
        }

        return maxProfit;
    }
};