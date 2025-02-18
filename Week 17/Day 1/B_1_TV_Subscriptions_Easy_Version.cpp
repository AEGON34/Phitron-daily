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
        int n, k, d;
        cin >> n >> k >> d;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        unordered_map<int, int> freq;
        int ll = 0;
        int hh = k;
        for (int i = 0; i < n; i++)
        {
            if (freq[a[i]] == 0)
            {
                ll++;
            }
            freq[a[i]]++;
            if (i >= d - 1)
            {
                hh = min(hh, ll);
                freq[a[i - d + 1]]--;
                if (freq[a[i - d + 1]] == 0)
                {
                    ll--;
                }
            }
        }

        cout << hh << endl;
    }

    return 0;
}