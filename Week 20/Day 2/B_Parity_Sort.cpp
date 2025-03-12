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
        vector<long long> ar(n);
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        vector<long long> sorted = ar;
        sort(sorted.begin(), sorted.end());
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if ((ar[i] % 2) != (sorted[i] % 2))
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}