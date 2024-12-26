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
        int n;
        cin >> n;
        vector<long long> a(n);
        vector<long long> b(n);
        long long mx1 = LLONG_MIN;
        long long mx2 = LLONG_MIN;
        long long mn1 = LLONG_MAX;
        long long mn2 = LLONG_MAX;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mx1 = max(mx1, a[i]);
            mn1 = min(mn1, a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            mx2 = max(mx2, b[i]);
            mn2 = min(mn2, b[i]);
        }
        long long ml = mx1 - mx2;
        if (mx1 < mx2 || mn1 - ml > mn2)
        {
            cout << "NO" << endl;
        }

        else
        {
            bool flag = true;
            for (int i = 0; i < n; i++)
            {
                if (a[i] - ml != b[i] && b[i] != 0)
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
