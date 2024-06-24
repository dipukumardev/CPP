// Reverse Each row of matric;

#include <iostream>
using namespace std;
int main()
{
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    for (int i = 0; i < 3; i++)
    {
        int start = 0;
        int end = 3;
        while (start < end)
        {
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }

    for(int i =0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            cout<<arr[i][j] <<" ";
        }
        cout<<endl;
    }
}
