#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int k = p.size();
        int left = 0;
        int right = k-1;

        vector<int> patternFreq(26, 0);
        vector<int> windowFreq(26, 0);

        vector<int> ans;
        if(p.size() > s.size())
            return {};
        for(int i = 0; i < k; i++) {
            patternFreq[p[i]-'a']++;
            windowFreq[s[i]-'a']++;
        }
        if(patternFreq == windowFreq){
            ans.push_back(0);
        }
        while(right < s.size()-1){
            windowFreq[s[left]-'a']--;
            left++;
            right++;
            windowFreq[s[right]-'a']++;
            if(patternFreq == windowFreq)
                ans.push_back(left);
        }
        return ans;
    }
};

int main() {
    Solution solution;
    string s = "cbaebabacd";
    string p = "abc";
    vector<int> result = solution.findAnagrams(s, p);
    cout << "Anagram indices: ";
    for (int index : result) {
        cout << index << " ";
    }
    cout << endl;
    return 0;
}