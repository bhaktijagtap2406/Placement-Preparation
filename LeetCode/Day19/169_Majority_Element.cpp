#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate;
        int count = 0;

        for(int i=0;i<nums.size();i++){

            if(count == 0){
                candidate = nums[i];
                count = 1;
            }
            else if(nums[i] == candidate){
                count++;
            }
            else{
                count--;
            }

        }

        return candidate;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {3, 2, 3};
    int result = solution.majorityElement(nums);

    cout << "The majority element is: " << result << endl;

    return 0;
}