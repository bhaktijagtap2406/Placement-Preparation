#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st;
        vector<int> ans;

        for(int i = 0;i<nums1.size();i++){
            st.insert(nums1[i]);
        }
        for(int i = 0;i<nums2.size();i++){
            if(st.find(nums2[i]) != st.end()){
                ans.push_back(nums2[i]);
                st.erase(nums2[i]);
            }
        }
        return ans;
    }
};

int main() {
    Solution solution;
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};
    vector<int> result = solution.intersection(nums1, nums2);

    cout << "The intersection of the two arrays is: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}