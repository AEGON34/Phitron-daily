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
        int a, b;
        cin >> a >> b;
        int res;
        if (a == b)
        {
            res = a + b;
        }
        else
        {
            int ml = (a > b) ? a : b;
            res = 2 * ml - 1;
        }
        cout << res << endl;
    }
    return 0;
}