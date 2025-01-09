

// Fibonacci Series

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of the N:";
    cin >> n;
    int arr[100];
    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i <= n - 1; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    cout << arr[n - 1] << " ";
}