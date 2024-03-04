// #include <iostream>
// using namespace std;

// void printarr(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// void returnarr(int arr[], int arr2[], int size int size){
//     int sum = 0;
//     for(int i = 0; i<size; i++){
//         sum = sum + arr[i];
//     }
//     int sum2 = 0;
//     for(int i = 0; i<size; i++){
//         sum2 == sum2 + arr2[i];
//     }
//     if(sum>sum2){
//         return sum;
//     }
//     else{
//         return sum2;
//     }
// }

// int main()
// {
//     int arr1[4] = {1, 2, 4, 6};
//     int arr2[5] = {2, 1, 1, 1, 1};
//     returnarr(arr1, arr2,4,5);
//     printarr(arr1, arr2, 4,5);
// }

// to find the unsame elements find and print them;
#include <iostream>
using namespace std;


void printarr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void unequalprin(int arr[], int size){
    int unequal = 0;
    for(int i = 0; i<size; i++){
        unequal = unequal^arr[i];
    }
    return unequal;
}

int main()
{
    int arr1[6] = {1, 1, 7, 6, 0, 7};
    unequalprin(arr1, 6);
    printarr(arr1, 6);
}