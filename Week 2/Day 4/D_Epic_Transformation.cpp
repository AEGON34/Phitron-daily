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
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        priority_queue<int> p;

        for (map<int, int>::iterator rr = mp.begin(); rr != mp.end(); rr++)
        {
            int l = rr->second;
            p.push(l);
        }
        while (!p.empty())
        {
            if (p.size() < 2)
            {
                break;
            }
            int x, y;
            x = p.top();
            p.pop();
            y = p.top();
            p.pop();
            x--;
            y--;
            if (x >= 1)
            {
                p.push(x);
            }
            if (y >= 1)
            {
                p.push(y);
            }
        }
        int ans = 0;
        while (!p.empty())
        {
            ans += p.top();
            p.pop();
        }
        cout << ans << endl;
    }
    return 0;
}