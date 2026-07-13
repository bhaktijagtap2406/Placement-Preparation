#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:

    bool possible(vector<int>& piles, int h, int speed){
        long long totalHours = 0;

        for(int i = 0; i < piles.size(); i++){
            totalHours += (piles[i] + speed - 1) / speed;
        }

        if(totalHours <= h){
            return true;
        }
        return false;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int start = 1;
        int end = *max_element(piles.begin(),piles.end());
        int ans = end;

        while(start <= end){
            int mid = start + (end-start)/2;
            if(possible(piles,h,mid)){
                ans = mid;
                end = mid-1;
            }
            else{
                start = mid + 1;
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> piles = {3,6,7,11};
    int h = 8;
    cout<<s.minEatingSpeed(piles,h);
}