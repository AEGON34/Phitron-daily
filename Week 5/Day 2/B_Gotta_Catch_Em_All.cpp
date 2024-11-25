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
        int n, x, y;
        cin >> n >> x >> y;
        int ans = 0, sum = 0;
        int nibo = 0;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            ans = v[i] * x;
            nibo = min(ans, y);
            sum += nibo;
        }
        cout << sum << endl;
    }
    return 0;
}