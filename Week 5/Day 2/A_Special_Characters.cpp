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
        int n;
        cin >> n;
        if (n % 2)
        {
            cout << "NO" << endl;
            return 0;
        }
        cout << "YES" << endl;
        int d = n / 2;
        for (int i = 1; i <= d; i++)
        {
            if (i % 2 == 0)
            {
                cout << "AA";
            }
            else
            {
                cout << "BB";
            }
        }
        cout << endl;
    }
    return 0;
}