#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, x, y, z;
    cin >> x >> y >> z;
    a = abs((y * z) - x);
    if ((y * z) > x)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << a << endl;
    }
    return 0;
}