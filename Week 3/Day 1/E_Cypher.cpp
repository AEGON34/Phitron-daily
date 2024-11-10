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
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        for (int i = 0; i < n; i++)
        {
            int d;
            cin >> d;
            string s;
            cin >> s;
            for (int j = 0; j < d; j++)
            {
                if (s[j] == 'D')
                {
                    if (ar[i] == 9)
                    {
                        ar[i] = 0;
                    }
                    else
                    {
                        ar[i]++;
                    }
                }
                else
                {
                    if (ar[i] == 0)
                    {
                        ar[i] = 9;
                    }
                    else
                    {
                        ar[i]--;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << ar[i] << " ";
        }
        cout << endl;
    }
    return 0;
}