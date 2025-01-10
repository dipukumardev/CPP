

// Rotate the 1 Elements of the arrays:

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4] = {1, 3, 4, 5};

    int last = arr[4 - 1];

    for (int i = 4 - 2; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[0] = last;

    // print the 1 Elements move in the arrays:

    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
}