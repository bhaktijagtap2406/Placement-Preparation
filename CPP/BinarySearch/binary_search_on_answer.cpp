#include <iostream>
#include <vector>
using namespace std;

bool possible(int mid)
{
    // Write your condition here
    return true;
}

int main()
{
    int start = 1;
    int end = 10;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (possible(mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    cout << ans;
    return 0;
}