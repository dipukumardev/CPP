
// 3: Print all numbers from 1 to n using recursion. 

#include<iostream>
using namespace std;

void all(int n, int i  =1)
{
   if(i == n)
   {
       return;
   }
   
   if(i<=n)
   {
       cout<<i<<endl;
   }
   
   all(n , i+1);
}
int main()
{
    int i;
    cout<<"Enter the Number :";
    cin>>i;
    all(i);
}