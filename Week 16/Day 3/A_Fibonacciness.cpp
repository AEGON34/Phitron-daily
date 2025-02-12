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
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;

        int max_fibonacciness = 0;

        // We only need to consider a3 values that could satisfy at least one condition
        // Possible a3 values are:
        // 1. a3 = a1 + a2 (to satisfy the first condition)
        // 2. a3 = a4 - a2 (to satisfy the second condition)
        // 3. a3 = a5 - a4 (to satisfy the third condition)
        // Additionally, we can consider other values, but these are the most relevant

        vector<int> possible_a3 = {a1 + a2, a4 - a2, a5 - a4};

        // Also, consider a3 = 0, a3 = 1, and a3 = -1 as potential candidates
        possible_a3.push_back(0);
        possible_a3.push_back(1);
        possible_a3.push_back(-1);

        for (int a3 : possible_a3)
        {
            int fibonacciness = 0;
            if (a3 == a1 + a2)
                fibonacciness++;
            if (a4 == a2 + a3)
                fibonacciness++;
            if (a5 == a3 + a4)
                fibonacciness++;
            max_fibonacciness = max(max_fibonacciness, fibonacciness);
        }

        cout << max_fibonacciness << endl;
    }
    return 0;
}