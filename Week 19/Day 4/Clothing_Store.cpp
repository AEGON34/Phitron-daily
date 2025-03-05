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
        int x, y, z, a, b, c;
        cin >> x >> y >> z >> a >> b >> c;
        int happy = 0;
        int xl_used = min(z, c);
        happy += xl_used;
        int xl_remain = z - xl_used;
        int total_large = y + xl_remain;
        int large_used = min(total_large, b);
        happy += large_used;
        int large_remain = total_large - large_used;

        int total_small = x + large_remain;
        int small_used = min(total_small, a);
        happy += small_used;

        cout << happy << endl;
    }
    return 0;
}