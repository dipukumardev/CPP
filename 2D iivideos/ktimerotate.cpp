// Kth time rotate a arrays;

#include <iostream>
#include <algorithm>
using namespace std;

// write a function to rotate a array in k time;
int rotate_k_time(int arr[][3])
{
    // transpose of the matrix;

    for (int i = 0; i < 3; i++)
    {
        for (int j = i; j < 3; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    // code for the arrays;

    for (int j = 0; j < 3; j++)
    {
        int start = 0;
        int end = 3 - 1;
        while (start < end)
        {
            swap(arr[start][j], arr[end][j]);
            start++;
            end--;
        }
    }
}

// write a function to print the arr;
void printarr(int arr[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] <<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int k;
    cout << "Enter the value of the K:";
    cin >> k;
    k = k % 4;
    cout<<"Rotate a arrays k time:"<< k <<endl;
    while (k)
    {
        rotate_k_time(arr);
        k--;
    }

// print a arrys hlep  of funciton call;
printarr(arr);

}