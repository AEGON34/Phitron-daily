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
        int n, sum = 0;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (i % 2 == 0)
            {
                sum += ar[i];
            }
            else
            {
                sum -= ar[i];
            }
        }
        cout << sum << endl;
    }

    return 0;
}