#include <iostream>
#include <string>
using namespace std;

bool isMatching(const string &s, const string &t)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (islower(t[i]) && s[i] != t[i])
            return false; 
        if (isupper(t[i]) && s[i] == tolower(t[i]))
            return false; 
    }
    return true;
}

int main()
{
    int t; 
    cin >> t;

    while (t--)
    {
        int n; 
        cin >> n;

        string a, b, c;
        cin >> a >> b >> c;

        string templateStr(n, ' '); 
        bool possible = true;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i])
            {
                
                templateStr[i] = a[i];
            }
            else if (a[i] != b[i])
            {
                
                if (c[i] == a[i])
                {
                    templateStr[i] = toupper(b[i]);
                }
                else
                {
                    templateStr[i] = toupper(a[i]);
                }
            }

            
            if (islower(templateStr[i]) && c[i] != templateStr[i])
                continue; 
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
