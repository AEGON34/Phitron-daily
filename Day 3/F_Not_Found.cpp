#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    vector<bool> present(26, false);
    for (char c : s)
    {
        present[c - 'a'] = true;
    }
    string missingLetter = "None";
    for (char c = 'a'; c <= 'z'; c++)
    {
        if (!present[c - 'a'])
        {
            missingLetter = c;
            break;
        }
    }
    if (missingLetter == "None")
    {
        cout << "None" << endl;
    }
    else
    {
        cout << missingLetter << endl;
    }

    return 0;
}
