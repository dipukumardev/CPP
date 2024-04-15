#include <iostream>
using namespace std;
// make a function to get the pointer in the functions;
void print(int *p)
{
    cout << *p << endl;
}
// make a function to update a pointer;
void update(int *p)
{
    // p = p + 1;  // address can not change but value will be change
    // cout<<"inside"<< p <<endl;

    *p = *p + 1;
}
int main()
{
    int arr[10] = {0, 2, 4};
    int *p = &arr[0];
    // print(p);
    cout << "before" << *p << endl;
    update(p);
    cout << "After" << *p << endl;
}
