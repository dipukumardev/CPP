#include <iostream>
using namespace std;

// write the function of merge the two arrays as a assinding order;
int merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < n && i < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    while (i < n)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    while (j < m)
    {
        arr2[k] = arr2[j];
        k++;
        j++;
    }
}


//  write a function to print the third arrays;
void print(int ans[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr1[5] = {2, 4, 6, 8, 9};
    int arr2[4] = {1, 3, 5, 7};
    int arr3[9] = {0};
    merge(arr1, 5 , arr2, 4, arr3);
    print(arr3, 9);
}