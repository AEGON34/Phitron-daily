#include <bits/stdc++.h>

using namespace std;

int hh(vector<int> &arr)
{
    int n = arr.size();
    int maxOnes = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            int j = (i + 1) % n;
            int count = 0;
            while (arr[j] != 0)
            {
                if (arr[j] == 1)
                {
                    count++;
                }
                j = (j + 1) % n;
            }
            if (count > maxOnes)
            {
                maxOnes = count;
            }
        }
    }

    return maxOnes;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int result = hh(arr);
    cout << result << endl;
    return 0;
}