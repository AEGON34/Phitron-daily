#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int mn = 2000;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                int l = 2 * (j + i);
                int dd = abs(k - l);
                if (dd < mn)
                {
                    mn = dd;
                }
            }
        }
        cout << mn << endl;
    }
}
