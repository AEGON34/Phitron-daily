#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string l = s;
        for (int i = 0; i < n; i++)
        {
            l[i] = 'z';
        }
        if (l > s)
        {
            cout << l << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}