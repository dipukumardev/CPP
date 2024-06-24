#include<iostream>
using namespace std;
int main()
{
    int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    //  the first diagonal sum code;
    int first = 0;
    for(int i = 0; i<4; i++)
    {
        first +=arr[i][i];
    }

    //  the second diagonal sum code;
    int second = 0;
    int i = 0; int j = 3;
    while(j>=0)
    {
        second +=arr[i][j];
        i++;
        j--;
    }


    // print the first diagonal sum;
    cout<<first <<endl;
    // print the second diagonal sum;
    cout<<second;
}