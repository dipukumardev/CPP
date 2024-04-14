#include <iostream>
using namespace std;
int main()
{
    int a[20] = {1, 3, 6, 8, 4, 2};
    cout << a << endl;
    cout << &a << endl;
    cout << &a[0];

    int *p = &a[0];
    cout << p << endl;
    cout << *p << endl;
    cout << &p << endl;
}