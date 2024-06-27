// given some color  we are sorting in the assiding order;

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int arr[6] = {4,3,1,5,2,4};
    for(int i = 0; i<6; i++)
    {
        swap(arr[i].begain(), arr[i].end());
    }
}