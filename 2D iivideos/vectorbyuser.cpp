// user can enter the hole elemnt of the 2D vectro and also how many row and col;

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int row, col;
    cout << "Enter the value of the row and col:";
    cin >> row >> col;
    vector<vector<int>> matrix(row, (vector<int>(col)));

    // Enter the element of the 2D arrays;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // print the all value of the 2D arrays user input;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] <<" ";
        }
        cout << endl;
    }
}