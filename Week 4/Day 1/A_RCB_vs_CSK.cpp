#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int ck, rb;
    cin >> rb >> ck;
    if ((rb - ck) < 18)
    {
        cout << "CSK" << endl;
    }
    else
    {
        cout << "RCB" << endl;
    }

    return 0;
}