#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;    

class Solution {
public:

    bool possible(vector<int>& nums, int threshold,int mid){
        int sum = 0;

        for(int i = 0;i<nums.size();i++){
            sum += ((nums[i] + mid - 1)/mid);
        }
        return sum <= threshold;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int start = 1;
        int end = *max_element(nums.begin(),nums.end());

        int ans = end;

        while(start<=end){
            int mid = start + (end-start)/2;

            if(possible(nums,threshold,mid)){
                ans = mid;
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return ans;
    }
};


int main(){
    Solution s;
    vector<int> nums = {1,2,5,9};
    int threshold = 6;
    cout<<s.smallestDivisor(nums,threshold);
}