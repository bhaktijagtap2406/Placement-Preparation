#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool possible(vector<int>& nums, int k,long long mid){
        long long largestSum = 0;
        int sub = 1;
        
        for(int i = 0;i<nums.size();i++){
            if(largestSum+nums[i] <= mid){
                largestSum += nums[i];
            }
            else{
                sub++;
                largestSum = nums[i];
                if (sub > k)
                    return false;
            }
        }
        return sub<=k;
    }

    int splitArray(vector<int>& nums, int k) {
        int start = *max_element(nums.begin(),nums.end());
        long long end = 0;
        int ans = -1;
        long long sum = 0;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
        }
        end = sum;
        
        if(k > nums.size()){
            return ans;
        }
        while(start <= end){
            long long mid = start+(end-start)/2;
            
            if(possible(nums,k,mid)){
                ans = mid;
                end = mid-1;
            }
            else{
                start = mid + 1;
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> nums = {7,2,5,10,8};
    int k = 2;
    cout<<s.splitArray(nums,k);
}