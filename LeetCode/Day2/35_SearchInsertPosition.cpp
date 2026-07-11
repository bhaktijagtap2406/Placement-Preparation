#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int n = arr.size();
        int start = 0;
        int end = n-1;

        while(start <= end){
            int mid = start + (end - start)/2;
            if(arr[mid] == target){
                return mid;
            }
            else if(arr[mid] < target){
                start = mid+1;
            }
            else{
                end = mid - 1;
            }
        }
        return start;
    }
};

int main(){
    Solution sol;
    vector<int> arr = {1,3,5,6};
    int target = 5;

    int result = sol.searchInsert(arr, target);
    cout << "Insert position: " << result << endl;

    return 0;
}