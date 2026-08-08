#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0;
        int end = height.size()-1;

        int maximumWater = 0;
        while(start < end){
            int new_height = min(height[start],height[end]);
            int width = end-start;
            int area = new_height*width;
            maximumWater = max(area,maximumWater);
            if(height[start] < height[end]){
                start++;
            }
            else{
                end--;
            }
        }
        return maximumWater;
    }
};

int main() {
    Solution solution;
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int maxWater = solution.maxArea(height);
    
    cout << "Maximum water that can be contained: " << maxWater << endl;

    return 0;
}