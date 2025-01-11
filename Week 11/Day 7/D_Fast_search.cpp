#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    sort(ar.begin(), ar.end());
    int k;
    cin >> k;
    while (k--)
    {
        int ll, rr;
        cin >> ll >> rr;

        int lower = lower_bound(ar.begin(), ar.end(), ll) - ar.begin();
        int upper = upper_bound(ar.begin(), ar.end(), rr) - ar.begin();

        cout << (upper - lower) << " ";

        return 0;
    }
