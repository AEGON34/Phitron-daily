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
        long long n, m;
        cin >> n >> m;
        vector<long long> seq;
        seq.push_back(n);
        long long power = 0;
        while ((1LL << power) <= m)
        {
            if (!((n >> power) & 1))
            {
                long long cand = n + (1LL << power);
                if (cand <= m)
                {
                    seq.push_back(cand);
                }
            }
            power++;
        }

        if (seq.size() < 2)
        {
            cout << -1 << endl;
        }
        else
        {
            sort(seq.begin(), seq.end(), greater<long long>());
            cout << seq.size() << endl;
            for (auto x : seq)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }
    return 0;
}