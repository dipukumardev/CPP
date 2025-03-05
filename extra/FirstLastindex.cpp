#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[7] = {1, 2, 3, 3, 3, 6, 7};
    int x = 3;
    int first = -1;
    int last = -1;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == x)
        {
            if (first == -1)
            {
                first = i;
            }
            else
            {
                last = i;
            }
        }
    }
    cout << first << " " << last;
}