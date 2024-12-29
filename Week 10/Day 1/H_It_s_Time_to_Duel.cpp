#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0)
#define endl "\n"

const int N = 2e5 + 5;
int a[N], b[N];

int maxScore(int cards[], int n)
{
    sort(cards, cards + n);

    int mx1 = cards[n - 1], mx2 = cards[n - 2], mn1 = cards[0], mn2 = cards[1];
    return max(mx1, max(mx1 * mx2, mn1 * mn2));
}

void pre()
{
    fastio;
}

void solve(int tc)
{
    int i, n1, n2;
    cin >> n1 >> n2;

    for (i = 0; i < n1; i++)
        cin >> a[i];
    for (i = 0; i < n2; i++)
        cin >> b[i];

    int yugi = maxScore(a, n1), kaiba = maxScore(b, n2);

    if (yugi > kaiba)
        cout << "Yugi";
    else if (kaiba > yugi)
        cout << "Kaiba";
    else
        cout << "Tie";
}

signed main()
{
    pre();

    int tc, tt = 1;
    cin >> tt;

    for (tc = 1; tc <= tt; tc++)
    {
        solve(tc);
        cout << endl;
    }

    return 0;
}