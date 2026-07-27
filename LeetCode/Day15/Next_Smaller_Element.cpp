#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
  public:
    vector<int> nextSmallerEle(vector<int>& arr) {
        //  code here
        stack<int> st;
        vector<int> ans(arr.size(),-1);
        
        for(int i = arr.size()-1;i>=0;i--){
            while(!st.empty() && arr[i]<=arr[st.top()]){
                st.pop();
            }
            if(!st.empty()){
                ans[i] = arr[st.top()];
            }
            st.push(i);
            
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {4, 5, 2, 10, 8};
    vector<int> result = sol.nextSmallerEle(arr);
    
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}