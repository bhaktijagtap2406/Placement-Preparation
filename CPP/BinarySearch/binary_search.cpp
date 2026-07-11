#include <iostream>
using namespace std;

int main(){
    int arr[8] = {2,5,8,12,16,23,38,56};

    int n = 8;
    int target = 23;

    int start = 0;
    int end = n-1;

    while(start <= end){
        int mid = start + (end - start) / 2;

        //for first occurence
        if(arr[mid] == target){
            cout << "Element found at index " << mid << endl;
            return 0;
        }
        else if(arr[mid] < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        
    }
    cout << "Element not found";
}