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
        string s;
        cin >> s;
        int ct = 0;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.')
                ct++;
            if (i > 0 && i < n - 1)
            {
                if (s[i - 1] == '.' && s[i] == '.' && s[i + 1] == '.')
                {
                    cout << "2" << endl;
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
        {
            cout << ct << endl;
        }
    }
    return 0;
}