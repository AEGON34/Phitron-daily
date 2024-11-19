#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, s;
    cin >> n >> s;
    vector<int> ar(n);
    long long sum = 0, ans = 0, l = 0, r = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        sum += ar[r];
        if (sum <= s)
        {
            ans = max(ans, r - l + 1);
        }
        else
        {
            sum -= ar[l];
            l++;
        }
        r++;
    }
    cout << ans << endl;
    return 0;
}