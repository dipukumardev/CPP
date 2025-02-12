#include <bits/stdc++.h>
using namespace std;
void fun(int n, int current = 1)
{
    if (current > n)
    {
        return;
    }
    else
    {
        cout << current << endl;
    }
    fun(n, current + 1);
}
int main()
{
    int n;
    cout << "Enter the Value of the n :";
    cin >> n;
    fun(n);
    return 0;
}