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
        vector<long long> ar(n), arr(n);
        long long sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            sum1 += ar[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum2 += arr[i];
        }
        if (sum1 > sum2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}