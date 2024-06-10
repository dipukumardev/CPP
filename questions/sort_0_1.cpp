#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[5] = { 1,0,1,0,1};
    sort(arr , arr + 5);
    for(int i = 0; i<5; i++)
    {
        cout<<arr[i] <<" ";
    }
}


//  solve the provble with the help of the sort algorithm;

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[5] = {1,0,1,0,1};
    int start = 0;
    int end = 4;
    while(start<end)
    {
        if(arr[start] ==0){
            start++;
        }
        else{
            if(arr[end] == 0)
            {
                swap(arr[start], arr[end]);
            }
            else{
                end--;
            }
        }
    }
    
    for(int i = 0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    
    
    
    
}