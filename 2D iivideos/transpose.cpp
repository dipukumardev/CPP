#include<iostream>
using namespace std;
int main()
{
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int ans[4][3];  
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<4; j++)
        {
            ans[j][i] = arr[i][j];
        }
    }
    
    
    // print the arr
    for(int i = 0; i<4; i++)
    {
        for(int j =0; j<3; j++)
        {
            cout<<ans[i][j] <<" ";
        }
        cout<<endl;
    }
}