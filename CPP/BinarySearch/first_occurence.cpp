#include <iostream>
using namespace std;

int main(){
    int arr[7] = {2,5,8,23,23,23,38};

    int n = 7;
    int target = 23;

    int start = 0;
    int end = n-1;
    int ans = -1;
    while(start <= end){
        int mid = start + (end - start) / 2;

        //for first occurence
        if(arr[mid] == target){
            ans = mid;
            end = mid - 1;

        }
        else if(arr[mid] < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        
    }
    cout << ans;
}