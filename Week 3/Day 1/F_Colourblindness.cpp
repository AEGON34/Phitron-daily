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
        char ar[2][n];
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> ar[i][j];
            }
        }
        bool flag = false;
        for (int i = 0; i < 1; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (ar[i][j] == 'R')
                {
                    if (ar[i + 1][j] != 'R')
                    {
                        flag = true;
                        break;
                    }
                }
                else if (ar[i][j] == 'B' || ar[i][j] == 'G')
                {
                    if (ar[i + 1][j] != 'G' && ar[i + 1][j] != 'B')
                    {
                        flag = true;
                        break;
                    }
                }
            }
        }
        if (flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}