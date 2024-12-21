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
        int n;
        cin >> n;
        string s;
        cin >> s;

        // Use a stack to simulate the process
        int l = 0;
        stack<char> st;

        for (char c : s)
        {
            if (!st.empty() && st.top() != c)
            {
                st.pop(); // Remove the pair
                l++;      // Increment the counter for successful removal
            }
            else
            {
                st.push(c); // Push the character to the stack
            }
        }

        // Determine the result based on the count of removals
        if (l % 2 == 0)
        {
            cout << "Ramos" << endl;
        }
        else
        {
            cout << "Zlatan" << endl;
        }
    }

    return 0;
}
