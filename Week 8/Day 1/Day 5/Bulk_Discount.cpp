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
        cin >> n;
        long long sum = 0;
        vector<long long> ar(n);
        int ld = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        sort(ar.begin(), ar.end());
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                sum += ar[i];
            }
            else
            {
                int d = ar[i] - ld;
                if (d > 0)
                {
                    sum += d;
                }
                ld++;
            }
        }
        cout << sum << endl;
    }
    return 0;
}