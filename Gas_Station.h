#ifndef CODELEET_MERGE_SORTED_ARRAY_H
#define CODELEET_MERGE_SORTED_ARRAY_H

#endif //CODELEET_MERGE_SORTED_ARRAY_H
#include "stdio.h"
#include "vector"

using namespace std;
//class Solution {
//public:
//    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
//        for (int i=0;i< gas.size();i++) {
//            int n= gas.size();
//            int tank=0;
//            int j=i;
//            for (int k =0;k<n;k++){
//                tank = tank + gas[j] - cost[j];
//                j++;
//                if (j==n) j=0;
//                if (tank<0) break;
//
//            };
//            if (tank >=0) return i;
//        };
//        return -1;
//    };
//};
class Solution {
public:
    int canCompleteCircuit(std::vector<int>& gas, std::vector<int>& cost) {
        int total_gas = 0;
        int current_gas = 0;
        int start_index = 0;

        for (int i = 0; i < gas.size(); i++) {
            total_gas += gas[i] - cost[i];
            current_gas += gas[i] - cost[i];

            if (current_gas < 0) {
                start_index = i + 1;
                current_gas = 0;
            }
        }

        if (total_gas >= 0) {
            return start_index;
        } else {
            return -1;
        }
    }
};