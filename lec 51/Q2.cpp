
// 2: Print all odd number from n to 1 using recursion

#include<iostream>
using namespace std;

void even(int n, int i = 0)
{
    if(i>=n)
    {
        return ;
    }
    if(i%2 != 0)
    {
        cout<<i<<endl;
    }
    even(n, i+1);
}
int main()
{
    int n = 10;
    even(n);
}