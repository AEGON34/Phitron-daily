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
        long long a, b, k;
        cin >> a >> b >> k;
        long long sum = 0;
        if (k % 2 == 0)
        {
            long long d = k / 2;
            long long ld = a * d;
            long long ld2 = b * d;
            sum += ld;
            sum -= ld2;
        }
        else
        {
            long long d = (k / 2);
            long long ld = (d + 1) * a;
            long long ld2 = b * d;
            sum += ld;
            sum -= ld2;
        }
        cout << sum << endl;
    }
    return 0;
}