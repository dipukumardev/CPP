// print the factroil of n:
#include<iostream>
using namespace std;

int fact(int n)
{
    if(n == 1)
    {
        return 1;
    }
    return n * fact(n-1);
}
int main()
{
    int n;
    cout<<"Ente the fact Number:";
    cin>>n;
   int result =  fact(n);
   cout<<"Factroial of the n is "<< result <<endl;
}