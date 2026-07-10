#include <iostream>
using namespace std;

int main(){
    int arr[5] = {2,5,8,3,7};
    int x = 3;
    for(int i = 0;i<5;i++){
        if(arr[i] == x){
            cout<<"Found at index "<<i<<endl;
        }
    }
}