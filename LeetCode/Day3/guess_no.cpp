#include <iostream>
using namespace std;
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

 int picked = 6;   // Secret number

int guess(int num) {
    if (num > picked)
        return -1;
    else if (num < picked)
        return 1;
    else
        return 0;
}

class Solution {
public:
    int guessNumber(int n) {
        int start = 1;
        int end = n;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (guess(mid) == 0)
                return mid;
            else if (guess(mid) == -1)
                end = mid - 1;
            else
                start = mid + 1;
        }
        return -1;
    }
};

int main() {
    Solution s;
    int n = 10;
    cout << s.guessNumber(n);
}