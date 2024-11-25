#include <bits/stdc++.h>
using namespace std;
map<long long, long long> mp;
long long arr[1000010];
string arr1[1000010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    string s = "abcdefghijklmnofqrstuvwxyz";
    while (t--)
    {
        long long n, i, j;
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (i = 0; i < 26; i++)
        {
            long long bosabo = s[i];
            long long start = 0;
            for (j = 0; j < n; j++)
            {
                if (arr[j] == start && mp[j] == 0)
                {
                    arr1[j] = bosabo;
                    start++;
                    mp[j] = 1;
                }
            }
        }
        for (i = 0; i < n; i++)
        {
            cout << arr1[i];
        }
        cout << endl;
        mp.clear();
    }
    return 0;
}