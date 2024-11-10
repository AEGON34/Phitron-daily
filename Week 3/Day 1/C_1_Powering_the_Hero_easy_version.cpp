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
        priority_queue<long long> pq;
        long long army = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x > 0)
            {
                pq.push(x);
            }
            else if (x == 0)
            {
                if (!pq.empty())
                {
                    int l = pq.top();
                    army += l;
                    pq.pop();
                }
            }
        }
        cout << army << endl;
    }
    return 0;
}