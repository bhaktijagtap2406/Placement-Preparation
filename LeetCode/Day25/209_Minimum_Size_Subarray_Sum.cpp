#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int right = 0;
        int minlength = INT_MAX;
        int add = 0;
        while(right < nums.size()){
            add += nums[right];

            while(add >= target){
                int currentLen = right - left+1;
                minlength = min(minlength, currentLen);
                add -= nums[left];
                left++;
            }
            right++;
        }
        if (minlength == INT_MAX) {
            return 0;
        }
        return minlength;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {2,3,1,2,4,3};
    int target = 7;
    int result = solution.minSubArrayLen(target, nums);
    cout << "Minimum size subarray sum is: " << result << endl;
    return 0;
}