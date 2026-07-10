#include <iostream>
using namespace std;

int main(){
    int arr[5] = {2,5,8,3,7};

    int largest = arr[0];
    int second_large = arr[1];
    for(int i = 2;i<5;i++){
        if(arr[i] > largest){
            second_large = largest;
            largest = arr[i];
        }
        else if(arr[i]>second_large && arr[i]!=largest){
            second_large = arr[i];
        }
    }
    cout<<"The largest Number in array is :"<<second_large<<endl;
}