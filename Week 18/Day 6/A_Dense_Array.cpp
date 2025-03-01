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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int in = 0;
        for (int i = 0; i < n - 1; i++)
        {
            double ratio = (double)max(a[i], a[i + 1]) / min(a[i], a[i + 1]);
            if (ratio > 2)
            {
                int x = max(a[i], a[i + 1]);
                int y = min(a[i], a[i + 1]);
                int step = 0;
                while (x > y * 2)
                {
                    y = y * 2;
                    step++;
                }
                in += step;
            }
        }
        cout << in << endl;
    }
    return 0;
}