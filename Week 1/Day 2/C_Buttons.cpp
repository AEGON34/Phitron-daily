#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, su1 = 0, su2 = 0, su3 = 0;
    cin >> a >> b;
    su1 = a + b;
    su2 = a + (a - 1);
    su3 = b + (b - 1);
    if (su1 >= su2 && su1 >= su3)
    {
        cout << su1 << endl;
    }
    else if (su2 >= su1 && su2 >= su3)
    {
        cout << su2 << endl;
    }
    else if (su3 >= su1 && su3 >= su2)
    {
        cout << su3 << endl;
    }
    return 0;
}