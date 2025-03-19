#include <bits/stdc++.h>
using namespace std;
void smallestpp(int X, int Y)
{
    string fh = "";

    for (int i = 0; i < Y / 2; i++)
        fh += '2';
    for (int i = 0; i < X / 2; i++)
        fh += '1';
    for (int i = 0; i < X / 2; i++)
        fh += '1';
    for (int i = 0; i < Y / 2; i++)
        fh += '2';

    cout << fh << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int X, Y;
        cin >> X >> Y;
        smallestpp(X, Y);
    }
    return 0;
}
