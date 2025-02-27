#include <bits/stdc++.h>
using namespace std;

int findpreffixsuffix(string str)
{
    int n = str.length();

    for (int len = n - 1; len > 0; len--)
    {
        string Prifix = str.substr(0, len);
        string Suffix = str.substr(n - len, len);

        if (Prifix == Suffix)
        {
            return len;
        }
    }
    return 0;
}
int main()
{
    string str = "ABCDEABCD";
    int length = findpreffixsuffix(str);
    cout << "Longest Prefix and Suffix is: " << length << endl;
    return 0;
}