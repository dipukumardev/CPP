#include <iostream>
using namespace std;
int main()
{
    // Q.) use th e binary search find the index of the target number:

    int target;
    cout << "Enter the target:";
    cin >> target;

    //    take a input arr for the user:
    int size;
    cout << "Enter the size of the arr size:";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        int start = 0;
        int end = i - 1;
        int mid = start + (end - start) / 2;
        while (start < end)
        {
            if (arr[i] == target)
            {
                cout << "Index of the target is :" << arr[i];
                return 0;
            }
            else if (arr[i] < target)
            {
                start++;
            }
            else
            {
                end--;
            }
        }
    }
        cout<<"-1";
}