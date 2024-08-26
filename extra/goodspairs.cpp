#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4] = {1, 1, 1, 1};
    int n = 4;
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
    }
    cout << count << " ";
}