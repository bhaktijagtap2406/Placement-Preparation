#include <iostream>
#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int left = 0;
        int right = 0;
        int maxLength = 0;
        while(right < s.size()){
            if(st.find(s[right]) == st.end()) {
                st.insert(s[right]);
                right++;
                maxLength = max(maxLength, right - left);
            }
            else {
                st.erase(s[left]);
                left++;
            }
        }
        return maxLength;
    }
};

int main() {
    Solution solution;
    string s = "abcabcbb";
    int result = solution.lengthOfLongestSubstring(s);
    cout << "Length of the longest substring without repeating characters is: " << result << endl;
    return 0;
}