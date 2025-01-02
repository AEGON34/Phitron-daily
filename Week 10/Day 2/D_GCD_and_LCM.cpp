#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y)
{
    while (y != 0)
    {
        int tmp = x;
        x = y;
        y = tmp % y;
    }
    return x;
}

int lcd(int x, int y)
{
    return abs(x * y) / gcd(x, y);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        int sum = 0;

        if (x == y)
        {
            sum = x + y;
        }
        else
        {
            for (int i = 0; i < k; i++)
            {
                if (i % 2 == 0)
                {
                    int l = gcd(x, y);
                    if (x > y)
                    {
                        y = l;
                    }
                    else
                    {
                        x = l;
                    }
                }
                else
                {
                    int l = lcd(x, y);
                    if (x > y)
                    {
                        y = l;
                    }
                    else
                    {
                        x = l;
                    }
                }

                // Handle special case where x or y becomes 0
                if (x == 0 || y == 0)
                {
                    break;
                }
            }
            sum = x + y;
        }
        cout << sum << endl;
    }
    return 0;
}
