#include <iostream>
using namespace std;
int binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    // int mid = (start + end) / 2;
    int mid = start + (end-start)/2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        // mid = (start + end) / 2;
         int mid = start + (end-start)/2;
    }
    return -1;
}
int main()
{
    int even[5] = {1, 2, 4, 6, 7};
    int odd[6] = {3, 5, 9, 13, 15, 17};
    int key;
    cout << "Ente the key:";
    cin >> key;
    int found = binarysearch(even, 5, key);
    int oddfound = binarysearch(odd, 6, 3);
    cout << oddfound <<endl;
    cout << found << endl;
}