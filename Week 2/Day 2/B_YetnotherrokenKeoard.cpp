#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        map<ll, char> ma;
        ll n, in;
        string s;
        cin >> s;
        n = (ll)s.size();
        stack<ll> upper, lower;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                if (!upper.empty())
                {
                    in = upper.top();
                    ma[in] = '$';
                    upper.pop();
                }
                continue;
            }
            if (s[i] == 'b')
            {
                if (!lower.empty())
                {
                    in = lower.top();
                    ma[in] = '$';
                    lower.pop();
                }
                continue;
            }
            ma[i] = s[i];
            if (isupper(s[i]))
            {
                upper.push(i);
            }
            else
            {
                lower.push(i);
            }
        }
        for (ll i = 0; i < n; i++)
        {
            if (ma.count(i) && ma[i] != '$')
            {
                cout << ma[i];
            }
        }
        cout << endl;
    }
    return 0;
}