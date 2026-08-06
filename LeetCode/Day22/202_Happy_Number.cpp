#include <iostream>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;

        while (true) {

            int sum = 0;

            while (n > 0) {
                int digit = n % 10;
                sum += digit * digit;
                n /= 10;
            }

            if (sum == 1)
                return true;

            if (seen.find(sum) != seen.end())
                return false;

            seen.insert(sum);
            n = sum;
        }
    }
};

int main() {
    Solution solution;
    int n = 19; // Example input
    bool result = solution.isHappy(n);
    
    if (result) {
        cout << n << " is a happy number." << endl;
    } else {
        cout << n << " is not a happy number." << endl;
    }

    return 0;
}