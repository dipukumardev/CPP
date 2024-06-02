#include<iostream>
using namespace std;
// write a function to find the pick element of the arrays;
int findpickindex(int arr[] , int n){
    int start = 0; 
    int end = n-1;
    int mid;
    while(start<=end){
        mid = start + (end - start)/2;
        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
            return mid;
        }
        else if(arr[mid] > arr[mid-1]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
}

int main(){
    int arr[7] = {2,4,6,8,10,8,4};
    int peakindex = findpickindex(arr,7);
    cout<<peakindex;
    
}


// find the peak index in mountain arrays;