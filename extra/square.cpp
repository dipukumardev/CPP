/*

// start of the code;

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of the n:";
    cin>>n;
   for(int i = 1; i<=n; i++)
   {
    cout<< i <<" Square is = " <<i*i <<endl;
   }
}

// end of the code;

*/


// when enter the n to find the fibonachi seris;

#include<iostream>
using namespace std;
int main()
{
    int n; 
    cout<<"Enter the Value of the n:";
    cin>>n;
    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=i; j++)

        {
            // cout<<j * j<<endl;
            
        }
    }
}



//  find the fibonacchi numerb;
#include<iostream>
using namespace std;

int fib(int n)
{
    if(n==0){
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    return fib(n-1) + fib(n-2);
}



int main()
{
    int n;
    cout<<"Enter the value of the n:";
    cin>>n;
    cout<<fib(n);
}