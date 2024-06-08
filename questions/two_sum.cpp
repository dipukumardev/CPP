

// brust froce algorithm

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>ans;
//     int arr[5] = {2,5,6,8,9};
//     int target;
//     cout<<"Enter the target element:";
//     cin>>target;

//     for(int i = 0; i<5-1; i++)
//     {
//         for(int j = i + 1; j<6; j++)
//         {
//             if(arr[i] + arr[j] == target)
//             {
//                 ans.push_back(arr[i]);
//                 ans.push_back(arr[j]);
//                 break;
//             }
//         }
//     }

//    for(int i = 0; i<ans.size(); i++){
//     cout<< ans[i] ;
//    }
// }

// Best approch to solve the problem  // but not run proper go to down you can find the more best approch;

// #include<iostream>
// using  namespace std;
// int main()
// {
//     int arr[6] = {1, 2, 4, 6 , 18, 25};
//     int target = 10;
//     int start = 0;
//     int end = 6 - 1;
//     while(start<end)
//     {
//         if(arr[start] + arr[end] == target)
//         {
//             return 1;
//         }
//         else if(arr[start] + arr[end] <target)
//         {
//             start++;
//         }
//         else{
//             end--;
//         }
//     }
//     return 0;
// }

//  more best approch (use of two pointer);
#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[5] = {2, 5, 8, 12, 56};
    vector<int> ans;
    int target = 20;
    int start = 0;
    int end = 4;
    while (start < end)
    {
        if (arr[start] + arr[end] == target)
        {
            ans.push_back(start);
            ans.push_back(end);
            break;
        }
        else if (arr[start] + arr[end] < target)
        {
            start++;
        }
        else
        {
            end--;
        }
    }

    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i] <<" ";
    }
    return 0;
}