#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (mp.count(s) == 0)
        {
            mp[s] = 1;
            cout << "OK" << endl;
        }
        else
        {
            int su = mp[s];
            string newone;
            while (true)
            {
                newone = s + to_string(su);
                if (mp.count(newone) == 0)
                {
                    break;
                }
                su++;
            }
            mp[newone] = 1;
            mp[s] = su + 1;
            cout << newone << endl;
        }
    }
    return 0;
}