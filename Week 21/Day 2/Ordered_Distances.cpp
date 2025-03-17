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

        int vd = -1;
        for (int pdd = 0; pdd < n; pdd++)
        {
            int pt = X[pdd];
            vector<int> indices(n);
            for (int i = 0; i < n; i++)
            {
                indices[i] = i;
            }
            sort(indices.begin(), indices.end(), [&](int a, int b)
                 {
                int diff_a = abs(X[a] - pt);
                int diff_b = abs(X[b] - pt);
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
                vd = pdd + 1; // 1-indexed
                break;
            }
        }

        cout << vd << "\n";
    }

    return 0;
}