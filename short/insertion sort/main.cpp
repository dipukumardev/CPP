#include <iostream>
using namespace std;

// make a function to sort the arrray which help of insertion sort;
int insertionsortalgo(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
            }
            else
            {
                break;
            }
        }
    }
}

// make a function to print the all sorted elment of the arrays;
void printelem(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{

    int arr[10000];
    int n;
    cout << "Enter the size of the array:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << insertionsortalgo(arr, n) << endl;
    printelem(arr, n);
}