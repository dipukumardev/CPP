#include <iostream>
using namespace std;
int hownumocc(int num[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    // int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (num[mid] == key)
        {
            ans = mid;
           end = mid -1;
        }
        else if (key > num[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
        // mid = start + (end - start) / 2;
    }
    return 0;
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 4, 4, 5, 5, 5, 6};
    int key;
    cout << "Enter the Key:";
    cin >> key;
    int found = hownumocc(arr, 10, key);
    cout << found;
}