
// Second max number in the Arrays:

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 3, 4, 5, 7, 4, 3, 2};

    int size = sizeof(arr) / sizeof(arr[0]);
    int end = size - 1;
    sort(arr, arr + size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout <<"Second Max Elements in the Arrays is : " <<arr[end - 1];
}