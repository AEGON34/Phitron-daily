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
        queue<int> vv;
        for (int i = 0; i < n - 1; i++)
        {
            int x;
            cin >> x;
            vv.push(x);
        }

        vector<int> v;

        // Initialize the first two elements of v
        int d = vv.front() / 2;
        int l = vv.front() - d;
        vv.pop();
        if (d < l)
        {
            v.push_back(l);
            v.push_back(d);
        }
        else
        {
            v.push_back(d);
            v.push_back(l);
        }

        // Process the remaining elements
        while (!vv.empty())
        {
            int d = vv.front();
            vv.pop();
            int nextValue = d - v.back();
            v.push_back(nextValue);
        }

        // Print the result
        for (int l : v)
        {
            cout << l << " ";
        }
        cout << endl;
    }
    return 0;
}
