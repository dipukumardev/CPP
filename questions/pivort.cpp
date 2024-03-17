#include<iostream>
using namespace std;
// pivort elements function ;
int getpivot(int arr[], int size){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    while(start<end){
        if(arr[mid]>=arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return start;
}
int main(){
    // fint the pivot element in the arrays means shortest value;
    int arr[7] = {2,4,5,7,5,3,1};
    cout<<" Pivot element index is " <<getpivot(arr,7);
}