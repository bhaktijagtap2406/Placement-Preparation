#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;

        for(int j = 0;j< nums.size();j++){
            if(nums[j] != val){
                swap(nums[i],nums[j]);
                i++;
            }
        }
        return i;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;
    int newLength = solution.removeElement(nums, val);
    
    cout << "New length after removing element " << val << ": " << newLength << endl;
    cout << "Array after removing element: ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}