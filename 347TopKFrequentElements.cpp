#include <vector>
#include <unordered_map>
#include <algorithm>
#include <iostream>

using namespace std;

// class Solution {
// public:
//     vector<int> topKFrequent(vector<int>& nums, int k) {
//         unordered_map<int, int> m;

//         for (auto& i: nums) {
//             m[i]++;
//         }

//         vector<pair<int, int>> arr(m.size());

//         int i = 0;
//         for (auto& x: m) {
//             arr[i] = make_pair(x.first, x.second);
//             i++;
//         }

//         sort(arr.begin(), arr.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
//             return a.second > b.second;
//         });

//         vector<int> answer(k);
//         for (int j = 0; j < k; j++) {
//             answer[j] = arr[j].first;
//         }

//         return answer;
//     }
// };
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;

        for (auto& i: nums) {
            m[i]++;
        }

        vector<int> arr(nums.size() + 1);
        
        for (auto& i: m) {
            arr[i.second] = i.first;
        }

        vector<int> answer(k);
        for (int i = 0, j = arr.size() - 1; i < k; i++, j--) {
            answer[i] = arr[j];
        }

        return answer;
    }
};

int main() {

    vector<int> nums;
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);



    Solution s;

    vector<int> answer;
    answer = s.topKFrequent(nums, 2);
    for (auto& i: answer) {
        cout << i << " ";
    }

    return 0;
}