#include <bits/stdc++.h>
using namespace std;
int functiond(int n, int k)
{
    if (k > n)
        return 0;
    if (k == 0 || k == n)
        return 1;
    long long result = 1;
    for (int i = 1; i <= k; i++)
    {
        result *= (n - i + 1);
        result /= i;
    }
    return result;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1, s2;
    cin >> s1 >> s2;
    int mai = 0;
    for (char c : s1)
    {
        if (c == '+')
        {
            mai++;
        }
        else
        {
            mai--;
        }
    }
    int curr = 0, un = 0;
    for (char c : s2)
    {
        if (c == '+')
        {
            curr++;
        }
        else if (c == '-')
        {
            curr--;
        }
        else
        {
            un++;
        }
    }
    int remaining = mai - curr;
    if ((remaining + un) % 2 != 0 || abs(remaining) > un)
    {
        cout << fixed << setprecision(12) << 0.0 << endl;
        return 0;
    }
    int k = (remaining + un) / 2;
    int outcomes = functiond(un, k);
    int tout = pow(2, un);
    double probability = (double)outcomes / tout;
    cout << fixed << setprecision(12) << probability << endl;
    return 0;

    return 0;
}