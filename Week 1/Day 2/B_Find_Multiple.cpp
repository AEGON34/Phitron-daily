#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;
    cin >> a >> b >> c;

    int d = (a + c - 1) / c * c;

    if (d >= a && d <= b)
    {
        cout << d << endl;
    }
    else
    {
        cout << "-1" << endl;
    }

    return 0;
}
