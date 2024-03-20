#include <bits/stdc++.h>
using namespace std;
int so(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int ans = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[ans])
            {
                ans = j;
            }
            if (ans != i) // Swap only if the minimum element is not at its correct position
            {
                swap(arr[ans], arr[i]);
            }
        }
    }
}
int main()
{
    int arr[5] = {3, 2, 5, 4, 1};
    so(arr,5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}