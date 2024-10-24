#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X = 0;
        for (string str : operations) {
            if (str[0] == '-' || str[2] == '-') {
                X--;
            } else {
                X++;
            }
        }

        return X;
    }
};