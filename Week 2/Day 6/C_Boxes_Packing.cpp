#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> boxes(n);

    // Read the side lengths of the boxes
    for (int i = 0; i < n; i++)
    {
        cin >> boxes[i];
    }

    // Sort the boxes to facilitate grouping by size
    sort(boxes.begin(), boxes.end());

    int max_frequency = 1, current_frequency = 1;

    // Find the maximum frequency of any box size
    for (int i = 1; i < n; i++)
    {
        if (boxes[i] == boxes[i - 1])
        {
            current_frequency++;
        }
        else
        {
            max_frequency = max(max_frequency, current_frequency);
            current_frequency = 1;
        }
    }

    // Ensure to consider the last group frequency
    max_frequency = max(max_frequency, current_frequency);

    // The result is the maximum frequency of any box size
    cout << max_frequency << endl;

    return 0;
}
