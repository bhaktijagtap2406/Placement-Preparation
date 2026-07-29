#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> leftMax(height.size());
        vector<int> rightMax(height.size());
        int n = height.size();
        int water = 0;
        leftMax[0] = height[0];

        for(int i = 1;i<height.size();i++){
            leftMax[i] = max(leftMax[i-1], height[i]);
        }
        rightMax[n-1] = height[n-1];
        
        for(int i = n-2; i >= 0; i--){
            rightMax[i] = max(rightMax[i+1], height[i]);
        }
        for(int i = 0; i < n; i++){
            water += min(leftMax[i], rightMax[i]) - height[i];
        }
        return water;
    }
};

int main() {
    Solution solution;
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    int trappedWater = solution.trap(height);
    cout << "The amount of trapped rain water is: " << trappedWater << endl;
    return 0;
}