// print the wave form of the all  element of the 2D array elements;

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// write a function to print the all the element of the wave form;

void wave(int arr[][4], int row, int col)
{
    for (int j = 0; j < col; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < row; i++)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }
        else
        {
            for (int i = row - 1; i >= 0; i--)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
}
int main()
{

    int matrix[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    wave(matrix, 3, 4);
}