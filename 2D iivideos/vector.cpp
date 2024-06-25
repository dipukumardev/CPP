
// Basic knowldegemnt of the how to create a 2D vector and how to print and perform some extrea activity:

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    // how to create a 2D vector;
    // vector<vector<int> >matrix; // simple create a matrix;
    vector<vector<int>> matrix(3, vector<int>(4, 1)); // create a 2D matrix and how many row, col, and inti;

    // print the vector;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }


    //  find the how many row in the 2D arrays;
    int row = matrix.size();
    cout<<"Matrix row is:"<<row <<endl;
    // find the how many col present in the col;
    int col = matrix[0].size();
    cout<<"Matrix col is:"<<col;
}