#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> mp;

        for(int i = 0;i<t.size();i++){
            mp[t[i]]++;
        }
        for(int i = 0;i<s.size();i++){
            mp[s[i]]--;
        }

        for(auto x : mp){
            if(x.second != 0){
                return x.first;
            }
        }
        return 0;
    }
};

int main() {
    Solution solution;
    string s = "abcd"; // Example input
    string t = "abcde"; // Example input
    char result = solution.findTheDifference(s, t);
    
    cout << "The extra character in t is: " << result << endl;

    return 0;
}