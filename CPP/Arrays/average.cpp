#include <iostream>
using namespace std;

int main(){
    int arr[5] = {2,5,8,3,7};

    int sum = 0;
    int avg = 0;
    for(int i = 0;i<5;i++){
        sum += arr[i];
    }
       avg = sum/5;
    cout<<"The avg of Numbers in array is :"<<avg<<endl;
}