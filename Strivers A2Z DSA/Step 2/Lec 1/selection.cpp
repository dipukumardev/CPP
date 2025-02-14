#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Size of the Arrays:";
    cin >> n;

    // Declear an Arrays:
    int arr[n];

    // Enter the Value of the Arrays;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // // printing the value of the Arrays:
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i];
    // }

    for (int i = n - 1; i > 0; i--)
    {
        int index = i;
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[index])
            {
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }

    // printing the value of the Arrays:
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }

    return 0;
}