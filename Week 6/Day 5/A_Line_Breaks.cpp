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
        int n, l;
        cin >> n >> l;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int clen = 0;
        int co = 0;
        for (int i = 0; i < n; i++)
        {
            int wor = v[i].length();
            if (clen + wor > l)
            {
                break;
            }
            clen += wor;
            co++;
        }
        cout << co << endl;
    }
    return 0;
}