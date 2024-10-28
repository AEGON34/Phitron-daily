#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l = INT_MAX, r = INT_MIN, su = 0;
        cin >> n;
        char nn[n];
        bool nd[n] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> nn[i];
            if (nn[i] == 'B')
            {
                nd[i] = 1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (nd[i] == 1)
            {
                if (l > i)
                {
                    l = i;
                }
                else if (r < i)
                {
                    r = i;
                }
            }
        }
        for (int i = l; i <= r; i++)
        {
            su += 1;
        }
        if (su == 0)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << su << endl;
        }
    }
    return 0;
}