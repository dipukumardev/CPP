#include <iostream>
using namespace std;

int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fib(n - 1) + fib(n - 2); // Recursive call;
    }
}
int main()
{
    int n;
    cout << "Enter the Fibonacci number :";
    cin >> n;
    int ans = fib(n);
    cout << "This is (" << ans << ") postion in the fibobacci;";
}