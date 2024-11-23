#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, c;
        cin >> n >> c;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // Calculate effective cost for each teleporter
        vector<int> effective_cost(n);
        for (int i = 0; i < n; i++)
        {
            effective_cost[i] = a[i] + (i + 1);
        }

        // Sort costs in ascending order
        sort(effective_cost.begin(), effective_cost.end());

        // Greedily select teleporters
        int teleporters_used = 0;
        for (int cost : effective_cost)
        {
            if (c >= cost)
            {
                c -= cost;
                teleporters_used++;
            }
            else
            {
                break;
            }
        }

        // Output the result for this test case
        cout << teleporters_used << endl;
    }

    return 0;
}
