// // Print row index with max sum:

#include <iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 89, 9, 32, 2, 4};

    int sum = INT16_MIN, index = -1;
    for(int i = 0; i<3; i++)
    {
        int total = 0;
        for(int j = 0; j<4; j++)
        {
            total +=arr[i][j];
            if(sum<total)
            {
                sum = total;
                index = i;
            }
        }
    }
    cout<<index;
}

