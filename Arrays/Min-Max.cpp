// First Approch Come in mind:

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6] = {3, 2, 1, 56, 10000, 167};
    sort(arr, arr+6);
    cout<<"Min:"<<arr[0]<< " Max:" <<arr[6-1];
}

