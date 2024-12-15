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
        long long m, a, b, c;
        cin >> m >> a >> b >> c;
        long long d = 2 * m;
        long long sit = 0;
        int f, s;
        f = m - a;
        s = m - b;

        if (f > 0)
        {
            sit += a;
            d -= a;
        }
        else
        {
            sit += m;
            f = 0;
            d -= m;
        }
        if (s > 0)
        {
            sit += b;
            d -= b;
        }
        else
        {
            sit += m;
            s = 0;
            d -= m;
        }
        if (d > 0)
        {
            if (d >= c)
            {
                sit += c;
            }
            else
            {
                sit += d;
            }
        }
        cout << sit << endl;
    }
    return 0;
}