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
        int n, m, o, mx1 = 0, mx2 = 0, mx3 = 0, rp = 0;
        cin >> n >> m >> o;
        mx1 = m * n;
        int l = n / 2;
        mx2 = l * o;
        if (n % 2 > 0)
        {
            int d = n % 2;

            mx2 = mx2 + m;
        }
        mx3 = max(mx1, mx2);
        cout << mx3 << endl;
    }

    return 0;
}