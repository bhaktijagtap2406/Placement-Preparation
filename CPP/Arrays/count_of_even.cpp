#include <iostream>
using namespace std;

int main(){
    int arr[5] = {2,5,8,3,7};
    int count = 0;
    for(int i = 0;i<5;i++){
        if(arr[i]%2 == 0){
            count++;
        }
    }
    cout<<count;
}