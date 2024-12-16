// Calculate the power of 2 is the nth number;

#include<iostream>
using namespace std;


int pow(int num, int n)
{
    if(n == 1)
    {
        return num;
    }
    
    
    return num * pow(num, n-1);
}
int main()
{
    int n;
    cout<<"Enter the value of the N:";
    cin>>n;
    cout<<pow(2,n);
}

