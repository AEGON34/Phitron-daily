#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int te;
    cin >> te;
    while (te--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &x : v)
        {
            cin >> x;
        }
        sort(v.begin(), v.end());
        int mid = ((n + 1) / 2) - 1;
        int count = 0;
        for (int i = mid; i < n; i++)
        {
            if (v[i] == v[mid])
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}