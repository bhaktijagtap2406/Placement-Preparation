#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n = operations.size();
        int X = 0;
        for(int i = 0;i<n;i++){
            if(operations[i] == "--X" || operations[i] == "X--"){
                X--;
            }
            else{
                X++;
            }
        }
        return X;
    }
};

int main(){
    Solution sol;
    vector<string> operations = {"--X","X++","X++"};
    int result = sol.finalValueAfterOperations(operations);
    cout << "Final value of X: " << result << endl;

    return 0;
}