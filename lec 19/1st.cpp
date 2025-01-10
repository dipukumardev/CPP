

// Sort the Arrays with the help of the Selection sort:


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {3,1,2,4,5};
    
    for(int i = 0; i<5 - 1; i++)
    {
        int index = i;
        
        for(int j = i + 1; j < 5; j++)
        {
            if(arr[j] < arr[index])
            {
                index = j;
            }
        }
        
        swap(arr[index] , arr[i]);
    }
    
    //  print the value of the sorted Arrays;
    
    for(int i = 0; i<5; i++)
    {
        cout<< arr[i];
    }
}
