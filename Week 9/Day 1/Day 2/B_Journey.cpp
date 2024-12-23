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
        long long n, a, b, c;
        cin >> n >> a >> b >> c;
        vector<long long> dl = {a, b, c};
        long long sum = a + b + c;
        long long ld = n / sum;
        long long day = ld * 3;
        long long cover = ld * sum;
        for (int i = 0; i < 3; i++)
        {
            if (cover >= n)
            {
                break;
            }
            cover += dl[i];
            day++;
        }

        cout << day << endl;
    }

    return 0;
}