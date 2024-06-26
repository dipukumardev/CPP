// 2D arrays to rotate in anticlock 90 degree 😒;

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};

    // transpose a arr means row== col
    for(int i = 0; i<3; i++)
    {
        for(int j = i; j<3; j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }

    // reverse a col;

    for(int j =0; j<3; j++)
    {
        int start = 0; 
        int end = 3-1;
        while(start<end)
        {
            swap(arr[start][j], arr[end][j]);
            start++;
            end--;
        }
    }


    // print the anticlock wise 90 degree;
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            cout<<arr[i][j] <<" ";
        }
        cout<<endl;
    }
}