#include<bits/stdc++.h>
using namespace std;

// This code proper run on the online compiler but vs code get some get errro; alwsys get the :0 😒;

// Count the digit of the num;
int count(int num)
{
    int count1 = 0;
    while(num>0)
    {
        count1++;
        num = num/10;
    }
    
    return count1;
}



// Armstorm Numebr function;
int armstorme(int num, int finalcount)
{
    int n = num;
    int ans = 0;
    
    while(num)
    {
        int rem = num%10;
        num = num/ 10;
        ans = ans + pow(rem, finalcount);
    }
    if(ans == n)
    {
       return 1;
    }
    return 0;
}



int main()
{
    int n;
    cout<<"Enter the Value of the n:";
    cin>>n;
    
    int finalcount = count(n);
    // cout<<finalcount;
    
    cout<< armstorme(n, finalcount);
    
    
    
}