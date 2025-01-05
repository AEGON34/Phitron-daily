#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, k;
    cin >> n >> k;
    cout << "YES" << endl;
    for (int i = n; i < k + 1; i += 2)
    {
        cout << i << " " << i + 1 << endl;
    }
    return 0;
}