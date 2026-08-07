#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        int count = 0;

        if (nums.empty()) return 0;

        for(int num : st){
            if(st.find(num-1) == st.end()){
                int current = num;
                int sequence = 1;

                while(st.find(current+1) != st.end()){
                    current++;
                    sequence++;
                }
                count = max(count,sequence);
            }
        }
        return count;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    int result = solution.longestConsecutive(nums);
    
    cout << "Length of the longest consecutive sequence: " << result << endl;

    return 0;
}
