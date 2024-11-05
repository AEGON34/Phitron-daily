#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, s1;
    cin >> s >> s1;
    int su = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != s1[i])
        {

            su++;
        }
    }
    cout << su << endl;
    return 0;
}