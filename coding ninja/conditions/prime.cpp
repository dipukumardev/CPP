#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the n:";
    cin >> n;
    int d;
    while (d < n)
    {
        if (n % d == 0)
        {
            cout << " Not Prime number";
        }
        else
        {
            cout << "prime number";
        }
    }
}