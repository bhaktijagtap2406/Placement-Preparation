#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> se;

        for(int i = 0;i<nums.size();i++){
            if(se.find(nums[i]) != se.end()){
                return true;
            }
            se.insert(nums[i]);
        }
        return false;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 4, 5};
    bool result = solution.containsDuplicate(nums);

    cout << "Contains duplicate: " << (result ? "true" : "false") << endl;

    return 0;
}