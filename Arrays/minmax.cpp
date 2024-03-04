// #include <iostream>
// using namespace std;

// // min vlaue;
// int getmin(int num[], int size)
// {
//     int min = INT8_MAX;
//     for (int i = 0; i < size; i++)
//     {
//         if (num[i] < min)
//         {
//             min = num[i];
//         }
//     }
//     return min;
// }

// // max value;
// int getMax(int num[], int size)
// {
//     int max = INT8_MIN;
//     for (int i = 0; i < size; i++)
//     {
//         if (num[i] > max)
//         {
//             max = num[i];
//         }
//     }
//     return max;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[100];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "Maximum value is " << getMax(arr, n) << endl;
//     cout << "Minimum value is " << getmin(arr, n) << endl;
// }

// practice the arrays find the min or max vlaue with predefine functions;
// #include<iostream>
// using namespace std;

// // find the min value;
// int getmin(int arrvale[], int size){
//     int mazi = INT8_MAX;
//     for(int i = 0; i<size; i++){
//         mazi = max(mazi, arrvale[i]);
//     }
//     return mazi;
// }

// int main(){
//     int num;
//     cin>>num;
//     int arr[100];
//     for(int i = 0; i<num; i++){
//         cin>> arr[i];
//     }
//     cout<<"Min value of the arr " << getmin(arr, num) << endl;
// }

// print the sum of all elements of the given arrays;

// #include<iostream>
// using namespace std;
// int main(){
//     int arr [4] = {1,2,4,5};
//     int sum = 0;
//     for(int element: arr){
//         sum += element;
//     }
//     cout<< " Sum of the all elements of the arrays:"<< sum << endl;
// }


// this code will run some problem so cheeeck them;

#include <iostream>
using namespace std;
// find the min value of the arrays;
int getmin(int num[], int size)
{
    int min = INT8_MAX;
    for (int i = 0; i < size; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
        return min;
    }
}
// find the max value of the max;
int getmax(int num[], int size)
{
    int max = INT8_MIN;
    for (int i = 0; i < size; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << " Max value of the give arrays is:" << getmax(arr, n) << endl;
    cout << " Min value of the give arrays is:" << getmin(arr, n) << endl;
}
