// Reversing an Array Using Recursion in C++

// first approch to solve the Reverse Arrays;

#include <bits/stdc++.h>
using namespace std;
void fun(int arr[], int n)
{
    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        swap(arr[left], arr[right]); // swap function use;
        left++;
        right--;
    }
}

int main()
{
    int n;
    cout << "Enter the Value of the n:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    fun(arr, n); // function call

    // Printing the Reversing arrays;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<< " ";
    }
}
