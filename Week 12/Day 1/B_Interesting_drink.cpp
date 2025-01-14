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
    int q;
    cin >> q;
    sort(ar.begin(), ar.end());
    while (q--)
    {
        int k;
        cin >> k;
        if (k < ar[0])
        {
            cout << 0 << endl;
        }
        else
        {
            auto it = upper_bound(ar.begin(), ar.end(), k);

            int ans = (it - ar.begin());
            cout << ans << endl;
        }
    }
    return 0;
}