#include <iostream>
using namespace std;

int main(){
    int arr[5] = {2,5,8,3,7};

    int largest = arr[0];
    for(int i = 1;i<5;i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    cout<<"The largest Number in array is :"<<largest<<endl;
}