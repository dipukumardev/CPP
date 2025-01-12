

// Find the how many zero in the arrays;

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Size of the arrays:";
    cin>>n;

    int arr[n];

    for(int i =0; i<n; i++)
    {
        cin>>arr[i];
    }

    int count = 0;

    for(int i = 0; i<n; i++)

    {
        if(arr[i] == 0)
        {
            count = count + 1;
        }
    }

    cout<<"Total Occurance in the 0 in the Arrays is : " << count;

// print the value of the arrays:

    // for(int i =0; i<n; i++)
    // {
    //     cout<<arr[i] " ";
    // }
}