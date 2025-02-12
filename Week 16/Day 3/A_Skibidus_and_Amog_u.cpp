#include <bits/stdc++.h>
using namespace std;
string replace_word(string k)
{
    int len = k.length();
    if (len >= 2)
    {
        if (k[len - 2] == 'u' && k[len - 1] == 's')
        {
            k[len - 2] = 'i';
            k.pop_back();
        }
    }
    else if (k[len - 1] == 'i')
    {
        k[len - 1] = 'u';
        k += 's';
    }
    if (len == 1 && k[0] == 'i')
    {
        k[0] = 'u';
        k += 's';
    }
    return k;
}
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
        cout << replace_word(s) << endl;
    }
    return 0;
}