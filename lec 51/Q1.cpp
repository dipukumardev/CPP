
// 1: Print “Labour-Wise” 10 times using recursion.

#include <bits/stdc++.h>
using namespace std;
void fun(int n)
{
    if(n>=0)
    {
        cout<<"Home Work"<<endl;
    }
    fun(n-1);
}
int main()
{
    int i;
    cout << "Enter the days left for Birthdays:";
    cin >> i;
    fun(i);
}