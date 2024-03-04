// #include <iostream>
// using namespace std;

// void printarr(int arr[], int size){
//     for(int i = 0; i<size; i++){
//         cout<< arr[i] << " ";
//     }
//     cout<<endl;
// }

// void swapalternate(int arr[], int size)
// {
//     for (int i = 0; i < size;  i = i + 2)
//     {
//         if (i + 1 < size)
//         {
//             swap(arr[i], arr[i + 1]);
//         }
//     }
// }
// int main()
// {
//     int arr[4] = {1, 2, 3, 4};
//     swapalternate(arr, 4);
//     printarr(arr, 4);
// }

// #include<iostream>
// using namespace std;

// void printarr(int arr[], int size){
//     for(int i = 0; i<size; i++){
//         cout<< arr[i] << " ";
//     }
//     cout<<endl;
// }

// void swapalteodd(int arr[], int size){
//     for(int i = 0; i<size; i = i +2){
//         if(i+1<size){
//             swap(arr[i], arr[i+1]);
//         }
//     }
// }

// int main(){
//     int odd[7] = {1,2,5,7,8,9,9};
//     swapalteodd(odd,7);
//     printarr(odd, 7);

// }

// upper questions are the swap the elements of the arrays in the alternate elemetns;

#include <iostream>
using namespace std;

int printarr(int arr[], int size)
{
    for (int i = 0; i < size; i = i + 1)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void returnswapone(int arr[], int size)
{
    for (int i = 0; i < size; i= i + 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);

            //    int temp = arr[1]; // threee line to introduce the how to work the internal work of swap functions;
            //    arr[1] = arr[0];
            //    arr[0] = temp;
        }
    }
}

int main()
{
    int arr[8] = {1, 2, 5, 76, 8, 9, 8, 4};
    returnswapone(arr, 8);
    printarr(arr, 8);
}
