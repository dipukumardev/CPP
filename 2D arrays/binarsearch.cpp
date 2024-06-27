#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] = {4, 8, 12, 18, 22, 26, 36, 40, 45};
    int target;
    cout << "Enter the target number:";
    cin >> target;
    int start = 0;
    int end = 3 - 1;
    while (start < end && end >= 0)
    {
        if (arr[start][end] == target)
        {
            cout << arr[start][end];
            return 0;
        }
        else if (arr[start][end] < target)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    cout<<"Target element are not present";
}