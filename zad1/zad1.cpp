#include <iostream>
#include <string>

using namespace std;

bool match(const string &pattern, const string &s)
{

    int dlugoscs = s.size();
    int dlugoscp = pattern.size();
    int i = 0;
    int j = 0;

    for (i, j; j < dlugoscs; j++, i++)
    {

        if (pattern[i] == '?')
        {
            continue;
        }

        else if (pattern[i] == '*')
        {

            while (pattern[i + 1] != s[j])
            {
                j++;
                if (pattern[i + 1] == (s[j] || '?')) //if (pattern[i + 1] == s[j])
                {
                    j--;
                    break;
                }
                else if (i > dlugoscp || j > dlugoscs)
                {
                    return false;
                }
            }
        }

        else if (pattern[i] != s[j])
        {
            return false;
        }
    }
    if (i != dlugoscp || j != dlugoscs)
    {

        return false;
    }
    else
        return true;
}

int main()
{

    // cout << match("a*a", "abba") << endl;

    string pattern;
    string s;

    cout << "Podaj zdanie: ";
    cin >> pattern;

    cout << "Podaj zdanie porownawcze: ";
    cin >> s;

    cout << endl;

    if (match(pattern, s) == true)
        cout << "TRUE";
    else
        cout << "FALSE";
}