#include <bits/stdc++.h>
using namespace std;
bool isit(string &s, int n, int k)
{
    unordered_map<char, int> mp;
    for (char ch : s)
    {
        mp[ch]++;
    }
    int od = 0;
    for (unordered_map<char, int>::iterator it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second % 2 != 0)
        {
            od++;
        }
    }
    int rem = n - k;
    if (rem % 2 == 0)
    {
        return od <= k;
    }
    else
    {
        return od - 1 <= k;
    }
}
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
        string s;
        cin >> s;
        if (isit(s, n, k))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}