#include <bits/stdc++.h>
using namespace std;

bool sign(int num)
{
    return num > 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        long long ans = 0; // Changed to long long to handle larger sums
        for (int i = 0; i < n;)
        { // Removed i++ from for loop
            int j = i;
            int mx = ar[i];
            // Continue while we're within bounds and signs match with first element
            while (j < n && sign(ar[i]) == sign(ar[j]))
            {
                mx = max(mx, ar[j]);
                j++;
            }
            ans += mx;
            i = j; // Move i to the next segment
        }
        cout << ans << endl;
    }

    return 0;
}