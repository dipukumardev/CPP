#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else{
        return n*factorial(n-1); // Recursive call 
    }
}
int main()
{
    int n;
    cout<<"Ente the number Find the Factorial :";
    cin>>n;
    int ans = factorial(n);
    cout<<ans;
}