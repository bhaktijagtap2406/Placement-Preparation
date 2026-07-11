#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n = arr.size();

        int start = 0;
        int end = n-1;

        while(start <= end){
            int mid = start + (end - start) / 2;

            if(arr[mid] == target){
               return mid;
            }
            else if(arr[mid] < target){
               start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        
        }
        return -1;
    }
};


int main(){
    Solution sol;
    vector<int> arr = {2,5,8,12,16,23,38,56};
    int target = 23;

    int result = sol.search(arr, target);
    if(result != -1){
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}