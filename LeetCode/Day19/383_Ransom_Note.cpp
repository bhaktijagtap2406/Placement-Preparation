#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mp;

        for(int i = 0;i<magazine.size();i++){
            mp[magazine[i]]++;
        }

        for(int i = 0;i<ransomNote.size();i++){
            mp[ransomNote[i]]--;
            if(mp[ransomNote[i]]<0){
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution solution;
    string ransomNote = "a";
    string magazine = "b";
    bool result = solution.canConstruct(ransomNote, magazine);

    cout << "Can the ransom note be constructed from the magazine? " << (result ? "true" : "false") << endl;

    return 0;
}