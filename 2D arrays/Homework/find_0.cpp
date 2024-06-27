#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Write a function to find the how many elemnt present in the 2D arrays:

int main()
{
    // Take a user input how many row and col:
    int row, col;
    cout << "Ente the row and col:";
    cin >> row >> col;

    // Declare a 2D arrays:

    int matrix[row][col];

    // Take a user input and arrange in the 2D arrays:

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }
    // Print the 2D arrays:
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    //  find the how many zero (0) present in this 2D arrays:
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] == 0)
            {
                sum++;
            }
        }
    }
    cout << "Total 0 present in the 2D arrays:" << sum;
}