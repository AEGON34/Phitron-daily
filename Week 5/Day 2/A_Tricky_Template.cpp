#include <iostream>
#include <string>
using namespace std;

bool isMatching(const string &s, const string &t)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (islower(t[i]) && s[i] != t[i])
            return false; // Exact match required
        if (isupper(t[i]) && s[i] == tolower(t[i]))
            return false; // Should not match lowercase
    }
    return true;
}

int main()
{
    int t; // Number of test cases
    cin >> t;

    while (t--)
    {
        int n; // Length of strings
        cin >> n;

        string a, b, c;
        cin >> a >> b >> c;

        string templateStr(n, ' '); // Template to be constructed
        bool possible = true;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i])
            {
                // Both match this character exactly
                templateStr[i] = a[i];
            }
            else if (a[i] != b[i])
            {
                // Choose a character that excludes `c[i]`
                if (c[i] == a[i])
                {
                    templateStr[i] = toupper(b[i]);
                }
                else
                {
                    templateStr[i] = toupper(a[i]);
                }
            }

            // Check if `c` matches `templateStr` so far
            if (islower(templateStr[i]) && c[i] != templateStr[i])
                continue; // Valid case
            if (isupper(templateStr[i]) && c[i] == tolower(templateStr[i]))
            {
                possible = false;
                break;
            }
        }

        if (possible && isMatching(a, templateStr) && isMatching(b, templateStr) && !isMatching(c, templateStr))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
