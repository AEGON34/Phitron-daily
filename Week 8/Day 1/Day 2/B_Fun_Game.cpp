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
        string s1, s2;
        cin >> s1 >> s2;
        if (s1 == s2)
        {
            cout << "YES" << endl;
            continue;
        }
        int pos = -1;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] == '1')
            {
                pos = i;
                break;
            }
        }
        if (pos != -1)
        {
            bool ok = true;
            for (int i = 0; i < n; i++)
            {

                if (s1[i] != s2[i])
                {
                    if (pos > i)
                    {
                        ok = false;
                        break;
                    }
                }
            }
            if (ok)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}