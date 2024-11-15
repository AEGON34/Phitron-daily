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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int r = 0;
        for (int i = 0; i < k; i++)
        {
            if (s[i] == 'W')
                r++;
        }
        int ans = r;
        for (int i = k; i < n; i++)
        {
            if (s[i] == 'W')
            {
                r++;
            }
            if (s[i - k] == 'W')
            {
                r--;
            }
            ans = min(ans, r);
        }
        cout << ans << endl;
    }
    return 0;
}