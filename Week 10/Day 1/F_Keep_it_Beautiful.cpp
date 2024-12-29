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
        int dl = 0;
        int ld = 0, ct = 0;
        int l = 0;
        vector<int> ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (i == 0)
            {
                cout << "1";
                dl = ar[i];
                ct++;
            }
            else if (ar[i] >= dl && ld == 0)
            {
                cout << "1";
                dl = ar[i];
                ct++;
            }
            else if (ar[i] < dl && ld == 0)
            {
                cout << "1";
                ld = 1;
                dl = ar[i];
                ct++;
            }
            else if (ar[i] < dl && ld == 1 && ar[l] == ar[i])
            {
                cout << "1";
                l++;
            }
            else
            {
                cout << "0";
                l++;
            }
        }
        cout << endl;
    }
    return 0;
}