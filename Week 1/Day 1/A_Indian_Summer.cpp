#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    map<pair<string, string>, int> mapp;
    string s1, s2;
    for (int i = 0; i < n; i++)
    {
        cin >> s1 >> s2;
        mapp[{s1, s2}] = 1;
    }
    cout << mapp.size() << endl;
    return 0;
}