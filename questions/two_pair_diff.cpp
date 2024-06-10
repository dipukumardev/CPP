#include<iostream>
using namespace std;
int main()
{
    int arr[6] = {2,3,5,10,50,80};
    int target = 45;
    int start = 0;
    int end = 1;
    while(end<6)
    {
        if(arr[end] - arr[start] == target)
        {
            cout<<"1";
            return 0;
        }
        else if(arr[end] - arr[start] < target)
        {
            end++;
        }
        else{
            start++;
        }
    }
    cout<<"0";
    return 0;
}