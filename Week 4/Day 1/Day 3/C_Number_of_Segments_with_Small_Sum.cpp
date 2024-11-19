#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, k;
    cin >> n >> k;
    vector<long long> ar(n);
    long long sum = 0, l = 0, r = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        sum += ar[r];
        if (sum <= k)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (sum > k)
            {
                sum -= ar[l];
                l++;
            }
            if (sum <= k)
            {
                ans += (r - l + 1);
            }
        }
        r++;
    }
    cout << ans << endl;
    return 0;
}