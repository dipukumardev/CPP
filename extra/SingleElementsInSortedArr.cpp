// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int arr[7] = {1, 1, 2, 2, 3, 4, 4};

//     for (int i = 0; i < 7; i++)
//     {
//         int count = 0;

//         for (int j = 0; j < 7; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 count++;
//             }
//         }

//         if (count == 1)
//         {
//             cout << "One-time element present is: " << arr[i] << endl;
//         }
//     }

//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
int main()
{
     int arr[7] = {1, 2, 2, 3, 3, 4, 5};
     for(int i =0; i<7; i++)
     {
        int count = 0;
        for(int j =0; j<7; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }
        if(count == 1)
        {
            cout<<arr[i];
        }
     }

}
