

// divide array in 2 subarrays with equal sum;
#include<iostream>
using namespace std;
int main()
{
    int arr[8] = {3,4,-2,5,8,20,-10,8};
    for(int i = 0; i<8-1; i++)
    {
        int sum1 = 0;
        int sum2 = 0;
        for(int j = 0; j<=i; j++)
        {
            sum1 += arr[j]; 
        }
        for(int j = i + 1; j<8; j++)
        {
            sum2 +=arr[j];
        }
        
        if(sum1 == sum2)
        {
            cout<<"1";
            return true; 
        }
       
    }
    return 0;
}