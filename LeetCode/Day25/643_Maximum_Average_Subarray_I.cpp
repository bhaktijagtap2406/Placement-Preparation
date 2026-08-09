#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int windowSum = 0;

        for(int i = 0;i<k;i++){
            windowSum += nums[i];
        }
        int maxSum = windowSum;

        for(int j = k;j<nums.size();j++){
            windowSum = windowSum - nums[j-k] + nums[j];
            maxSum = max(maxSum,windowSum);
        }
        return (double)maxSum/k;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;
    double result = solution.findMaxAverage(nums, k);
    cout << "Maximum average subarray of length " << k << " is: " << result << endl;
    return 0;
}