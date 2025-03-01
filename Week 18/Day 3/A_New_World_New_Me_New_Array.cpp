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
        int n, k, p;
        cin >> n >> k >> p;
        int d = k;
        if (k < 0)
        {
            d = k * -1;
        }
        int l = d / p;
        int ll = d - (l * p);
        int ans = l;
        if (ll > 0)
            l += 1;
        if (l > n)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << l << endl;
        }
    }
    return 0;
}