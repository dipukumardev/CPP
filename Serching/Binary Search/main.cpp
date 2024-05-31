#include<iostream>
using namespace std;
// write a function of find the binar search;
int binarserch(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int mid;
    while(start<=end){
        mid = (start + end)/2;
        if(arr[mid] == key){
            return mid;
           
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}


int main(){
    int arr[1000];
    int n;
    cout<<"Enter the number of arr:";
    cin>>n;
    cout<<"Enter the elements of the emlements:";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    
    int key;
    cout<<"Enter the key:";
    cin>>key;
    
    cout<<binarserch(arr, n, key);
    return 0;
}