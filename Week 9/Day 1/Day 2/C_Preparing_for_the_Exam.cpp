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
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> lst(m);
        vector<int> knows(k);
        vector<char> s;
        for (int i = 0; i < m; i++)
        {
            cin >> lst[i];
        }
        for (int i = 0; i < k; i++)
        {
            cin >> knows[i];
        }
        unordered_set<int> kn(knows.begin(), knows.end());
        for (int i = 1; i <= m; i++)
        {
            bool pass = true;
            for (int j = 1; j <= n; j++)
            {
                if (j != i && kn.find(j) == kn.end())
                {
                    pass = false;
                    break;
                }
            }
            s.push_back(pass ? '1' : '0');
        }

        for (char c : s)
        {
            cout << c;
        }
        cout << endl;
    }
    return 0;
}