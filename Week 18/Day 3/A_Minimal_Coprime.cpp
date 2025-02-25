#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y;
        cin >> x >> y;
        if (x == 1 && y == 1)
            cout << 1 << endl;
        else
        {
            int l = y - x;
            cout << l << endl;
        }
    }
    return 0;
}