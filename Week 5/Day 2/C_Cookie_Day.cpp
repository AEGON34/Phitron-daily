#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> v(n);
        long long min_waste = LLONG_MAX; // Track minimum wastage
        bool possible = false;           // Check if any jar has >= k cookies

        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] >= k) // Only consider jars with at least k cookies
            {
                possible = true;
                min_waste = min(min_waste, v[i] % k); // Wastage is the remainder
            }
        }

        if (!possible)
            cout << "-1\n";
        else
            cout << min_waste << "\n";
    }
    return 0;
}
