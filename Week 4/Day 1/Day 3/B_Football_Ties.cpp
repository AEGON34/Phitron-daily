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
        int a, b, c, d, e;
        cin >> a >> b;
        c = a / 3;
        d = b / 3;
        e = abs(((c + d) * 3) - (a + b));
        e = e / 2;
        cout << e << endl;
    }

    return 0;
}