#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, s;
    cin >> n >> s;
    vector<long long> ar(n);

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    long long sum = 0;
    int ans = n + 1; // Set ans to a very large value (impossible segment length)
    int l = 0;

    for (int r = 0; r < n; r++)
    {
        sum += ar[r];

        while (sum >= s)
        {
            ans = min(ans, r - l + 1); // Update ans with the current segment length
            sum -= ar[l];
            l++;
        }
    }

    if (ans == n + 1)
    {
        cout << "-1\n"; // No valid segment found
    }
    else
    {
        cout << ans << "\n"; // Output the shortest valid segment length
    }

    return 0;
}
