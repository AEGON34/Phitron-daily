#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;
    cin >> a >> b >> c;

    // Find the smallest multiple of c that is greater than or equal to a
    int d = (a + c - 1) / c * c;

    // Check if this multiple is within the range [a, b]
    if (d >= a && d <= b)
    {
        cout << d << endl;
    }
    else
    {
        cout << "-1" << endl;
    }

    return 0;
}
