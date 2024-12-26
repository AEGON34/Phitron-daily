#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if (n <= 2)
    {
        if (n == 1)
        {
            cout << "a" << endl;
        }
        else
        {
            cout << "aa" << endl;
        }
    }
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (i % 2 == 0)
            {
                cout << "a";
            }
            else
            {
                cout << "b";
            }
        }
        cout << "c";
    }
    return 0;
}