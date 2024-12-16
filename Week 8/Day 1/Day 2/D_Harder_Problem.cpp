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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<int> freq(n + 2, 0);
        vector<int> b(n, 0);
        int max_freq = 0;
        int next_new = 0;
        for (int i = 0; i < n; i++)
        {
            int needed = a[i];
            if (i == 0)
            {
                b[i] = needed;
                freq[needed]++;
                max_freq = 1;
            }
            else
            {
                if (freq[needed] < max_freq)
                {
                    b[i] = needed;
                    freq[needed]++;
                    max_freq = max(max_freq, freq[needed]);
                }
                else
                {
                    if (max_freq == 0)
                    {
                        b[i] = needed;
                        freq[needed]++;
                        max_freq = 1;
                    }
                    else
                    {
                        while (next_new <= n && (freq[next_new] != 0 || next_new == needed))
                        {
                            next_new++;
                        }
                        if (next_new <= n && freq[next_new] < max_freq)
                        {
                            b[i] = next_new;
                            freq[next_new]++;
                        }
                        else
                        {
                            b[i] = needed;
                            freq[needed]++;
                            max_freq = max(max_freq, freq[needed]);
                        }
                    }
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}