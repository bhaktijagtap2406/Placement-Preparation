#include <iostream>
using namespace std;

int main() {
    int nums[7] = {1, 2, 4, 5, 7, 8, 9};
    int n = 7;
    int target = 6;

    int start = 0;
    int end = n - 1;
    int ans = n;

    // Lower Bound
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (nums[mid] >= target) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    // Ceil
    if (ans == n) {
        cout << "Ceil = Does not exist" << endl;
    } else {
        cout << "Ceil = " << nums[ans] << endl;
    }

    // Floor
    if (ans == n) {
        cout << "Floor = " << nums[n - 1] << endl;
    }
    else if (nums[ans] == target) {
        cout << "Floor = " << nums[ans] << endl;
    }
    else if (ans == 0) {
        cout << "Floor = Does not exist" << endl;
    }
    else {
        cout << "Floor = " << nums[ans - 1] << endl;
    }

    return 0;
}