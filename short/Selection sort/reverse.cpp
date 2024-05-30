// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {2,1,5,3,4};
//     for(int i = 5; i>1; i--){
//         int index = i;
//         for(int j = i-1; i>0; j--){
//             if(arr[j]> arr[index])
//             index = j;
//         }
//         swap(arr[i], arr[index]);
//     }
    // for(int i = 0; i<5; i++){
    //     cout<<arr[i]<<" ";
    // }
// }


#include <iostream>
using namespace std;

int main() {
    int arr[5] = {2, 1, 5, 3, 4};
    int n = 5;

    for (int i = n - 1; i > 0; i--) {
        int index = 0; // Start with the first element's index
        for (int j = 1; j <= i; j++) {
            if (arr[j] > arr[index]) {
                index = j;
            }
        }
        // Swap the largest element found with the element at index i
        swap(arr[i], arr[index]);
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
