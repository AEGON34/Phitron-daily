#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;

int optimalScore(vector<int> &A)
{
    int N = A.size();
    int result = INT_MAX; // To store the minimum score Alice can enforce

    for (int i = 0; i < N; ++i)
    {
        // Compute Bob's options
        int maxDiff = 0;
        if (i > 0)
        {
            maxDiff = max(maxDiff, abs(A[i] - A[i - 1]));
        }
        if (i < N - 1)
        {
            maxDiff = max(maxDiff, abs(A[i] - A[i + 1]));
        }
        // Alice chooses the minimum score among Bob's maximum options
        result = min(result, maxDiff);
    }

    return result;
}

int main()
{
    int N;
    cout << "Enter the size of the array: ";
    cin >> N;
    vector<int> A(N);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }
    cout << "The optimal score is: " << optimalScore(A) << endl;
    return 0;
}
