#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> A(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> A[i];
    }

    // Sort the array to easily access the smallest and largest elements
    sort(A.begin(), A.end());

    // Case 1: No deletion (original range)
    int min_range = A[n - 1] - A[0];

    // Case 2: Deleting one element (either the smallest or the largest element)
    if (n > 1)
    {
        min_range = min(min_range, A[n - 2] - A[0]); // Deleting the largest element
        min_range = min(min_range, A[n - 1] - A[1]); // Deleting the smallest element
    }

    // Case 3: Deleting two elements (both the smallest and largest)
    if (n > 2)
    {
        min_range = min(min_range, A[n - 3] - A[0]); // Deleting two largest elements
        min_range = min(min_range, A[n - 1] - A[2]); // Deleting two smallest elements
    }

    cout << min_range << endl;
