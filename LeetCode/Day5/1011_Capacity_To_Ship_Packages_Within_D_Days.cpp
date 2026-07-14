#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

class Solution {
public:
    bool possible(vector<int>& weights,int days,int capacity){
        int currentWeight = 0;
        int daysUsed = 1;

        for(int i = 0; i < weights.size(); i++){
            if(currentWeight + weights[i] <= capacity){
                currentWeight += weights[i];
            }
            else{
                daysUsed++;
                currentWeight = weights[i];
            }
        }

        return daysUsed <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int start = *max_element(weights.begin(),weights.end());
        int end = accumulate(weights.begin(), weights.end(), 0);//add all weights

        int ans = end;

        while(start <= end){
            int mid = start + (end - start)/2;

            if(possible(weights,days,mid)){
                ans = mid;
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return ans;
    }
};


int main() {
    Solution solution;
    vector<int> weights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int days = 5;
    int result = solution.shipWithinDays(weights, days);
    cout << "Minimum capacity to ship packages within " << days << " days: " << result << endl;
    return 0;
}