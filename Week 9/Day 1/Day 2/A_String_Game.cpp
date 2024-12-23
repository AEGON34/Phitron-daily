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
        int l = 0;
        stack<char> st;

        for (char c : s)
        {
            if (!st.empty() && st.top() != c)
            {
                st.pop();
                l++;
            }
            else
            {
                st.push(c);
            }
        }

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
