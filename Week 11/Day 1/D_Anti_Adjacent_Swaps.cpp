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
        vector<int> ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 1; j < n; j++)
            {
                if (j - i > 1)
                {
                    if (ar[i] > ar[j])
                    {
                        swap(ar[i], ar[j]);
                    }
                }
            }
        }
        bool flag = true;
        for (int i = 1; i < n; i++)
        {
            if (ar[i - 1] > ar[i])
            {
                flag = false;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}