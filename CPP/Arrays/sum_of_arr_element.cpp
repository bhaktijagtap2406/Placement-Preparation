#include <iostream>
using namespace std;

int main(){
    int arr[5] = {2,5,8,3,7};

    int sum = 0;
    for(int i = 0;i<5;i++){
        sum += arr[i];
    }
    cout<<"The sum of Numbers in array is :"<<sum<<endl;
}