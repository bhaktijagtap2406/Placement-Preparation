#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;

        if(s.size() != t.size())
            return false;

        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            mp[t[i]]--;
        }
        for(auto x : mp){
            if(x.second != 0){
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution solution;
    string s = "anagram";
    string t = "nagaram";
    bool result = solution.isAnagram(s, t);

    cout << "Is \"" << s << "\" an anagram of \"" << t << "\"? " << (result ? "true" : "false") << endl;

    return 0;
}