#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {1,2,4,5,6};
    int target = 17;
    for(int i = 0; i<5-2;i++)
    {
        for(int j = i + 1; j<5-1; j++)
        {
            for(int k = j +1; k<5; k++)
            {
                if(arr[i] + arr[j] + arr[k] == target)
                {
                    cout<<"Sum of 3 number are present in this arrays:";
                    return 1;
                }
            }
        }
    }
    cout<<"Not found the sum of therr element is equal to the target in this arr:";
    return 0;
}