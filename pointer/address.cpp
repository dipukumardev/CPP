#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    cout << num << endl;
    // find the address of the num where store in the memory;
    cout << "Find the add of the num:" << &num << endl;

    // how to make a pointer
    int *ptr = &num;
    cout << *ptr << endl; // to the store the value in the contaner;
    cout << ptr << endl;  // to the store the address of the contaner;

    //  find the size of the pointers
    cout << "Find the size fo the num is :" << sizeof(num) << endl;
    cout << "Find the size fo the pointers is :" << sizeof(ptr) << endl;
    cout << "Find the size fo the pointers is :" << sizeof(*ptr) << endl;
}