#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[7] = {10,5,10,5,11,11,5};
    sort(arr, arr+7);



    
    for(int i = 0; i<7; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}