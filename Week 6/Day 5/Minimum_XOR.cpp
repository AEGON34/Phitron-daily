#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, XOR = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        XOR ^= a[i];
        cout << XOR << " ";
    }
    cout << endl;
    sort(a.begin(), a.end());
    int ans = XOR;
    for (int i = 0; i < n; i++)
    {
        int curxor = (XOR ^ a[i]);
        cout << curxor << endl;
        ans = min(ans, curxor);
        cout << ans << endl;
    }
    return 0;
}