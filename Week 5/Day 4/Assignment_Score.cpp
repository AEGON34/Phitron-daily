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
        int n, m;
        cin >> n;
        m = ((n + 1) * 100) / 2;
        vector<int> v(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        int l = m - sum;
        if (l < 0)
        {
            cout << "0" << endl;
        }
        else if (l <= 100 && l >= 0)
        {
            cout << l << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}