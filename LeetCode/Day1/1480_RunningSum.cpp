#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> res;
        int n = nums.size();
        int sum = 0;
        for(int i = 0;i<n;i++){
            sum += nums[i];
            res.push_back(sum);
        }
        return res;
    }
};

int main(){
    Solution s;
    vector<int> nums = {1,2,3,4};
    vector<int> res = s.runningSum(nums);
    for(int i = 0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}