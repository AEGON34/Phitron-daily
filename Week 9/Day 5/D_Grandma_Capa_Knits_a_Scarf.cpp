#include <bits/stdc++.h>
#define fl(i, n) for (int i = 0; i < n; i++)
#define vr(v) v.begin(), v.end()
using namespace std;

void asquare()
{
    long long n;
    cin >> n;
    string str;
    cin >> str;
    set<char> st;
    fl(i, n)
    {
        st.insert(str[i]);
    }
    vector<long long> ans(26, LLONG_MAX);
    for (auto &a : st)
    {
        int low = 0;
        int high = n - 1;
        long long c = 0;
        while (low < high)
        {
            if (str[low] == str[high])
            {
                low++;
                high--;
            }
            else
            {
                if (str[low] == a)
                {
                    low++;
                    c++;
                }
                else if (str[high] == a)
                {
                    high--;
                    c++;
                }
                else
                {
                    c = -1;
                    break;
                }
            }
        }
        if (c != -1)
            ans[a - 'a'] = c;
    }
    sort(vr(ans));
    if (ans[0] == LLONG_MAX)
        cout << "-1\n";
    else
        cout << ans[0] << "\n";
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        asquare();
    }
    return 0;
}