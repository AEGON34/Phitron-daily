#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int ar[3] = {1, 2, 3};
    int ir[3] = {4, 5, 6};
    int lr[6];
    lr = ar + ir;
    for (int d : lr)
    {
        cout << d << endl;
    }

    return 0;
}