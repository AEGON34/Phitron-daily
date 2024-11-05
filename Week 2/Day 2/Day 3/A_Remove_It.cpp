#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> al(n);
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        cin >> al[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (al[i] != m)
        {
            a.push_back(al[i]);
        }
    }
    for (int cd : a)
    {
        cout << cd << " ";
    }
    return 0;
}