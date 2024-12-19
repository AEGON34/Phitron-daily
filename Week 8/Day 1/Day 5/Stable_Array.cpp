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
        vector<int> ar(n);
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (i - 1 < 0)
            {
                break;
            }
            if (ar[i] > ar[i - 1])
            {
                ar[i - 1] = ar[i];
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}