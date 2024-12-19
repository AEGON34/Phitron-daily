#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
long long binpow(long long a, long long b)
{
    a %= mod;
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}
bool isp(int n)
{
    string s = "";
    while (n)
    {
        int x = n % 10;
        char y = '0' + x;
        s += y;
        n /= 10;
    }
    string x = s;
    reverse(s.begin(), s.end());
    return x == s;
}
void STR()
{
    int n;
    cin >> n;
    vector<int> a;
    unordered_map<int, int> m;
    unordered_map<int, int> pal;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    int x = binpow(2, 15) - 1;
    for (int i = 0; i < x; i++)
    {
        if (isp(i))
        {
            pal[i]++;
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        x = a[i];
        m[x]++;
        for (auto it : pal)
        {
            int z = it.first;
            int xr = z ^ x;
            ans += m[xr];
        }
    }
    cout << ans << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        STR();
    }
    return 0;
}