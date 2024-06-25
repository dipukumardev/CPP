// Rotate a matrix in 90 degree;

#include<iostream>
using namespace std;
int main()
{
    int matrix[3][3] = {1,2,3,4,5,6,7,8,9};
    int ans[3][3];
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            ans[j][3-1-i] = matrix[i][j];
        }
    }

    // printing the 90degree 2D arrays;
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            cout<<ans[i][j] <<" ";
        }
        cout<<endl;
    }
}