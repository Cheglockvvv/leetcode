#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    map<map<char, int>, vector<string>> m;
    vector<string> strs;
    vector<vector<string>> answer;

    for (auto& i : strs) {
        cin >> i;
    }

    for (string str : strs) {
        map<char, int> loop;
        for (char c : str) {
            ++loop[c];
        }
        m[loop].push_back(str);
    }
    
    for (auto const& entry : m) {
        answer.push_back(entry.second);
    }

    for (vector<string> group : answer) {
        for (string str : group) {
            cout << str << " ";
        }
        cout << "\n";
    }
    
    return 0;
}