#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    static vector<int> buildArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            ans[i] = nums[nums[i]];
        }

        return ans;
    }
};

int main() {
    Solution s;
    vector<int> arg = {0, 2, 1, 5, 3, 4};
    vector<int> ans = Solution::buildArray(arg);
    for (int an : ans) {
        cout << an << endl;
    }
}
