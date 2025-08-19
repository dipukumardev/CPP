#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {1,3,4,5,6};
    int temp = arr[0];
    for(int i = 1; i<5; i++)
    {
        arr[i-1] = arr[i];
    }
    arr[5-1] = temp;


    // print the one's left Roated Arrays Elements;
    for(int i =0; i<5; i++)
    {
        cout<<arr[i] <<" ";
    }
}