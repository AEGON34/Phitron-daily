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
        string a;
        cin >> a;
        int n = a.size();
        for (int i = 0; i < n / 2; i++)
        {
            char tmp1 = a[n - i - 1]; // Default to same character
            char tmp2 = a[i];         // Default to same character

            if (a[n - i - 1] == 'p')
                tmp1 = 'q';
            else if (a[n - i - 1] == 'q')
                tmp1 = 'p';

            if (a[i] == 'p')
                tmp2 = 'q';
            else if (a[i] == 'q')
                tmp2 = 'p';

            // Perform swap
            a[i] = tmp1;
            a[n - i - 1] = tmp2;
        }
        // If the string length is odd, handle the middle character
        if (n % 2 == 1)
        {
            int mid = n / 2;
            if (a[mid] == 'p')
                a[mid] = 'q';
            else if (a[mid] == 'q')
                a[mid] = 'p';
        }
        cout << a << endl;
    }
    return 0;
}
