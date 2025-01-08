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
        long long n;
        cin >> n;
        string s;
        cin >> s;
        long long freq[4] = {0};
        for (auto i : s)
        {
            if (i != '?')
            {
                freq[i - 'A']++;
            }
        }
        long long ans = 0;
        for (long long i = 0; i < 4; i++)
        {
            ans += min(n, freq[i]);
        }
        cout << ans << endl;
    }

    return 0;
}