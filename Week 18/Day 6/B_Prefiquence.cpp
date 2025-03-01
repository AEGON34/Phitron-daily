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
        int n, k;
        cin >> n >> k;
        string s1, s2;
        cin >> s1 >> s2;
        int ct = 0, id = 0;
        for (int i = 0; i < s2.size(); i++)
        {
            if (s1[id] == s2[i])
            {
                ct++;
                id++;
            }
        }
        cout << ct << endl;
    }
    return 0;
}