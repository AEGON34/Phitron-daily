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
        int n, a, b;
        cin >> n >> a >> b;
        int sum = 0;
        if ((2 * a) <= b)
        {
            sum = n * a;
        }
        else if ((2 * a) > b)
        {
            if (n % 2 == 0)
            {
                sum = (n / 2) * b;
            }
            else
            {
                sum = (n / 2) * b + a;
            }
        }
        cout << sum << endl;
    }
    return 0;
}