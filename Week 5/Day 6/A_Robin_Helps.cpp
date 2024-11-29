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
        int n, k, sum = 0, ct = 0;
        cin >> n >> k;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (ar[i] >= k)
            {
                sum += ar[i];
            }
            else if (ar[i] == 0 && sum > 0)
            {

                ct++;
                sum--;
            }
        }
        cout << ct << endl;
    }
    return 0;
}