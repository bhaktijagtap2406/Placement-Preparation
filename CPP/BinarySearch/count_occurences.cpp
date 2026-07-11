#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int target) {
    int start = 0;
    int end = n - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            ans = mid;
            end = mid - 1;   // Search left
        }
        else if (arr[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return ans;
}

int lastOccurrence(int arr[], int n, int target) {
    int start = 0;
    int end = n - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            ans = mid;
            start = mid + 1;   // Search right
        }
        else if (arr[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return ans;
}

int main() {
    int arr[] = {2, 5, 8, 23, 23, 23, 38};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    int first = firstOccurrence(arr, n, target);

    if (first == -1) {
        cout << "Element not found\n";
        cout << "Count = 0";
        return 0;
    }

    int last = lastOccurrence(arr, n, target);
    int count = last - first + 1;

    cout << "First Occurrence : " << first << endl;
    cout << "Last Occurrence  : " << last << endl;
    cout << "Count            : " << count << endl;

    return 0;
}