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
        long long n, a, b, k = INT_MAX;
        cin >> n;
        vector<pair<long long, long long>> v;
        for (long long i = 0; i < n; i++)
        {
            cin >> a >> b;
            v.push_back({a, b});
        }
        for (long long i = 0; i < v.size(); i++)
        {
            k = min(v[i].first + (v[i].second - 1) / 2, k);
        }
        cout << k << endl;
    }
    return 0;
}