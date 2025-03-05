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
        int a = -1, b = -1, c = -1, d = 0;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                for (int j = 2; j <= sqrt(i); j++)
                {
                    if (i % j == 0 && i / j != i)
                    {
                        a = n / i;
                        b = j;
                        c = i / j;
                        if (a != b && b != c && a != c)
                        {
                            d = 1;
                            break;
                        }
                    }
                }
                if (d)
                    break;
                if (i != n / i)
                {
                    for (int j = 2; j <= sqrt(n / i); j++)
                    {
                        if ((n / i) % j == 0 && (n / i) / j != i)
                        {
                            a = i;
                            b = j;
                            c = (n / i) / j;
                            if (a != b && b != c && a != c)
                            {
                                d = 1;
                                break;
                            }
                        }
                    }
                }
                if (d)
                    break;
            }
        }
        if (d)
        {
            cout << "YES" << endl;
            cout << a << " " << b << " " << c << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}