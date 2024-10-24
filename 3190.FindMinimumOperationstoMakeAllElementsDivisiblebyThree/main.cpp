#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int amountOfOperations = 0;
        for (int i : nums) {
            if (i % 3 != 0) {
                amountOfOperations++;
            }
        }

        return amountOfOperations;
    }
};
