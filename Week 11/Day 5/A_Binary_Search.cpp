#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, k;
    cin >> n >> k;
    vector<long long> fs(n);
    for (long long i = 0; i < n; i++)
        cin >> fs[i];
    for (long long i = 0; i < k; i++)
    {
        long long key;
        cin >> key;
        long long l = 0;
        long long r = n - 1;
        long long mid;
        bool flag = false;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (fs[mid] == key)
            {
                flag = true;
                break;
            }
            if (key < fs[mid])
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (flag)
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