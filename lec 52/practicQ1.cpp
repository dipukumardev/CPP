#include<iostream>
using namespace std;
void print(int n , int i = 1)
{
    if(i == n)
    {
        return;
    }
    
    if(i<=n)
    {
        cout<<i <<endl;
    }
    print(n, i+1);
}
int main()
{
    int n;
    cout<<"Enter the Number Value:";
    cin>>n;
    print(n);
}