#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int remaining, z = 0, flag = 0;
    for (int i = 0; i < n; i++)
    {
        remaining = a[i] - b[i];
        if (remaining == 0)
            z++;
        if (remaining > 1)
            flag = 1;
    }
    if (flag)
        cout << n + 1 - z;
    else
        cout << -1;
    return 0;
}