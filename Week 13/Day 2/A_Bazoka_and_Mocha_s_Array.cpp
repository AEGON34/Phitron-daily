#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long arr[n + 10], i;
        for (i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        long long min1 = arr[1], index = n + 1;
        vector<long long> v;
        v.push_back(arr[1]);
        for (i = 2; i <= n; i++)
        {
            if (min1 <= arr[i])
            {
                min1 = arr[i];
                v.push_back(min1);
            }
            else
            {
                index = i;
                break;
            }
        }
        vector<long long> ans;
        for (i = index; i <= n; i++)
        {
            ans.push_back(arr[i]);
        }
        for (int i = 0; i < v.size(); i++)
        {
            ans.push_back(v[i]);
        }
        if (is_sorted(ans.begin(), ans.end()))
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