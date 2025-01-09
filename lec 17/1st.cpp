
// Search an Elements in the Arrays:

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[6] = {1,2,4,6,4,32};
//     int k;
//     cout<<"Enter the value of the K:";
//     cin>>k;

//     for(int i =0; i<6; i++)
//     {
//         if(arr[i] == k)
//         {
//             cout<<"K is the match and position in Arrays is : " << i;
//             return 0;
//         }
//     }
//     cout<<"Not Match the value of the K in the Arrays:";

//     return 0;
// }

// Second way to solve it

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6] = {1, 2, 4, 6, 4, 32};
    int k;
    cout << "Enter the value of the K:";
    cin >> k;
    int index = -1;

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == k)
        {
            index = i;
            break;
        }
    }
    cout << index;

    return 0;
}