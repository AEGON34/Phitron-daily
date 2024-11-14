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
        int n, m;
        cin >> n >> m;
        string s1;
        cin >> s1;
        set<int> st;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            st.insert(x);
        }
        string up;
        cin >> up;
        sort(up.begin(), up.end());
        int d = 0;
        for (auto it : st)
        {
            s1[it - 1] = up[d];
            d++;
        }
        cout << s1 << endl;
    }
    return 0;
}