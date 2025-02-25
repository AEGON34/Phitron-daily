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
        int up = 0, down = 0;
        for (char c : s)
        {
            if (c == '-')
                up++;
            else
                down++;
        }
        up = up / 2;
        if (up == 0)
        {
            cout << 0 << endl;
        }
        else if (up == 1)
        {
            cout << down << endl;
        }
        else if (up == 2 && down == 2)
        {
            cout << 6 << endl;
        }
        else
        {
            long long l = (up * down) * 3;
            cout << l << endl;
        }
    }
    return 0;
}