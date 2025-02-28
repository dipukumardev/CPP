#include <bits/stdc++.h>
using namespace std;

// functions;
int isornot(string str1, string str2)
{
    int n = str1.size();
    int m = str2.size();

    for (int i = 0; i <= n - m; i++)
    {
        int first = i;
        int second = 0;

        while (second < m)
        {
            if (str1[first] != str2[second])
            {
                break;
            }
            else
            {
                first++;
                second++;
            }
        }
        if (second == m)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    string str1 = "DipuRiteshSingh";
    string str2 = "RiteshSingh";

    int ans = isornot(str1, str2);
    cout << "Postion of the str2 of starting index is :" << ans;
}