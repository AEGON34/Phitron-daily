#include <iostream>
#include <cstdlib> // for abs()
using namespace std;

int minTimeToDifference(int x, int y, int k)
{
    // Current difference
    int curr_diff = abs(x - y);

    // If current difference is already k
    if (curr_diff == k)
    {
        return 0;
    }

    // Total stones remain constant
    int total = x + y;

    // If k > total stones, it's impossible
    if (k > total)
    {
        return -1;
    }

    // If both k and total have different parity, it's impossible
    // Because each move changes difference by 2
    if ((k % 2) != (curr_diff % 2))
    {
        return -1;
    }

    // If current difference is less than k
    if (curr_diff < k)
    {
        return (k - curr_diff) / 2;
    }

    // If current difference is more than k
    return (curr_diff - k) / 2;
}

int main()
{
    int t; // number of test cases
    cin >> t;

    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        cout << minTimeToDifference(x, y, k) << endl;
    }

    return 0;
}