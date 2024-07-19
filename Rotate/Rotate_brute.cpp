#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// making a fundtion that rotate the arrays;

void leftrotate(int arr[], int n, int d)
{
    d = d % n;

    // make a tmep arrays;
    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }

    // a head the back elements;
    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }

    // then puting the temp elm in the last;
    for (int i = n - d; i < n; i++)
    {
        arr[i] = temp[i - (n - d)];
    }
}
int main()
{
    // get the how many elements present the arrays;
    int n;
    cout << "Enter the element of the n:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // how many elment put in the left;
    int d;
    cout << "Enter the elments of the d:";
    cin >> d;
    leftrotate(arr, n, d);

    // printing the arrayswhen remove the arrays;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}