#include <iostream>
using namespace std;
bool Even(int a)
{
    // odd -> 0;
    // even -> 1;
    if (a & 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int num;
    cin >> num;
    if (Even(num))
    {
        cout << num << " is a even number  " << endl;
    }
    else
    {
        cout << num << " is  a odd number" << endl;
    }
}