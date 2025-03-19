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
        int n, k;
        cin >> n >> k;
        int arr[101] = {0};
        int pos = 1;
        for (int i = 0; i < k; i++)
        {
            int indc[102];
            int count = 0;
            for (int j = 1; j <= n; j++)
            {
                if (j % k == i)
                {
                    indc[count++] = j;
                }
            }
            if (count == 1)
            {
                pos = 0;
                break;
            }
            for (int kl = 0; kl < count; kl++)
            {
                int po = indc[kl];
                int value = indc[(kl + 1) % count];
                arr[po] = value;
            }
        }
        if (!pos)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}