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
        vector<int> a(n);
        vector<int> b(n);
        int m = 0, s = 0, df;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (i + 1 < n && (a[i] > b[i + 1]))
            {
                m += a[i];
                s += b[i + 1];
            }
        }
        m += a[n - 1];
        df = m - s;
        cout << df << endl;
    }
    return 0;
}