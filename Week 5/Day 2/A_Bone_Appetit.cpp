#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    x = x * n;
    y = y * m;
    x = x + y;
    cout << x << endl;
    return 0;
}