#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n, k;
        cin >> n >> k;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (is_sorted(a, a + n))
            cout << 0 << '\n';
        else
        {
            int c = 0;
            for (int i = 0; i < n; i++)
            {
                int tmp = abs(a[i] - (i + 1));
                if (tmp % k)
                    c++;
            }
            if (c > 2)
                cout << -1 << '\n';
            else if (c == 2)
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        }
    }

    return 0;
}