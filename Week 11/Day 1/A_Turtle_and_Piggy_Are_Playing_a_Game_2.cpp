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
        vector<int> ar(n);
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        sort(ar.begin(), ar.end());
        bool tur = true, pig = false;
        while (ar.size() > 1)
        {
            if (tur)
            {
                auto it = ar.begin();
                ar.erase(it);
                tur = false;
                pig = true;
            }
            else if (pig)
            {
                auto it = ar.end() - 1;
                ar.erase(it);
                tur = true;
                pig = false;
            }
        }
        cout << ar[0] << endl;
    }
    return 0;
}