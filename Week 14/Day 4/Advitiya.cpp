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
        int sum = 0;
        string sd = "ADVITIYA";
        for (int i = 0; i < 8; i++)
        {
            int cr = s[i] - 'A';
            int tr = sd[i] - 'A';
            int dff = (tr - cr + 26) % 26;
            sum += dff;
        }
        cout << sum << endl;
    }
    return 0;
}