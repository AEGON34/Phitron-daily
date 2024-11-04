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
        int a, b, minn = INT_MAX, c = 0;
        cin >> a >> b;
        for (int i = a; i <= b; i++)
        {
            c = (i - a) + (b - i);
            if (minn > c)
            {
                minn = c;
            }
        }
        cout << minn << endl;
    }
    return 0;
}