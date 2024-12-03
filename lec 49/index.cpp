// learn and solve the problem of Memory Managenment in the stack and heap;

// stack : is a static memory let assume a memory size is 4GB so 8MB, 12MB , and 16 MB is the size of the stack memory size. but when run the program all function  are run and allocated memory in the stack when work is done of the function than stack is get back the space to the program.

// Heap: is a dynamic memory allocation. when user can use the heap memory use the key word (new) to get space in the heap memory or delet the use the key (delete).

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // allocated the memory in the heap;
    int *ptr1 = new int;
    *ptr1 = 10;
    cout << *ptr1 << endl;
    // allocated the memory in the heap;
    float *ptr2 = new float;
    *ptr2 = 7.3;
    cout << *ptr2 << endl;

    int n;
    cout << "Enter the Size of the Arra:";
    cin >> n;
    // int arr[n]; it is wrong
    // allocated the memory in the heap;
    int *ptr = new int[n]; // it is correct;

    for (int i = 0; i < n; i++)
    {
        ptr[i] = i + 1;
    }

    // print the value;

    for (int i = 0; i < n; i++)
    {
        cout << ptr[i] << endl;
    }
    // delete the Memory in the heap ;
    delete ptr1;
    delete ptr2;
    delete[] ptr;
}