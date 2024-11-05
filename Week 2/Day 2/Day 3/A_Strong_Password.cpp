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
        string s;
        cin >> s;
        bool d = true;
        for (int i = 0; i < s.size() - 1; i++)
        {
            cout << s[i];
            if (s[i + 1] == s[i] && d)
            {
                d = false;
                if (s[i] == 'a')
                {
                    cout << "b";
                }
                else
                {
                    cout << "a";
                }
            }
        }
        cout << s[s.size() - 1];
        if (d)
        {
            if (s[s.size() - 1] == 'a')
            {
                cout << "b";
            }
            else
            {
                cout << "a";
            }
        }
        cout << endl;
    }
    return 0;
}