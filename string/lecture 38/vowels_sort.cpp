// sort vowels in a string;
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "lEetcOde";
    vector<int> upper(26, 0);
    vector<int> lower(26, 0);

    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            // Else if statements;
            upper[s[i] - 'A']++;
            s[i] = '#';
        }
        else if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            // if ka statements;
            lower[s[i] - 'a']++;
            s[i] = '#';
        }
    }
    string ans;

    // end of the first for loop;

    for (int i = 0; i < 26; i++)
    {
        char c = 'A' + i;
        while (upper[i])
        {
            ans += c;
            upper[i]--;
        }
    }
    // End of the second for loops;

    for (int i = 0; i < 26; i++)
    {
        char c = 'a' + i;
        while (lower[i])
        {
            ans += c;
            lower[i]--;
        }
    }

    // End of the third for loops;

    int first = 0;
    int second = 0;
    while (second < ans.size())
    {
        if (s[first] == '#')
        {
            s[first] = ans[second];
            second++;
        }
        first++;
    }
    cout << s;
}