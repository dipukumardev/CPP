#include <iostream>
using namespace std;
int main()
{
    int arr1[3][4] = {1, 2, 3, 4, 5, 6, 7, 89, 9, 32, 2, 4};
    int arr2[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 3, 2, 1};
    int ans[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
          ans[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    // print the ans
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << ans[i][j] << " ";
        }
    }
}