#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Separate even and odd elements
    vector<int> even, odd;
    for (int num : a)
    {
        if (num % 2 == 0)
        {
            even.push_back(num);
        }
        else
        {
            odd.push_back(num);
        }
    }

    // Sort both arrays
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    int even_count = even.size();
    int odd_count = odd.size();

    // Check if the entire array can be deleted
    if (abs(even_count - odd_count) <= 1)
    {
        cout << 0 << endl;
        return 0;
    }

    // Calculate the number of remaining elements
    int remaining = 0;
    if (even_count > odd_count + 1)
    {
        remaining = even_count - (odd_count + 1);
        // Sum the smallest 'remaining' even elements
        int sum = 0;
        for (int i = 0; i < remaining; i++)
        {
            sum += even[i];
        }
        cout << sum << endl;
    }
    else if (odd_count > even_count + 1)
    {
        remaining = odd_count - (even_count + 1);
        // Sum the smallest 'remaining' odd elements
        int sum = 0;
        for (int i = 0; i < remaining; i++)
        {
            sum += odd[i];
        }
        cout << sum << endl;
    }

    return 0;
}