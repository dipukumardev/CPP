#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    cout<<"Enter the number :";
    cin>> n;
    int dup = n;
    int sum = 0;
    while(n>0)
    {
        int id = n % 10;
        sum += ( id * id * id);
        n = n/ 10;
    }
    
    if (sum == dup)
    {
        cout<<"Armstorm numebr";
        
    }
    else{
        cout<<"Not a Armsotm number";
    }
}