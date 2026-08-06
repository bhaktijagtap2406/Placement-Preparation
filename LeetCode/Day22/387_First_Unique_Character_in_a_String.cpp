#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> mp;

        for(int i = 0;i<s.size();i++){
            mp[s[i]]++;
        }

        for (int i = 0; i < s.size(); i++) {
            if (mp[s[i]] == 1) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    Solution solution;
    string s = "leetcode"; // Example input
    int result = solution.firstUniqChar(s);
    
    if (result != -1) {
        cout << "The index of the first unique character is: " << result << endl;
    } else {
        cout << "There are no unique characters in the string." << endl;
    }

    return 0;
}