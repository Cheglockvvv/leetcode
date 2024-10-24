#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    // int n; cin >> n;
    // map<map<char, int>, vector<string>> m; very bad time complexity 
    // vector<string> strs(n);
    // vector<vector<string>> answer;

    // for (auto& i : strs) {
    //     cin >> i;
    // }

    // for (string str : strs) {
    //     map<char, int> loop;
    //     for (char c : str) {
    //         ++loop[c];
    //     }
    //     m[loop].push_back(str);
    // }
    
    // for (auto const& entry : m) {
    //     answer.push_back(entry.second);
    // }

    // for (vector<string> group : answer) {
    //     for (string str : group) {
    //         cout << str << " ";
    //     }
    //     cout << "\n";
    // }

    int n;
    cin >> n;
    unordered_map<string, vector<string>> m;
    vector<string> str(n);
    
    for (auto& i: str) {
        cin >> i;
    }

    for (auto i: str) {
        string word = i;
        sort(word.begin(), word.end());
        m[word].push_back(i);
    }

    vector<vector<string>> answer;

    for (auto x: m) {
        answer.push_back(x.second);
    }
    
    return 0;
}