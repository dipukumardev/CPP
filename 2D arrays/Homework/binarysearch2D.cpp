
// Q.) user can given a 2D arrays and target. your target is find the target using the binary search;

#include <iostream>
using namespace std;
int main()
{

    // Take a input form the user how many row,col and target;
    int target;
    cout << "Enter the target:";
    cin >> target;
    int row, col;
    cout << "Enter the row and col:";
    cin >> row >> col;
    // Define a 2D matrix:
    int matrix[row][col];

    // Take a input form the user and arrange in the 2D arrays:
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }
    // Print the user input in the 2D array:
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] <= target && matrix[i][j] >= target)
            {
                int start = 0;
                int end = row - 1;
                while (start < end)
                {
                    /* code  for binary search*/

                    int mid = start + (end - start) / 2;

                    if (matrix[i][j] == target)
                    {
                        cout << "Target Element is present in the 2D array";
                        return 1;
                    }
                    else if (matrix[i][j] < target)
                    {
                        mid = start + 1;
                    }
                    else
                    {
                        mid = end - 1;
                    }
                }
            }
        }
    }

    cout << "Target element is not present in the 2D array" << endl;
    return 0;
}