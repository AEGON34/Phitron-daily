#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;

int optimalScore(vector<int> &A)
{
    int N = A.size();
    int result = INT_MAX;

    for (int i = 0; i < N; ++i)
    {

        int maxDiff = 0;
        if (i > 0)
        {
            maxDiff = max(maxDiff, abs(A[i] - A[i - 1]));
        }
        if (i < N - 1)
        {
            maxDiff = max(maxDiff, abs(A[i] - A[i + 1]));
        }
        result = min(result, maxDiff);
    }

    return result;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }
        cout << optimalScore(A) << endl;
    }
    return 0;
}
