#include <iostream>
using namespace std;

int main(){
    int arr[5] = {2,5,8,3,7};

    int smallest = arr[0];
    for(int i = 1;i<5;i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }
    cout<<"The smallest Number in array is :"<<smallest<<endl;
}