#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    map<string, string> ans, has;
    for (int i = 1; i <= n; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        if (has.find(s1) != has.end())
        {
            string s = has[s1];
            ans[s] = s2;
            has.erase(s1);
            has[s2] = s;
        }
        else
        {
            ans[s1] = s2;
            has[s2] = s1;
        }
    }
    cout << ans.size() << endl;

    for (map<string, string>::iterator it = ans.begin(); it != ans.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}