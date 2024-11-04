#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    map<string, bool> mapp;
    vector<string> order;
    string s1;

    for (int i = 0; i < n; i++)
    {
        cin >> s1;

        if (mapp[s1])
        {
            auto it = find(order.begin(), order.end(), s1);
            if (it != order.end())
            {
                order.erase(it);
            }
        }

        mapp[s1] = true;
        order.push_back(s1);
    }

    for (auto it = order.rbegin(); it != order.rend(); ++it)
    {
        cout << *it << endl;
    }

    return 0;
}
