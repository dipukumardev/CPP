// #include<iostream>
// using namespace std;

// // make a function which are find the key element in the Array:
// int binaryserch(int arr[], int n, int key){
//     int start = 0; 
//     int end  = n - 1;
//     int mid;
    
//     while(start<=end){
//         mid = start + (start-end)/2;
//         if(arr[mid] == key){
//             return mid;
//         }
//         else if(arr[mid] < key){
//             start = mid + 1;
//         }
//         else{
//            end = mid - 1;
//         }
//     }
//     return -1;
// }


// int main(){
    
    
//     int arr[1000];
//     int n; 
//     cout<<"Enter the size of the Array:";
//     cin>>n;
//     cout<<"Enter the Element of the Array:";
//     for(int i = 0; i<n; i++){
//         cin>>arr[i];
//     }
    
//     int key; 
//     cout<<"Enter the key value:";
//     cin>>key;
    
    
//     // function call 
//     cout<<binaryserch(arr, n, key);
    
// }



#include <iostream>
using namespace std;

int binarysearch(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;
    int mid;

    while (start <= end) {
        mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {30, 28, 20, 16, 4};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int key = 28;

    // Function call
    int result = binarysearch(arr, n, key);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }

    return 0;
}




//  this code get some error so solve and boost your coding iq;