#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> previousSmaller(vector<int>& heights){
        stack<int> st;
        vector<int> ans(heights.size(),-1);
        for(int i = 0;i<heights.size();i++){
            while(!st.empty() && heights[i]<=heights[st.top()]){
                st.pop();
            }
            if(!st.empty())
                ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int> nextSmaller(vector<int>& heights){
        stack<int> st;
        vector<int> ans(heights.size(),heights.size());
        for(int i = heights.size()-1; i >= 0; i--){
            while(!st.empty() && heights[i]<=heights[st.top()]){
                st.pop();
            }
            if(!st.empty())
                ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }

    int largestRectangleArea(vector<int>& heights) {
        vector<int> left = previousSmaller(heights);
        vector<int> right = nextSmaller(heights);

        int maxArea = 0;

        for(int i = 0;i<heights.size();i++){

            int width = right[i] - left[i] - 1;

            int area = heights[i] * width;

            maxArea = max(maxArea, area);
        }

        return maxArea;
    }
};

int main() {
    Solution solution;
    vector<int> heights = {2, 1, 5, 6, 2, 3};
    int maxArea = solution.largestRectangleArea(heights);
    cout << "The largest rectangle area is: " << maxArea << endl;
    return 0;
}