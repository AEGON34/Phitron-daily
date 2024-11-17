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
        int arr[n] = {0};
        int su = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
                continue;
            for (int j = i + 1; j < n; j++)
            {
                if ((ar[i] == ar[j]) && arr[j] == 0)
                {
                    arr[i] = 1;
                    arr[j] = 1;
                    su++;
                    break;
                }
            }
        }
        cout << su << endl;
    }
    return 0;
}