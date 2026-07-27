#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        stack<int> st;
        vector<int> ans(nums.size(),-1);
        for(int i = 0;i<2*n;i++){
            while(!st.empty() && nums[i%n] > nums[st.top()]){
                ans[st.top()] = nums[i%n];
                st.pop();
            }
            if(i<n){
                st.push(i);
            }   
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 1};
    vector<int> result = sol.nextGreaterElements(nums);
    
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}