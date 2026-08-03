#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> sToT;
        unordered_map<char, char> tToS;

        for(int i = 0;i<s.size();i++){
            if(sToT.find(s[i]) != sToT.end()){
                if(sToT[s[i]] != t[i]){
                    return false;
                }
            }
            if (tToS.find(t[i]) != tToS.end()) {
                if(tToS[t[i]] != s[i]){
                    return false;
                }
            }
            sToT[s[i]] = t[i];
            tToS[t[i]] = s[i];
        }
        return true;
    }
};

int main() {
    Solution solution;
    string s = "egg";
    string t = "add";
    bool result = solution.isIsomorphic(s, t);
    cout << (result ? "true" : "false") << endl; // Output: true
    return 0;
}