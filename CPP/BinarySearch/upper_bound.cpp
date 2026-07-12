#include <iostream>
using namespace std;

int main(){
    int nums[7] = {1,2,4,5,7,8,9};
    int target = 5;
    int n=7;
    int start = 0;
    int end = n-1;
    int ans = n;

    while(start <= end){
        int mid = start + (end-start)/2;

        if(nums[mid] > target){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    cout<<ans;
}