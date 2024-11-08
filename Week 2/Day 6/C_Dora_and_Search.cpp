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
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        int mn = 1;
        int mx = n;
        int l = 0, r = n - 1;
        bool flag = false;

        while (mn < mx)
        {

            if ((ar[l] == mn || ar[r] == mx) || (ar[l] == mx || ar[r] == mn))
            {
                if (ar[l] == mn)
                    l++, mn++;
                else if (ar[r] == mx)
                    r--, mx--;
                else if (ar[l] == mx)
                    l++, mx--;
                else if (ar[r] == mn)
                    r--, mn++;
            }
            else
            {
                flag = true;
                break;
            }
        }

        if (flag)
        {
            cout << l + 1 << " " << r + 1 << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}
