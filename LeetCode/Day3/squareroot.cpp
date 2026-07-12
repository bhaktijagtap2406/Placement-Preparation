#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int mySqrt(int x) {
        int start = 0;
        int end = x;
        int ans = 0;
        while(start<=end){
            int mid = start+(end-start)/2;
            long long square = 1LL * mid * mid;
            if(square == x){
                return mid;
            }
            else if(square < x){
                ans = mid;
                start = mid+1;
            }
            else{
                end = mid-1;
            }        
        }
        return ans;
    }
};

int main(){
    Solution s;
    int x = 8;
    cout<<s.mySqrt(x);
}