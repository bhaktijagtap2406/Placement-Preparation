#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<pair<int,int>> freq;
        vector<int> ans;

        for(int i = 0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto x : mp){
            freq.push_back({x.first,x.second});
        }
        sort(freq.begin(), freq.end(),
            [](auto &a, auto &b){
                return a.second > b.second; // Sort in descending order based on frequency
                //used lambda function to sort the vector of pairs based on the second element (frequency) in descending order
            });
        for(int i=0;i<k;i++){
            ans.push_back(freq[i].first);
        }
        return ans;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;
    vector<int> result = solution.topKFrequent(nums, k);
    
    cout << "Top " << k << " frequent elements: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}