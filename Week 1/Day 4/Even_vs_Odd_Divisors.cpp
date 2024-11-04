#include <bits/stdc++.h>
using namespace std;

vector<int> finddd(int n)
{
    vector<int> dd;
    for (int i = 1; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            dd.push_back(i);
            if (i != n / i)
            {
                dd.push_back(n / i);
            }
        }
    }
    return dd;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int f = 0, g = 0;
        vector<int> dd = finddd(n);

        for (int d : dd)
        {
            if (d % 2 == 0)
                f++;
            else
                g++;
        }
        if (f > g)
        {
            cout << "1" << endl;
        }
        else if (g > f)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }

    return 0;
}
