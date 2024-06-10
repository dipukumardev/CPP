//  find the sum of the suffix;
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[6] = {6,4,5,-3,2,8};
    vector<int>sufix(6);
    sufix[5] = arr[5];
    for(int i = 4; i>=0; i--)
    {
        sufix[i] = sufix[i+1] + arr[i];
    }
    for(int i = 0; i<6; i++)
    {
        cout<<sufix[i] << " ";
    }
}