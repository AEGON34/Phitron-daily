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
        vector<int> A(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> A[i];
        }

        sort(A.begin(), A.end());

        int min_range = A[n - 1] - A[0];

        if (n > 1)
        {
            min_range = min(min_range, A[n - 2] - A[0]);

            min_range = min(min_range, A[n - 1] - A[1]);
        }

        if (n > 2)
        {
            min_range = min(min_range, A[n - 3] - A[0]);
            min_range = min(min_range, A[n - 1] - A[2]);
        }

        cout << min_range << endl;
    }

    return 0;
}