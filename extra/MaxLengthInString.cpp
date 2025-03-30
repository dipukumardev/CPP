#include <bits/stdc++.h>
using namespace std;
int main()
{
    string para = "Dipu Sing is a SDE-II in the google";
    int count = 0;
    int maxcout = 0;

    for (int i = 0; i < para.length(); i++)
    {
        if (para[i] == ' ')
        {
            if (count > maxcout)
            {
                maxcout = count;
            }
            count = 0;
        }
        else
        {
            count++;
        }
    }
    if (count > maxcout)
    {
        maxcout = count;
    }

    cout << count;
}