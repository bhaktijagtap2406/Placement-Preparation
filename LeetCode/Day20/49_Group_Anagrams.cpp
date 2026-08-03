#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> ans;

        for(int i = 0;i<strs.size();i++){
            string key = strs[i];

            sort(key.begin(),key.end());
            mp[key].push_back(strs[i]);
        }
        for(auto x : mp){
            ans.push_back(x.second);
        }
        return ans;
    }
};

int main() {
    Solution solution;
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> result = solution.groupAnagrams(strs);

    for (const auto& group : result) {
        cout << "[";
        for (const auto& str : group) {
            cout << str << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}