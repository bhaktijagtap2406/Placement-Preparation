#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:

    bool possible(vector<int>& bloomDay, int m, int k , int mid){
        int flowers = 0;
        int bouquets = 0;

        for(int i = 0;i<bloomDay.size();i++){
            if(bloomDay[i] <= mid){
                flowers++;
                if(flowers == k){
                    bouquets++;
                    flowers = 0;
                    if(bouquets >= m){
                        return true;
                    }
                }
            }
            else{
                flowers = 0;
            }
        }
        return bouquets >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int start = *min_element(bloomDay.begin(),bloomDay.end());
        int end = *max_element(bloomDay.begin(),bloomDay.end());

        int ans = -1;

        while(start <= end){
            int mid = start + (end-start)/2;

            if ((long long)m * k > bloomDay.size()) {
                return -1;
            }

            if(possible(bloomDay,m,k,mid)){
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

int main() {
    Solution solution;
    vector<int> bloomDay = {1, 10, 3, 10, 2};
    int m = 3;
    int k = 1;
    int result = solution.minDays(bloomDay, m, k);
    cout << "Minimum number of days to make " << m << " bouquets: " << result << endl;
    return 0;
}