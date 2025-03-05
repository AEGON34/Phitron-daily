#include <bits/stdc++.h>
using namespace std;

bool cc(vector<long long> &a)
{
    int n = a.size();
    if (n == 0)
        return true;
    long long total_sum = 0;
    for (long long water : a)
    {
        total_sum += water;
    }
    if (total_sum % n != 0)
        return false;
    long long target = total_sum / n;
    long long running_sum = 0;
    for (int i = 0; i < n; i++)
    {
        running_sum += a[i];
        if (running_sum < (i + 1) * target)
        {
            return false;
        }
    }

    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> test1(n);
        for (int i = 0; i < n; i++)
        {
            cin >> test1[i];
        }

        cout << (cc(test1) ? "YES" : "NO") << endl;
    }

    return 0;
}