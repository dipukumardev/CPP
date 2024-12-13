#include<iostream>
using namespace std;
int fun(int n, int n1)
{
    int gcd = 1;
    
    for(int i = 1; i<=min(n,n1); i++)
    {
        if(n % i == 0 && n1 % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}
int main()
{
    int n, n1;
    cout<<"Enter the value of the n , n1"<<" ";
    cin>>n>>n1;
    
    int gcd = fun(n,n1);
    cout<<"n and n1 are the hcf and gcd :"<<" "<< gcd;
}