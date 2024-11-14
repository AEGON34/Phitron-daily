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
        char a;
        string s;
        cin >> n >> a >> s;
        vector<int> green;
        s += s;
        for (int i = 0; i < 2 * n; i++)
        {
            if (s[i] == 'g')
            {
                green.push_back(i);
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == a)
            {
                int lb = lower_bound(green.begin(), green.end(), i) - green.begin();
                ans = max(ans, green[lb] - i);
            }
        }
        cout << ans << endl;
    }
    return 0;
}