#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> ar;
    int sum1 = 0, sum2 = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ar.push_back(x);
    }

    int k = 1;
    while (!ar.empty())
    {
        if (k % 2 != 0)
        {

            if (ar[0] > ar[ar.size() - 1])
            {
                sum1 += ar[0];
                ar.erase(ar.begin());
            }
            else
            {
                sum1 += ar[ar.size() - 1];
                ar.pop_back();
            }
        }
        else
        {

            if (ar[0] > ar[ar.size() - 1])
            {
                sum2 += ar[0];
                ar.erase(ar.begin());
            }
            else
            {
                sum2 += ar[ar.size() - 1];
                ar.pop_back();
            }
        }
        k++;
    }

    cout << sum1 << " " << sum2 << endl;

    return 0;
}
