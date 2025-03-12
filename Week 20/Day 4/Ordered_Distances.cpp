#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        vector<int> X(n), Y(n);
        for (int i = 0; i < n; i++)
        {
            cin >> X[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> Y[i];
        }

        int valid_pivot = -1;
        for (int pivot_idx = 0; pivot_idx < n; pivot_idx++)
        {
            int pivot = X[pivot_idx];
            vector<int> indices(n);
            for (int i = 0; i < n; i++)
            {
                indices[i] = i;
            }
            sort(indices.begin(), indices.end(), [&](int a, int b)
                 {
                int diff_a = abs(X[a] - pivot);
                int diff_b = abs(X[b] - pivot);
                if (diff_a != diff_b) {
                    return diff_a < diff_b;
                }
                return X[a] < X[b]; });
            bool matches = true;
            for (int i = 0; i < n; i++)
            {
                if (X[indices[i]] != Y[i])
                {
                    matches = false;
                    break;
                }
            }

            if (matches)
            {
                valid_pivot = pivot_idx + 1; // 1-indexed
                break;
            }
        }

        cout << valid_pivot << "\n";
    }

    return 0;
}