#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, su = 0;
    cin >> n >> m;
    su = (n - m) - 1;
    if (su > 0)
        cout << "0" << endl;
    else
        cout << su * -1 << endl;

    return 0;
}