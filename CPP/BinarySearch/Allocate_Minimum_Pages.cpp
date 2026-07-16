#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
  
    bool possible(vector<int> &arr, int k,long long mid){
        long long Totalpages = 0;
        int students = 1;
        
        for(int i = 0;i<arr.size();i++){
            if(Totalpages+arr[i] <= mid){
                Totalpages += arr[i];
            }
            else{
                students++;
                Totalpages = arr[i];
                if (students > k)
                    return false;
            }
        }
        return students<=k;
    }
    
    int findPages(vector<int> &arr, int k) {
        int start = *max_element(arr.begin(),arr.end());
        long long end = 0;
        int ans = -1;
        long long sum = 0;
        for(int i=0;i<arr.size();i++){
            sum += arr[i];
        }
        end = sum;
        
        if(k > arr.size()){
            return ans;
        }
        while(start <= end){
            long long mid = start+(end-start)/2;
            
            if(possible(arr,k,mid)){
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
    vector<int> arr = {12,34,67,90};
    int k = 2;
    cout<<s.findPages(arr,k);
}