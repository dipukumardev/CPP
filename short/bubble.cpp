#include <bits/stdc++.h>
using namespace std;
int bubble_sort(int arr[], int size){
    for(int i = 1; i<size; i++){
        for(int j =1; j<size-i; j++){
           if(arr[j]>arr[j+1]){
             swap(arr[j], arr[j+1]);
           }
        }
    }
}
int main(){
    int arr[5] = {1,2,4,5,1,};
    bubble_sort(arr,5);
    for(int i =0; i<5; i++){
        cout<< arr[i] ," ";
    }
}