#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int l = abs(a - b);
    int ll = abs(c - d);
    if (l < ll)
    {
        cout << "First" << endl;
    }
    else if (l == ll)
    {
        cout << "Both" << endl;
    }
    else
    {
        cout << "Second" << endl;
    }
    return 0;
}