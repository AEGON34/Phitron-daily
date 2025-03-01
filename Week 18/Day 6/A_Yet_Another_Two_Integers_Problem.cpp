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
        long long a, b;
        cin >> a >> b;
        if (a > b)
        {
            long long l = a - b;
            long long ans = 0;
            long long d = l / 10;
            long long dl = d * 10;
            if (dl == l)
                ans = d;
            else
                ans = d + 1;
            cout << ans << endl;
        }
        else if (a < b)
        {
            long long l = b - a;
            long long ans = 0;
            long long d = l / 10;
            long long dl = d * 10;
            if (dl == l)
                ans = d;
            else
                ans = d + 1;
            cout << ans << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}