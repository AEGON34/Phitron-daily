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
        int k;
        cin >> k;
        vector<int> v(k);
        unordered_map<int, int> freq;

        for (int i = 0; i < k; i++)
        {
            cin >> v[i];
            freq[v[i]]++;
        }

        int min_freq = INT_MAX; // Track the minimum frequency of elements
        for (int i = 1; i <= k; i++)
        {
            if (freq[i] > 0) // Only consider elements that exist in the array
            {
                min_freq = min(min_freq, freq[i]);
            }
        }

        // Output the smallest frequency
        cout << min_freq << endl;
    }
    return 0;
}
