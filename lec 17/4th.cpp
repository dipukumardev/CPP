

// Missing number is the Arrays is :

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 5, 6, 7, 8};

    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    // cout<<sum;

    int sum1 = 0;
    for (int i = 0; i < size; i++)
    {
        sum1 = size * (size + 1) / 2;
    }

    // cout<<sum1;

    cout << "Missing Number is : " << sum - sum1;
}