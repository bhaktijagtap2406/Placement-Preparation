#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start = 0;
        int end = numbers.size()-1;

        int sum = 0;
        vector<int> ans;
        while(start<end){
            sum = numbers[start]+numbers[end];

            if(sum == target){
                ans.push_back(start+1);
                ans.push_back(end+1);
            }
            if(sum > target){
                end--;
            }
            else{
                start++;
            }

        }
        return ans;
    }
};

int main() {
    Solution solution;
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = solution.twoSum(numbers, target);
    
    cout << "Indices of the two numbers that add up to the target: ";
    for (int index : result) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}