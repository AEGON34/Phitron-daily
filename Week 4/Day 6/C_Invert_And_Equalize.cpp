#include <iostream>
#include <string>
using namespace std;

int minop(string &S)
{
    int count0 = 0;
    int count1 = 0;
    for (size_t i = 0; i < S.length(); ++i)
    {
        if (i == 0 || S[i] != S[i - 1])
        {
            if (S[i] == '0')
            {
                count0++;
            }
            else
            {
                count1++;
            }
        }
    }
    return min(count0, count1);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string S;
        cin >> S;

        int result = minop(S);
        cout << result << endl;
    }
    return 0;
}
